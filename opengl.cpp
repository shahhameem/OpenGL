#include<GL/freeglut.h>

void init(void){
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,100.0,0,100.0);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.2);   //set the line color
	glBegin(GL_POINTS);
		glVertex2i(50, 50);
	glEnd();
	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);			//Line A
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	//Line C
	glutInitWindowSize(640,480);
	glutInitWindowPosition(1000,200);
	glutCreateWindow("Simple Window");

	init();
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}


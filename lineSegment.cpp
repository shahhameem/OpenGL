#include <GL/glut.h>
void init (void) {
	glClearColor (1.0, 1.0, 1.0, 0.0); //Set display color to white
	
	glMatrixMode (GL_PROJECTION); //Set projection parametes
	gluOrtho2D (-100, 100, -100, 100);
}
void lineSegment(void) {
	glClear (GL_COLOR_BUFFER_BIT);	//Clear display window.
	glColor3f(1.0, 0.0, 0.0);
	glRectf(0.0, 0.0, 50.0, 50.0);
	glFlush();	//Process all openGL routines as soon as possible
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);	//Initilize GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(400, 400);
	
	glutCreateWindow("My First OpenGL code");
	init();
	glutDisplayFunc (lineSegment);
	glutMainLoop();
	return 0;
}

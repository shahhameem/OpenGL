#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>

const double TWO_PI = 6.2831853;

/* Initial display-window size.*/
GLsizei winWidth = 400, winHeight = 400;
GLuint regHex;

class screenPt
{
    private :
        GLint x, y;
    public :
        /*Default Constructor : initializes coordinate position to (0, 0).*/
        screenPt() {x = y = 0;}

        void setCoords(GLint xCoord, GLint yCoord) {x = xCoord; y = yCoord;}
        
        GLint getx() const {return x;} GLint gety() const {return y;}
};
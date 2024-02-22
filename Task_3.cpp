
#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#define poly glBegin(GL_POLYGON);
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}
void ver(double x , double y){
    x=x/10; y = y/10 ;
    glVertex2f(x, y);
}


void set_bg_color(int r, int g, int b){
    float a  = float(r)/255.0f , f = float(g)/255.0f , c = float(b)/255.0f ;
    glClearColor(a,f,c,1);
    
}

void display() {
    set_bg_color(0,25,51); // Set background color to black and opaque
       glClear(GL_COLOR_BUFFER_BIT);
       glLoadIdentity();


       glBegin(GL_LINES);
       glColor3f(0.0f, 1.0f, 0.0f);
       glVertex2f(17.0,0.0);
       glVertex2f(-17.0,0.0);
       glVertex2f(0.0,17.0);
       glVertex2f(0.0,-17.0);
       glEnd();
   //-----------------------------------------------------------------------------------------------------------------------------------------//
       glBegin(GL_QUADS);//flag-1
       glColor3f(0.0f,0.13f,0.41f);
       glVertex2f(-1.0,1.0);
       glVertex2f(-14.0,1.0);
       glVertex2f(-14.0,13.0);
       glVertex2f(-1.0,13.0);
       glEnd();


       glBegin(GL_QUADS);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-6.50,13.0);
       glVertex2f(-9,13);
       glVertex2f(-9,1);
       glVertex2f(-6.50,1);
       glEnd();
       glBegin(GL_QUAD_STRIP);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-1.0,8.0);
       glVertex2f(-1.0,5.5);
       glVertex2f(-14,8.0);
       glVertex2f(-14.0,5.5);
       glEnd();

       glBegin(GL_QUADS);
       glColor3f(0.85f,0.0f,0.0f);
       glVertex2f(-7.0,13.0);
       glVertex2f(-8.5,13);
       glVertex2f(-8.5,1);
       glVertex2f(-7.0,1);
       glEnd();
       glBegin(GL_QUAD_STRIP);
       glColor3f(0.85f,0.0f,0.0f);
       glVertex2f(-1.0,7.5);
       glVertex2f(-1.0,6);
       glVertex2f(-14,7.5);
       glVertex2f(-14.0,6);
       glEnd();

       glBegin(GL_POLYGON);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-9.0,8.0);
       glVertex2f(-11.0,8);
       glVertex2f(-14,11.5);
       glVertex2f(-14,13.0);
       glVertex2f(-13.5,13);
       glEnd();
       glBegin(GL_QUAD_STRIP);
       glColor3f(0.85f,0.0f,0.0f);
       glVertex2f(-9.5,8.0);
       glVertex2f(-10.5,8);
       glVertex2f(-14,13.0);
       glVertex2f(-14.0,12);
       glEnd();
       glBegin(GL_POLYGON);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-6.5,8.0);
       glVertex2f(-4.5,8);
       glVertex2f(-1,12.0);
       glVertex2f(-1,13.0);
       glVertex2f(-2.5,13);
       glEnd();
       glBegin(GL_QUADS);
       glColor3f(0.85f,0.0f,0.0f);
       glVertex2f(-6,8.0);
       glVertex2f(-5,8);
       glVertex2f(-1,13.0);
       glVertex2f(-2.0,13);
       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-6.5,5.5);
       glVertex2f(-4.5,5.5);
       glVertex2f(-1,2.5);
       glVertex2f(-1,1.0);
       glVertex2f(-1.5,1);
       glEnd();
       glBegin(GL_QUADS);
       glColor3f(0.850f,0.0f,0.0f);
       glVertex2f(-6,5.5);
       glVertex2f(-5.0,5.5);
       glVertex2f(-1,2);
       glVertex2f(-1.0,1);
       glEnd();
        glBegin(GL_POLYGON);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-9,5.5);
       glVertex2f(-11,5.5);
       glVertex2f(-14,2.5);
       glVertex2f(-14,1.0);
       glVertex2f(-13.5,1);
       glEnd();
       glBegin(GL_QUADS);
       glColor3f(0.85f,0.0f,0.0f);
       glVertex2f(-9.5,5.5);
       glVertex2f(-10.5,5.5);
       glVertex2f(-14,2.0);
       glVertex2f(-14.0,1);
       glEnd();





   //------------------------------------------------------------------------------------------------------------------------------------------------------------//


       glBegin(GL_QUADS);//flag-2
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(1.0,1.0);
       glVertex2f(14.0,1.0);
       glVertex2f(14.0,13.0);
       glVertex2f(1.0,13.0);
       glEnd();

       glBegin(GL_LINE_LOOP);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex2f(7.35,9);
       glVertex2f(7,8);
       glVertex2f(6.5,8.5);
       glVertex2f(6.75,7.25);
       glVertex2f(5.75,7.5);
       glVertex2f(6,7.25);
       glVertex2f(5.25,7.25);
       glVertex2f(6,7);
       glVertex2f(5.65,6.85);
       glVertex2f(6.5,6.6);
       glVertex2f(6.25,6.25);
       glVertex2f(8.25,6.25);
       glVertex2f(8,6.6);
       glVertex2f(8.85,6.85);
       glVertex2f(8.5,7);
       glVertex2f(9.25,7.25);
       glVertex2f(8.5,7.25);
       glVertex2f(8.85,7.5);
       glVertex2f(7.8,7.35);
       glVertex2f(8.25,8.5);
       glVertex2f(7.75,8);


       glEnd();

       glBegin(GL_QUADS);
       glColor3f(1.0f,0.0f,0.0f);

       glVertex2f(7.25,6.25);
       glVertex2f(7.25,5);
       glVertex2f(7.5,5);
       glVertex2f(7.5,6.25);
       glEnd();
       glBegin(GL_QUADS);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex2f(1.0,1.0);
       glVertex2f(5.0,1.0);
       glVertex2f(5.0,13.0);
       glVertex2f(1.0,13.0);
       glEnd();
       glBegin(GL_QUADS);
       glColor3f(1.0f,0.0f,0.0f);
       glVertex2f(10.0,1.0);
       glVertex2f(14.0,1.0);
       glVertex2f(14.0,13.0);
       glVertex2f(10.0,13.0);
       glEnd();








   //--------------------------------------------------------------------------------------------------//

       glBegin(GL_QUADS);//3rd flag
       glColor3f(0.80f,0.0f,0.0f);
       glVertex2f(-1.0,-1.0);
       glVertex2f(-15.0,-1.0);
       glVertex2f(-15.0,-12.0);
       glVertex2f(-1.0,-12.0);
       glEnd();

    
       glBegin(GL_QUADS);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-1.0,-2.0);
       glVertex2f(-1.0,-3.0);
       glVertex2f(-15.0,-3.0);
       glVertex2f(-15.0,-2.0);
       glEnd();
       glBegin(GL_QUAD_STRIP);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-1.0,-4.0);
       glVertex2f(-1.0,-5.0);
       glVertex2f(-15.0,-4.0);
       glVertex2f(-15.0,-5.0);
       glEnd();
       glBegin(GL_QUAD_STRIP);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-1.0,-6.0);
       glVertex2f(-1.0,-7.0);
       glVertex2f(-15.0,-6.0);
       glVertex2f(-15.0,-7.0);
       glEnd();
       glBegin(GL_QUAD_STRIP);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-1.0,-8.0);
       glVertex2f(-1.0,-9.0);
       glVertex2f(-15.0,-8.0);
       glVertex2f(-15.0,-9.0);
       glEnd();
       glBegin(GL_QUAD_STRIP);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-1.0,-10.0);
       glVertex2f(-1.0,-11.0);
       glVertex2f(-15.0,-10.0);
       glVertex2f(-15.0,-11.0);
       glEnd();

        glBegin(GL_QUADS);
       glColor3f(0.0f,0.0f,0.70f);
       glVertex2f(-15.0,-1.0);
       glVertex2f(-10.0,-1.0);
       glVertex2f(-10.0,-7.0);
       glVertex2f(-15.0,-7.0);
       glEnd();

       glBegin(GL_POLYGON);//flag polygon
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-12.0,-3.5);
       glVertex2f(-13,-3.5);
       glVertex2f(-13.25,-4.25);
       glVertex2f(-12.5,-4.85);
       glVertex2f(-11.75, -4.25);

       glEnd();
       glBegin(GL_TRIANGLES);//top
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-13.0,-3.5);
       glVertex2f(-12.0,-3.5);
       glVertex2f(-12.5,-2.5);
       glEnd();
       glBegin(GL_TRIANGLES);//top left
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-13.0,-3.5);
       glVertex2f(-14,-3.5);
       glVertex2f(-13.25,-4.5);
       glEnd();
       glBegin(GL_TRIANGLES);//bottom left
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-13.25,-4.25);
       glVertex2f(-13.5,-5.5);
       glVertex2f(-12.5,-4.85);
       glEnd();
       glBegin(GL_TRIANGLES);//bottom right
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-11.75,-4.25);
       glVertex2f(-12.5,-4.85);
       glVertex2f(-11.5,-5.50);
       glEnd();
       glBegin(GL_TRIANGLES);//top right
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(-12.0,-3.5);
       glVertex2f(-11.75,-4.25);
       glVertex2f(-11,-3.5);

       glEnd();
    
    
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f) ;

    glVertex2f(-1.0, -1.0);
    glVertex2f(-1.5, -1.0);
    glVertex2f(-1.5, -12.0);
    glVertex2f(-1.0, -12.0);
    
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f) ;

    glVertex2f(-14.5, -1.0);
    glVertex2f(-15, -1.0);
    glVertex2f(-15, -12.0);
    glVertex2f(-14.5, -12.0);
    
    glEnd();







   //--------------------------------------------------------------------------------------------------------//
       glBegin(GL_QUADS);//4th flag
       glColor3f(0.80f,0.0f,0.0f);
       glVertex2f(1.0,-2.0);
       glVertex2f(14.0,-2.0);
       glVertex2f(14.0,-13.0);
       glVertex2f(1.0,-13.0);
       glEnd();
       glBegin(GL_QUADS);//4th flag
       glColor3f(0.0f,0.0f,0.80f);
       glVertex2f(1.0,-2.0);
       glVertex2f(7.0,-2.0);
       glVertex2f(7.0,-7.0);
       glVertex2f(1.0,-7.0);
       glEnd();
       glLineWidth(5);
       glBegin(GL_LINE_LOOP);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(4.15,-5);
       glVertex2f(3,-6.5);
       glVertex2f(5,-5.5);
       glVertex2f(3,-5.5);
       glVertex2f(5,-6.5);
       glEnd();
       glBegin(GL_LINE_LOOP);
       glColor3f(1.0f,1.0f,1.0f);
       glVertex2f(4.15,-2.5);
       glVertex2f(3,-4);
       glVertex2f(5,-3);
       glVertex2f(3,-3);
       glVertex2f(5,-4);
       glEnd();





        glFlush(); // Render now
   
}
void reshape(int w , int h)
{

    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-15,15,-15,15);
    glMatrixMode(GL_MODELVIEW);

}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(1200, 1200); // Set the window's initial width & height
    glutInitWindowPosition(450, 250);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutReshapeFunc(reshape); //Reshape  the specific position for drawing like graph
    glutMainLoop(); // Enter the event-processing loop

    return 0;
}

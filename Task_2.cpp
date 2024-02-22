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

void morocco_flag(){
    glBegin(GL_POLYGON);
    glColor3ub(193, 39, 45);
    ver(2,-2);
    ver(8,-2);
    ver(8,-7);
    ver(2,-7);
    glEnd();
    
    glLineWidth(5.0f);
    glBegin(GL_LINE_STRIP);
    glColor3ub(0, 98, 51);
    
    ver(4.4,-5);
    ver(5,-3);
    ver(5.6,-5);
    ver(4.2,-4+0.33);
    ver(5.8,-4+0.33);
    ver(4.4,-5);
    
    
    /*
    
    
    ver(5.2,-4+0.33);
   
    //ver(5.4,-4-0.33);
    //
    //ver(5,-5+0.33);
    
    ver(4.6,-4-0.33);
     */
    glEnd();
}
void puerto_rico_flag(){
    poly
    glColor3ub(233, 34, 40);
    ver(-2,2);
    ver(-8,2);
    ver(-8,7);
    ver(-2,7);
    glEnd();
    
    poly
    glColor3ub(255,255,255);
    ver(-2,6);
    ver(-8,6);
    ver(-8,5);
    ver(-2,5);
    glEnd();
    
    poly
    glColor3ub(255,255,255);
    ver(-2,4);
    ver(-8,4);
    ver(-8,3);
    ver(-2,3);
    glEnd();
    
    poly
    glColor3ub(58, 94, 171);
    ver(-8,7);
    ver(-8,2);
    ver(-5,4.5);
    glEnd();
    
    
    //star
    poly
    glColor3ub(255,255,255);
    ver(-6.71,5);
    ver(-6.2,5);
    ver(-6.58,4.45);
    ver(-6.4,3.6);
    ver(-6.8,4.16);
    ver(-7.2,3.6);
    ver(-7.01,4.45);
    ver(-7.4,5);
    ver(-6.89,5);
    ver(-6.8,5.4);
    //ver(-7.71,5);
    glEnd();
}
void yogoslavia_flag(){
    //red part
    glBegin(GL_POLYGON);
    glColor3ub(221, 0, 0);
    ver(2,7);
    ver(8,7);
    ver(8,2);
    ver(2,2);
    glEnd();
    
    
    // blue part
    glBegin(GL_POLYGON);
    glColor3ub(0, 56, 147);
    ver(2,7);
    ver(8,7);
    ver(8,7-1.666);
    ver(2,7-1.66);
    glEnd();
    // white part
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    ver(2,7-1.666);
    ver(8,7-1.666);
    ver(8,7-1.666-1.666);
    ver(2,7-1.66-1.666);
    glEnd();
    
    /*
     a
     b
     c
     d
     e
     f
     g
     h
     i
     j
     */
    // yellow star
    poly
    glColor3ub(255, 205, 0);
    ver(5.2,5.67);
    ver(6.4,5.67);
    ver(5.6,(5-0.33));
    ver(6,3);
    ver(5,4);
    ver(4,3);
    ver(4.4,(5-0.33));
    ver(3.6,5.67);
    ver(4.8,5.67);
    ver(5,6.33);
    
    glEnd();
    
    poly
    glColor3ub(221, 0, 0);
    ver(5.2,5+0.33+0.2);
    ver(6,5+0.33+0.2);
    ver(5.4,(5-0.33));
    ver(5.8,3+0.33);
    ver(5,4+0.33);
    ver(4.2,3+0.33);
    ver(4.6,(5-0.33));
    ver(4,5+0.33+0.2);
    ver(4.8,5.67-0.33);
    ver(5,6.33-0.33);
    
    glEnd();
}
void congo_flag(){
    poly
    glColor3ub(255, 209, 0);
    ver(-2,-7);
    ver(-8,-7);
    ver(-8,-2);
    ver(-2,-2);
    glEnd();
    
    poly
    glColor3ub(0, 133, 202);
    ver(-8,-5.8);
    ver(-2.2,-2);
    ver(-8,-2);
    glEnd();
    
    poly
    glColor3ub(0, 133, 202);
    ver(-7.8,-7);
    ver(-2,-3.2);
    ver(-2,-7);
    glEnd();
    
    
    poly
    glColor3ub(239, 51, 64);
    ver(-8,-6);
    ver(-2,-2);
    ver(-2,-3);
    ver(-8,-7);
    glEnd();
    
    //star
    poly
    glColor3ub(255, 209, 0);
    ver(-6.37,-2.8);
    ver(-5.8,-2.8);
    ver(-6.25,-3.12);
    ver(-6,-3.8);
  //  ver(-6.8,-4.16);
    ver(-6.6,-3.38);
    ver(-7.2,-3.8);
    ver(-6.94,-3.12);
    ver(-7.4,-2.8);
    ver(-6.82,-2.8);
    ver(-6.6,-2.2);
    glEnd();

    
}

void display() {
    
    set_bg_color(0, 25,51);    // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    // Clear the color buffer (background)
    
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.0f, -1.0f);
    glEnd();
    
    morocco_flag();
    yogoslavia_flag();
    puerto_rico_flag();
    congo_flag();
    //star();

     glFlush(); // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 1200); // Set the window's initial width & height
    glutInitWindowPosition(250, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}

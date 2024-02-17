#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
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

void qatar_flag(){
    glBegin(GL_POLYGON);
    // white part
    glColor3f(1.0f, 1.0f, 1.0f);
    //glColor3ub(138,21,56);
    //glVertex2f(-0.8,0.2);
    ver(-8,2);
    glVertex2f(-0.2,0.2);
    glVertex2f(-0.2,0.7);
    glVertex2f(-0.8,0.7);
    //ver();
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(138,21,56);
    ver(-6,7);
    ver(-2,7);
    ver(-2,2);
    ver(-6,2);
    glEnd();
    double dist = 5/double(10);
    double db2 = (dist/2);
    //double  =d;
    glBegin(GL_POLYGON);
    glColor3ub(138,21,56);
    ver(-6,2);
    ver(-6.7,2);
    ver(-6, 2+db2);
    glEnd();
    
    float dd = 2+db2;
    for(int i=0;i<9;++i){
        glBegin(GL_POLYGON);
        glColor3ub(138,21,56);
        ver(-6,dd);
        dd+=db2;
        ver(-6.7,dd);
        dd+=db2;
        ver(-6, dd);
        glEnd();
    }
    
    glBegin(GL_POLYGON);
    glColor3ub(138,21,56);
    ver(-6,dd);
    dd+=db2;
    ver(-6.7,dd);
    ver(-6, dd);
    glEnd();
    
    
    
    //ver(-8,2+d+d+d);
    //ver(-6,2+d+d+d+d);
    //ver(-8,2+d+d+d+d+d);
   // ver(-6,2+(dist/2));
    //ver(-6.3,2+dist);
    
    
    
    
    glEnd();
    
}
void south_africa_flag(){
    glBegin(GL_POLYGON);
    glColor3ub(0, 119, 73);
    ver(2,2);
    ver(2,7);
    ver(8,7);
    ver(8,2);
    glEnd();
    
   
        
    glBegin(GL_POLYGON);
    glColor3ub(255, 184, 28);
    ver(2,6.5);
    ver(4,4.5);
    ver(2,2.5);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    ver(2,6);
    ver(3.5,4.5);
    ver(2,3);
    glEnd();
    
    //upper white
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    ver(3,7);
    ver(5,5);
    ver(8,5);
    ver(8,7);
    glEnd();
    
    
    // lower white
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    ver(3,2);
    ver(5,4);
    ver(8,4);
    ver(8,2);
    glEnd();
    
    // red
    glBegin(GL_POLYGON);
    glColor3ub(224, 60, 49);
    ver(3.35,7);
    ver(5.1,5.2);
    ver(8,5.2);
    ver(8,7);
    glEnd();
    
    
    // blue
    glBegin(GL_POLYGON);
    glColor3ub(0, 20, 137);
    ver(3.35,2);
    ver(5.1,3.8);
    ver(8,3.8);
    ver(8,2);
    glEnd();
    
    

    
}
void jamaica_flag(){
    glBegin(GL_POLYGON);
    glColor3ub(254, 209, 0);
    ver(2,-2);
    ver(8,-2);
    ver(8,-7);
    ver(2,-7);
    glEnd();
    
    
    // upper green
    glBegin(GL_POLYGON);
    glColor3ub(0, 155, 58);
    ver(2.5,-2);
    ver(5,-4);
    ver(7.5,-2);
    glEnd();
    
    
    // lower green
    glBegin(GL_POLYGON);
    glColor3ub(0, 155, 58);
    ver(2.5,-7);
    ver(5,-5);
    ver(7.5,-7);
    glEnd();
    
    
    // left black
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    ver(2,-2.5);
    ver(4.5,-4.5);
    ver(2,-6.5);
    glEnd();
    
    // right black
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    ver(8,-2.5);
    ver(5.5,-4.5);
    ver(8,-6.5);
    glEnd();
    
    
}
void iceland_flag(){
    glBegin(GL_POLYGON);
    glColor3ub(2, 82, 156);
    ver(-2,-2);
    ver(-8,-2);
    ver(-8,-7);
    ver(-2,-7);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(255,255 ,255 );
    ver(-2,-4);
    ver(-8,-4);
    ver(-8,-5);
    ver(-2,-5);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(255,255 ,255 );
    ver(-6.5,-2);
    ver(-6.5,-7);
    ver(-5.5,-7);
    ver(-5.5,-2);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(220, 30, 53 );
    ver(-2,-4.25);
    ver(-8,-4.25);
    ver(-8,-4.75);
    ver(-2,-4.75);
    glEnd();
    
    glBegin(GL_POLYGON);
    glColor3ub(220, 30, 53 );
    ver(-6.25,-2);
    ver(-6.25,-7);
    ver(-5.75,-7);
    ver(-5.75,-2);
    glEnd();
}
void display() {
    
    set_bg_color(66, 73,73);    // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    // Clear the color buffer (background)
    
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.0f, -1.0f);
    glEnd();
    
    qatar_flag();
    south_africa_flag();
    jamaica_flag();
    iceland_flag();
    

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

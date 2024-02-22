#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#define poly glBegin(GL_POLYGON);
void set_bg_color(int r, int g, int b){
    float a  = float(r)/255.0f , f = float(g)/255.0f , c = float(b)/255.0f ;
    glClearColor(a,f,c,1);
    
}
void display() {
    set_bg_color(0,25,51); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
 
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);
    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);
    glEnd();
 
    ///1st
    glBegin(GL_POLYGON);
    glColor3f(0.7f,0.0f,0.0f);
    glVertex2f(0.1f,0.1f);
    glVertex2f(0.9f,0.1f);
    glVertex2f(0.9f,0.8f);
    glVertex2f(0.1f,0.8f);
    glEnd();
 
    //for left top corner blue
    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);
    glVertex2f(0.1f,0.42f);
    glVertex2f(0.36f,0.42f);
    glVertex2f(0.36f,0.8f);
    glVertex2f(0.1f,0.8f);
    glEnd();
    //for left bottom corner star
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.135f,0.48f);//1
    glVertex2f(0.143f,0.5f);//2
    glVertex2f(0.15f,0.48f);//3
    glVertex2f(0.16f,0.48f);//4
    glVertex2f(0.15f,0.465f);//5
    glVertex2f(0.16f,0.44f);//6
    glVertex2f(0.143f,0.458f);//7
    glVertex2f(0.12f,0.44f);//8
    glVertex2f(0.13f,0.465f);//9
    glVertex2f(0.12f,0.48f);//10
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.215f,0.48f);//1
    glVertex2f(0.22f,0.5f);//2
    glVertex2f(0.23f,0.48f);//3
    glVertex2f(0.245f,0.48f);//4
    glVertex2f(0.234f,0.465f);//5
    glVertex2f(0.24f,0.44f);//6
    glVertex2f(0.22f,0.458f);//7
    glVertex2f(0.2f,0.44f);//8
    glVertex2f(0.21f,0.465f);//9
    glVertex2f(0.195f,0.48f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.285f,0.48f);//1
    glVertex2f(0.29f,0.5f);//2
    glVertex2f(0.3f,0.48f);//3
    glVertex2f(0.318f,0.48f);//4
    glVertex2f(0.305f,0.465f);//5
    glVertex2f(0.318f,0.44f);//6
    glVertex2f(0.293f,0.458f);//7
    glVertex2f(0.275f,0.44f);//8
    glVertex2f(0.285f,0.465f);//9
    glVertex2f(0.27f,0.48f);//10
    glEnd();
 
    //for 3rd row star
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.135f,0.63f);//1
    glVertex2f(0.143f,0.645f);//2
    glVertex2f(0.15f,0.63f);//3
    glVertex2f(0.163f,0.63f);//4
    glVertex2f(0.153f,0.613f);//5
    glVertex2f(0.16f,0.595f);//6
    glVertex2f(0.141f,0.61f);//7
    glVertex2f(0.12f,0.595f);//8
    glVertex2f(0.13f,0.61f);//9
    glVertex2f(0.12f,0.63f);//10
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.215f,0.63f);//1
    glVertex2f(0.22f,0.645f);//2
    glVertex2f(0.23f,0.63f);//3
    glVertex2f(0.245f,0.63f);//4
    glVertex2f(0.234f,0.61f);//5
    glVertex2f(0.24f,0.595f);//6
    glVertex2f(0.22f,0.608f);//7
    glVertex2f(0.2f,0.595f);//8
    glVertex2f(0.21f,0.61f);//9
    glVertex2f(0.195f,0.63f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.285f,0.63f);//1
    glVertex2f(0.29f,0.645f);//2
    glVertex2f(0.3f,0.63f);//3
    glVertex2f(0.318f,0.63f);//4
    glVertex2f(0.305f,0.61f);//5
    glVertex2f(0.318f,0.595f);//6
    glVertex2f(0.293f,0.608f);//7
    glVertex2f(0.275f,0.595f);//8
    glVertex2f(0.285f,0.61f);//9
    glVertex2f(0.27f,0.63f);//10
    glEnd();
 
    //for 5th row star
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.135f,0.76f);//1
    glVertex2f(0.143f,0.78f);//2
    glVertex2f(0.15f,0.76f);//3
    glVertex2f(0.163f,0.76f);//4
    glVertex2f(0.153f,0.74f);//5
    glVertex2f(0.16f,0.72f);//6
    glVertex2f(0.141f,0.735f);//7
    glVertex2f(0.12f,0.72f);//8
    glVertex2f(0.13f,0.74f);//9
    glVertex2f(0.12f,0.76f);//10
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.215f,0.76f);//1
    glVertex2f(0.22f,0.78f);//2
    glVertex2f(0.23f,0.76f);//3
    glVertex2f(0.245f,0.76f);//4
    glVertex2f(0.234f,0.74f);//5
    glVertex2f(0.24f,0.72f);//6
    glVertex2f(0.22f,0.735f);//7
    glVertex2f(0.2f,0.72f);//8
    glVertex2f(0.21f,0.74f);//9
    glVertex2f(0.195f,0.76f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.285f,0.76f);//1
    glVertex2f(0.29f,0.78f);//2
    glVertex2f(0.3f,0.76f);//3
    glVertex2f(0.318f,0.76f);//4
    glVertex2f(0.305f,0.74f);//5
    glVertex2f(0.318f,0.72f);//6
    glVertex2f(0.293f,0.735f);//7
    glVertex2f(0.275f,0.72f);//8
    glVertex2f(0.285f,0.74f);//9
    glVertex2f(0.27f,0.76f);//10
    glEnd();
 
 
    //2nd row
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.17f,0.558f);//1
    glVertex2f(0.18f,0.57f);//2
    glVertex2f(0.19f,0.558f);//3
    glVertex2f(0.2f,0.558f);//4
    glVertex2f(0.195f,0.54f);//5
    glVertex2f(0.2f,0.52f);//6
    glVertex2f(0.18f,0.533f);//7
    glVertex2f(0.16f,0.52f);//8
    glVertex2f(0.17f,0.54f);//9
    glVertex2f(0.155f,0.558f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.25f,0.558f);//1
    glVertex2f(0.26f,0.57f);//2
    glVertex2f(0.27f,0.558f);//3
    glVertex2f(0.282f,0.558f);//4
    glVertex2f(0.272f,0.54f);//5
    glVertex2f(0.28f,0.52f);//6
    glVertex2f(0.26f,0.533f);//7
    glVertex2f(0.24f,0.52f);//8
    glVertex2f(0.25f,0.54f);//9
    glVertex2f(0.23f,0.558f);//10
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.32f,0.558f);//1
    glVertex2f(0.33f,0.57f);//2
    glVertex2f(0.34f,0.558f);//3
    glVertex2f(0.35f,0.558f);//4
    glVertex2f(0.34f,0.54f);//5
    glVertex2f(0.35f,0.52f);//6
    glVertex2f(0.33f,0.533f);//7
    glVertex2f(0.31f,0.52f);//8
    glVertex2f(0.33f,0.538f);//9
    glVertex2f(0.3f,0.558f);//10
    glEnd();
 
    //4th row star
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.173f,0.695f);//1
    glVertex2f(0.18f,0.718f);//2
    glVertex2f(0.19f,0.695f);//3
    glVertex2f(0.205f,0.695f);//4
    glVertex2f(0.195f,0.68f);//5
    glVertex2f(0.2f,0.66f);//6
    glVertex2f(0.18f,0.67f);//7
    glVertex2f(0.16f,0.66f);//8
    glVertex2f(0.17f,0.68f);//9
    glVertex2f(0.158f,0.695f);//10
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.25f,0.695f);//1
    glVertex2f(0.26f,0.718f);//2
    glVertex2f(0.27f,0.695f);//3
    glVertex2f(0.282f,0.695f);//4
    glVertex2f(0.272f,0.68f);//5
    glVertex2f(0.28f,0.66f);//6
    glVertex2f(0.26f,0.67f);//7
    glVertex2f(0.24f,0.66f);//8
    glVertex2f(0.25f,0.68f);//9
    glVertex2f(0.23f,0.695f);//10
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.32f,0.695f);//1
    glVertex2f(0.33f,0.718f);//2
    glVertex2f(0.339f,0.695f);//3
    glVertex2f(0.352f,0.695f);//4
    glVertex2f(0.34f,0.68f);//5
    glVertex2f(0.35f,0.66f);//6
    glVertex2f(0.33f,0.67f);//7
    glVertex2f(0.305f,0.66f);//8
    glVertex2f(0.33f,0.675f);//9
    glVertex2f(0.295f,0.695f);//10
    glEnd();
 
    //for white rectangle
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,0.14f);
    glVertex2f(0.9f,0.14f);
    glVertex2f(0.9f,0.18f);
    glVertex2f(0.1f,0.18f);
 
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,0.22f);
    glVertex2f(0.9f,0.22f);
    glVertex2f(0.9f,0.26f);
    glVertex2f(0.1f,0.26f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,0.3f);
    glVertex2f(0.9f,0.3f);
    glVertex2f(0.9f,0.34f);
    glVertex2f(0.1f,0.34f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.1f,0.38f);
    glVertex2f(0.9f,0.38f);
    glVertex2f(0.9f,0.42f);
    glVertex2f(0.1f,0.42f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.36f,0.46f);
    glVertex2f(0.9f,0.46f);
    glVertex2f(0.9f,0.5f);
    glVertex2f(0.36f,0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.36f,0.54f);
    glVertex2f(0.9f,0.54f);
    glVertex2f(0.9f,0.58f);
    glVertex2f(0.36f,0.58f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.36f,0.62f);
    glVertex2f(0.9f,0.62f);
    glVertex2f(0.9f,0.66f);
    glVertex2f(0.36f,0.66f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.36f,0.7f);
    glVertex2f(0.9f,0.7f);
    glVertex2f(0.9f,0.74f);
    glVertex2f(0.36f,0.74f);
    glEnd();
 
    //for left bottom corner star
    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(0.135f,0.48f);//1
    glVertex2f(0.143f,0.5f);//2
    glVertex2f(0.15f,0.48f);//3
    glVertex2f(0.16f,0.48f);//4
    glVertex2f(0.15f,0.465f);//5
    glVertex2f(0.16f,0.44f);//6
    glVertex2f(0.143f,0.458f);//7
    glVertex2f(0.12f,0.44f);//8
    glVertex2f(0.13f,0.465f);//9
    glVertex2f(0.12f,0.48f);//10
    glEnd();
 
 
//2ND QURDENT START EUROPE UNION
    glBegin(GL_POLYGON);
    glColor3f(0.0f,0.0f,0.6f);
    glVertex2f(-0.1f,0.1f);
    glVertex2f(-0.9f,0.1f);
    glVertex2f(-0.9f,0.8f);
    glVertex2f(-0.1f,0.8f);
    glEnd();
//BOTTOM MIDDLE STAR
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.51f,0.23f);//1
    glVertex2f(-0.5f,0.245f);//2
    glVertex2f(-0.49f,0.23f);//3
    glVertex2f(-0.475f,0.23f);//4
    glVertex2f(-0.49f,0.21f);//5
    glVertex2f(-0.48f,0.19f);//6
    glVertex2f(-0.5f,0.2f);//7
    glVertex2f(-0.52f,0.19f);//8
    glVertex2f(-0.51f,0.208f);//9
    glVertex2f(-0.525f,0.23f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.51f,0.69f);//1
    glVertex2f(-0.5f,0.71f);//2
    glVertex2f(-0.49f,0.69f);//3
    glVertex2f(-0.475f,0.69f);//4
    glVertex2f(-0.49f,0.675f);//5
    glVertex2f(-0.48f,0.65f);//6
    glVertex2f(-0.5f,0.66f);//7
    glVertex2f(-0.52f,0.65f);//8
    glVertex2f(-0.51f,0.675f);//9
    glVertex2f(-0.525f,0.69f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.42f,0.26f);//1
    glVertex2f(-0.41f,0.275f);//2
    glVertex2f(-0.4f,0.26f);//3
    glVertex2f(-0.387f,0.26f);//4
    glVertex2f(-0.4f,0.24f);//5
    glVertex2f(-0.39f,0.22f);//6
    glVertex2f(-0.41f,0.23f);//7
    glVertex2f(-0.43f,0.22f);//8
    glVertex2f(-0.42f,0.24f);//9
    glVertex2f(-0.435f,0.26f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.42f,0.66f);//1
    glVertex2f(-0.41f,0.675f);//2
    glVertex2f(-0.4f,0.66f);//3
    glVertex2f(-0.387f,0.66f);//4
    glVertex2f(-0.4f,0.64f);//5
    glVertex2f(-0.39f,0.62f);//6
    glVertex2f(-0.41f,0.63f);//7
    glVertex2f(-0.43f,0.62f);//8
    glVertex2f(-0.42f,0.64f);//9
    glVertex2f(-0.435f,0.66f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.36f,0.34f);//1
    glVertex2f(-0.35f,0.355f);//2
    glVertex2f(-0.34f,0.34f);//3
    glVertex2f(-0.3272f,0.34f);//4
    glVertex2f(-0.34f,0.327f);//5
    glVertex2f(-0.32f,0.3f);//6
    glVertex2f(-0.345f,0.315f);//7
    glVertex2f(-0.365f,0.3f);//8
    glVertex2f(-0.35f,0.32f);//9
    glVertex2f(-0.375f,0.34f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.36f,0.58f);//1
    glVertex2f(-0.35f,0.6f);//2
    glVertex2f(-0.34f,0.58f);//3
    glVertex2f(-0.3272f,0.58f);//4
    glVertex2f(-0.34f,0.565f);//5
    glVertex2f(-0.323f,0.54f);//6
    glVertex2f(-0.345f,0.555f);//7
    glVertex2f(-0.365f,0.54f);//8
    glVertex2f(-0.35f,0.558f);//9
    glVertex2f(-0.375f,0.58f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.33f,0.46f);//1
    glVertex2f(-0.32f,0.48f);//2
    glVertex2f(-0.31f,0.46f);//3
    glVertex2f(-0.287f,0.46f);//4
    glVertex2f(-0.307f,0.445f);//5
    glVertex2f(-0.287f,0.43f);//6
    glVertex2f(-0.32f,0.442f);//7
    glVertex2f(-0.344f,0.43f);//8
    glVertex2f(-0.325f,0.445f);//9
    glVertex2f(-0.36f,0.46f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.62f,0.26f);//1
    glVertex2f(-0.61f,0.28f);//2
    glVertex2f(-0.6f,0.26f);//3
    glVertex2f(-0.587f,0.26f);//4
    glVertex2f(-0.6f,0.24f);//5
    glVertex2f(-0.59f,0.22f);//6
    glVertex2f(-0.61f,0.23f);//7
    glVertex2f(-0.63f,0.22f);//8
    glVertex2f(-0.62f,0.24f);//9
    glVertex2f(-0.635f,0.26f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.62f,0.66f);//1
    glVertex2f(-0.61f,0.675f);//2
    glVertex2f(-0.6f,0.66f);//3
    glVertex2f(-0.587f,0.66f);//4
    glVertex2f(-0.6f,0.64f);//5
    glVertex2f(-0.59f,0.62f);//6
    glVertex2f(-0.61f,0.63f);//7
    glVertex2f(-0.63f,0.62f);//8
    glVertex2f(-0.62f,0.64f);//9
    glVertex2f(-0.635f,0.66f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.66f,0.34f);//1
    glVertex2f(-0.65f,0.355f);//2
    glVertex2f(-0.64f,0.34f);//3
    glVertex2f(-0.6272f,0.34f);//4
    glVertex2f(-0.64f,0.327f);//5
    glVertex2f(-0.62f,0.3f);//6
    glVertex2f(-0.645f,0.315f);//7
    glVertex2f(-0.665f,0.3f);//8
    glVertex2f(-0.65f,0.32f);//9
    glVertex2f(-0.675f,0.34f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.66f,0.58f);//1
    glVertex2f(-0.65f,0.6f);//2
    glVertex2f(-0.64f,0.58f);//3
    glVertex2f(-0.6272f,0.58f);//4
    glVertex2f(-0.64f,0.565f);//5
    glVertex2f(-0.623f,0.54f);//6
    glVertex2f(-0.645f,0.555f);//7
    glVertex2f(-0.665f,0.54f);//8
    glVertex2f(-0.65f,0.558f);//9
    glVertex2f(-0.675f,0.58f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,0.0f);
    glVertex2f(-0.68f,0.46f);//1
    glVertex2f(-0.67f,0.48f);//2
    glVertex2f(-0.66f,0.46f);//3
    glVertex2f(-0.642f,0.46f);//4
    glVertex2f(-0.662f,0.448f);//5
    glVertex2f(-0.65f,0.425f);//6
    glVertex2f(-0.675f,0.442f);//7
    glVertex2f(-0.7f,0.425f);//8
    glVertex2f(-0.69f,0.445f);//9
    glVertex2f(-0.7f,0.46f);//10
    glEnd();
 
 
//2ND QURDENT END
 
 
//3RD QURDENT START
    glBegin(GL_POLYGON);
    glColor3f(0.7f,0.0f,0.0f);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.9f,-0.1f);
    glVertex2f(-0.9f,-0.8f);
    glVertex2f(-0.1f,-0.8f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(-0.1f,-0.16f);
    glVertex2f(-0.9f,-0.16f);
    glVertex2f(-0.9f,-0.22f);
    glVertex2f(-0.1f,-0.22f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(-0.1f,-0.28f);
    glVertex2f(-0.9f,-0.28f);
    glVertex2f(-0.9f,-0.34f);
    glVertex2f(-0.1f,-0.34f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(-0.1f,-0.42f);
    glVertex2f(-0.9f,-0.42f);
    glVertex2f(-0.9f,-0.48f);
    glVertex2f(-0.1f,-0.48f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(-0.1f,-0.53f);
    glVertex2f(-0.9f,-0.53f);
    glVertex2f(-0.9f,-0.58f);
    glVertex2f(-0.1f,-0.58f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(-0.1f,-0.64f);
    glVertex2f(-0.9f,-0.64f);
    glVertex2f(-0.9f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(-0.1f,-0.76f);
    glVertex2f(-0.9f,-0.76f);
    glVertex2f(-0.9f,-0.81f);
    glVertex2f(-0.1f,-0.81f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.7f,0.0f,0.0f);
    glVertex2f(-0.1f,-0.81f);
    glVertex2f(-0.9f,-0.81f);
    glVertex2f(-0.9f,-0.86f);
    glVertex2f(-0.1f,-0.86f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);
    glVertex2f(-0.64f,-0.1f);
    glVertex2f(-0.9f,-0.1f);
    glVertex2f(-0.9f,-0.48f);
    glVertex2f(-0.64f,-0.48f);
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.9f,-0.1f);//1
    glVertex2f(-0.86f,-0.1f);//2
    glVertex2f(-0.64f,-0.42f);//3
    glVertex2f(-0.64f,-0.48f);//4
    glVertex2f(-0.66f,-0.48f);//5
    glVertex2f(-0.9f,-0.14f);//6
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.9f,-0.48f);
    glVertex2f(-0.86f,-0.48f);
    glVertex2f(-0.64f,-0.14f);
    glVertex2f(-0.64f,-0.1f);
    glVertex2f(-0.67f,-0.1f);
    glVertex2f(-0.9f,-0.42f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);
    glVertex2f(-0.64f,-0.26f);
    glVertex2f(-0.64f,-0.31f);
    glVertex2f(-0.9f,-0.31f);
    glVertex2f(-0.9f,-0.26f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 11, 48);
    glVertex2f(-0.742f,-0.1f);
    glVertex2f(-0.742f,-0.48f);
    glVertex2f(-0.782f,-0.48f);
    glVertex2f(-0.782f,-0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.64f,-0.26f);
    glVertex2f(-0.64f,-0.25f);
    glVertex2f(-0.73f,-0.25f);
    glVertex2f(-0.73f,-0.26f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.64f,-0.31f);
    glVertex2f(-0.64f,-0.32f);
    glVertex2f(-0.73f,-0.32f);
    glVertex2f(-0.73f,-0.31f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f,-0.31f);
    glVertex2f(-0.8f,-0.32f);
    glVertex2f(-0.9f,-0.32f);
    glVertex2f(-0.9f,-0.31f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.8f,-0.26f);
    glVertex2f(-0.8f,-0.25f);
    glVertex2f(-0.9f,-0.25f);
    glVertex2f(-0.9f,-0.26f);
    glEnd();
 
 
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.78f,-0.1f);
    glVertex2f(-0.79f,-0.1f);
    glVertex2f(-0.79f,-0.22f);
    glVertex2f(-0.78f,-0.22f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.78f,-0.36f);
    glVertex2f(-0.79f,-0.36f);
    glVertex2f(-0.79f,-0.48f);
    glVertex2f(-0.78f,-0.48f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.742f,-0.1f);
    glVertex2f(-0.735f,-0.1f);
    glVertex2f(-0.735f,-0.22f);
    glVertex2f(-0.742f,-0.22f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.742f,-0.36f);
    glVertex2f(-0.735f,-0.36f);
    glVertex2f(-0.735f,-0.48f);
    glVertex2f(-0.742f,-0.48f);
    glEnd();
 
    /// 4th Flag
    glBegin(GL_POLYGON);
    glColor3f(0.7f,0.0f,0.0f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.9f,-0.1f);
    glVertex2f(0.9f,-0.8f);
    glVertex2f(0.1f,-0.8f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(0.1f,-0.16f);
    glVertex2f(0.9f,-0.16f);
    glVertex2f(0.9f,-0.22f);
    glVertex2f(0.1f,-0.22f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(0.1f,-0.28f);
    glVertex2f(0.9f,-0.28f);
    glVertex2f(0.9f,-0.34f);
    glVertex2f(0.1f,-0.34f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(0.1f,-0.42f);
    glVertex2f(0.9f,-0.42f);
    glVertex2f(0.9f,-0.48f);
    glVertex2f(0.1f,-0.48f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(0.1f,-0.53f);
    glVertex2f(0.9f,-0.53f);
    glVertex2f(0.9f,-0.58f);
    glVertex2f(0.1f,-0.58f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(0.1f,-0.64f);
    glVertex2f(0.9f,-0.64f);
    glVertex2f(0.9f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.f,1.0f,1.0f);
    glVertex2f(0.1f,-0.76f);
    glVertex2f(0.9f,-0.76f);
    glVertex2f(0.9f,-0.81f);
    glVertex2f(0.1f,-0.81f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.7f,0.0f,0.0f);
    glVertex2f(0.1f,-0.81f);
    glVertex2f(0.9f,-0.81f);
    glVertex2f(0.9f,-0.86f);
    glVertex2f(0.1f,-0.86f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 39, 104);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.36f,-0.1f);
    glVertex2f(0.36f,-0.48f);
    glVertex2f(0.1f,-0.48f);
    glEnd();
    //STAR
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.15f,-0.22f);//1
    glVertex2f(0.16f,-0.2f);//2
    glVertex2f(0.17f,-0.22f);//3
    glVertex2f(0.19f,-0.22f);//4
    glVertex2f(0.173f,-0.24f);//5
    glVertex2f(0.185f,-0.255f);//6
    glVertex2f(0.155f,-0.24f);//7
    glVertex2f(0.13f,-0.255f);//8
    glVertex2f(0.15f,-0.24f);//9
    glVertex2f(0.125f,-0.22f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.15f,-0.36f);//1
    glVertex2f(0.16f,-0.34f);//2
    glVertex2f(0.17f,-0.36f);//3
    glVertex2f(0.19f,-0.36f);//4
    glVertex2f(0.173f,-0.37f);//5
    glVertex2f(0.185f,-0.39f);//6
    glVertex2f(0.155f,-0.38f);//7
    glVertex2f(0.13f,-0.39f);//8
    glVertex2f(0.15f,-0.37f);//9
    glVertex2f(0.125f,-0.36f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.29f,-0.36f);//1
    glVertex2f(0.3f,-0.34f);//2
    glVertex2f(0.31f,-0.36f);//3
    glVertex2f(0.33f,-0.36f);//4
    glVertex2f(0.32f,-0.37f);//5
    glVertex2f(0.33f,-0.39f);//6
    glVertex2f(0.3f,-0.38f);//7
    glVertex2f(0.273f,-0.39f);//8
    glVertex2f(0.29f,-0.37f);//9
    glVertex2f(0.27f,-0.36f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.29f,-0.22f);//1
    glVertex2f(0.3f,-0.2f);//2
    glVertex2f(0.31f,-0.22f);//3
    glVertex2f(0.33f,-0.22f);//4
    glVertex2f(0.32f,-0.24f);//5
    glVertex2f(0.33f,-0.255f);//6
    glVertex2f(0.3f,-0.24f);//7
    glVertex2f(0.273f,-0.255f);//8
    glVertex2f(0.29f,-0.24f);//9
    glVertex2f(0.27f,-0.22f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.13f,-0.28f);//1
    glVertex2f(0.14f,-0.26f);//2
    glVertex2f(0.15f,-0.28f);//3
    glVertex2f(0.17f,-0.28f);//4
    glVertex2f(0.15f,-0.29f);//5
    glVertex2f(0.17f,-0.31f);//6
    glVertex2f(0.14f,-0.3f);//7
    glVertex2f(0.11f,-0.31f);//8
    glVertex2f(0.13f,-0.3f);//9
    glVertex2f(0.11f,-0.28f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.3f,-0.28f);//1
    glVertex2f(0.31f,-0.26f);//2
    glVertex2f(0.32f,-0.28f);//3
    glVertex2f(0.34f,-0.28f);//4
    glVertex2f(0.325f,-0.29f);//5
    glVertex2f(0.34f,-0.31f);//6
    glVertex2f(0.305f,-0.29f);//7
    glVertex2f(0.28f,-0.31f);//8
    glVertex2f(0.315f,-0.3f);//9
    glVertex2f(0.28f,-0.28f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.24f,-0.44f);//1
    glVertex2f(0.25f,-0.42f);//2
    glVertex2f(0.26f,-0.44f);//3
    glVertex2f(0.28f,-0.44f);//4
    glVertex2f(0.26f,-0.45f);//5
    glVertex2f(0.28f,-0.47f);//6
    glVertex2f(0.25f,-0.46f);//7
    glVertex2f(0.227f,-0.47f);//8
    glVertex2f(0.24f,-0.46f);//9
    glVertex2f(0.22f,-0.44f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.24f,-0.16f);//1
    glVertex2f(0.25f,-0.14f);//2
    glVertex2f(0.26f,-0.16f);//3
    glVertex2f(0.28f,-0.16f);//4
    glVertex2f(0.26f,-0.17f);//5
    glVertex2f(0.28f,-0.19f);//6
    glVertex2f(0.25f,-0.18f);//7
    glVertex2f(0.227f,-0.19f);//8
    glVertex2f(0.24f,-0.18f);//9
    glVertex2f(0.22f,-0.16f);//10
    glEnd();
 
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.17f,-0.16f);//1
    glVertex2f(0.18f,-0.14f);//2
    glVertex2f(0.19f,-0.16f);//3
    glVertex2f(0.21f,-0.16f);//4
    glVertex2f(0.19f,-0.17f);//5
    glVertex2f(0.21f,-0.19f);//6
    glVertex2f(0.18f,-0.18f);//7
    glVertex2f(0.16f,-0.19f);//8
    glVertex2f(0.19f,-0.18f);//9
    glVertex2f(0.15f,-0.16f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.17f,-0.42f);//1
    glVertex2f(0.18f,-0.4f);//2
    glVertex2f(0.19f,-0.42f);//3
    glVertex2f(0.21f,-0.42f);//4
    glVertex2f(0.19f,-0.43f);//5
    glVertex2f(0.21f,-0.45f);//6
    glVertex2f(0.18f,-0.44f);//7
    glVertex2f(0.16f,-0.45f);//8
    glVertex2f(0.19f,-0.44f);//9
    glVertex2f(0.15f,-0.42f);//10
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex2f(0.28f,-0.42f);//1
    glVertex2f(0.29f,-0.4f);//2
    glVertex2f(0.30f,-0.42f);//3
    glVertex2f(0.32f,-0.42f);//4
    glVertex2f(0.30f,-0.43f);//5
    glVertex2f(0.32f,-0.45f);//6
    glVertex2f(0.29f,-0.44f);//7
    glVertex2f(0.27f,-0.45f);//8
    glVertex2f(0.30f,-0.44f);//9
    glVertex2f(0.26f,-0.42f);//10
    glEnd();
 
 
 
 
     glFlush(); // Render now
}
 
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(840, 580); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}


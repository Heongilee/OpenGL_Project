#include "Myheaders.h"

static GLfloat spin = 0.0;
static GLfloat zoom = -200.0;
static int mouse_leftClick_state = 0;
static int mouse_rightClick_state = 0;
static GLsizei my_Window_width;
static GLsizei my_Window_height;
static int camera_angle_state = 0;

void drawDoor(void);
void drawWall_1(GLfloat x, GLfloat y, GLfloat z, GLfloat px, GLfloat py, GLfloat pz, GLubyte red, GLubyte green, GLubyte blue);
void display(void);
void spinDisplay(void);
void init();
void reshape(int w, int h);
void keyboard(unsigned char key, int x, int y);
void mouse(int button, int state, int x, int y);
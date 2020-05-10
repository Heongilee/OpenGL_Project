#include <stdio.h>
#include <gl/glut.h>

int cx = 0, cy = 0, cz = 0;
int cn;
struct Quads {
	int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;	//location
	float r, g, b;	//color
	int state;
	int total;
}; Quads Q[100];
void addQuad(){
	Q[0].state++;
	int st = Q[0].state;

	if (st == 1) {
		Q[0].total++;
		cn = Q[0].total;
	}
	if (st == 1) {
		Q[cn].x1 = cx;
		Q[cn].y1 = cy;
		Q[cn].z1 = cz;
	}
	if (st == 1 || st == 2) {
		Q[cn].x2 = cx;
		Q[cn].y2 = cy;
		Q[cn].z2 = cz;
	}
	if (st == 1 || st == 2 || st == 3) {
		Q[cn].x3 = cx;
		Q[cn].y3 = cy;
		Q[cn].z3 = cz;
	}
	if (st == 1 || st == 2 || st == 3 || st == 4) {
		Q[cn].x4 = cx;
		Q[cn].y4 = cy;
		Q[cn].z4 = cz;
	}

}
void drawQuads(){
	int i;
	for (i = 1; i < Q[0].total; i++) 
	{
		glBegin(GL_QUADS);
		glColor3f(Q[i].r, Q[i].g, Q[i].b);
		glVertex3f(Q[i].x1, Q[i].y1, Q[i].z1);
		glVertex3f(Q[i].x2, Q[i].y2, Q[i].z2);
		glVertex3f(Q[i].x3, Q[i].y3, Q[i].z3);
		glVertex3f(Q[i].x4, Q[i].y4, Q[i].z4);
		glEnd();
	}
}
void theCube() {
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(cx, cy, cz);
	glutSolidCube(0.4);
	glPopMatrix();
	return;
}
void keyboard(unsigned char key, int x, int y) {
	if (key == 'w') cz -= 1;	// for ward
	if (key == 's') cz += 1;	// back
	if (key == 'a') cx -= 1;	// left
	if (key == 'd') cx += 1;	// right
	if (key == 'q') cy += 1;	// up
	if (key == 'z') cy -= 1;	// down

	if (key == 32) { addQuad(); }	//spacebar

	glutPostRedisplay();
}
void drawGrid() {
	int i;
	for (i = 0; i < 40; i++) {
		glPushMatrix();
		if (i < 20) { glTranslatef(0, 0, i); }	// (0, 0, i)로 축을 이동 시킨다.
		if (i >= 20) { 
			glTranslatef(i - 20, 0, 0); 
			glRotatef(-90, 0, 1, 0); 
		}

		glBegin(GL_LINES);
		glColor3f(1.0, 1.0, 1.0); 
		glLineWidth(1);
		glVertex3f(0, -0.1, 0); 
		glVertex3f(19.0, -0.1, 0.0);
		glEnd();
		glPopMatrix();
	}
	return;
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(-13, 0, -45);
	glRotatef(40, 1.0, 1.0, 0.0);
	
	drawGrid();
	drawQuads();
	theCube();
	glutSwapBuffers();
}
void init() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(35, 1.0f, 0.1f, 1000);
	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.2, 0.2, 0.2, 1);

	return;
}
int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE);
	glutInitWindowSize(800, 600);
	glutCreateWindow("15012970 / 이헌기");
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	init();
	glutMainLoop();

	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 정답 코드
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//#include<stdio.h>
//#include<windows.h>
//#include<GL/glut.h>
//#include<GL/gl.h>
//
//float cx = 0, cy = 0, cz = 0, inc = 0.05;
//int cn;
//
//struct Quads
//{
//	int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
//	float r, g, b;
//	int state, total;
//}; Quads Q[100];
//
//void addQuad()
//{
//	Q[0].state++;
//	int st = Q[0].state;
//	if (st == 1) {
//		Q[0].total++;
//		cn = Q[0].total;
//	}
//	if (st == 1) { Q[cn].x1 = cx; Q[cn].y1 = cy; Q[cn].z1 == cz; }
//	if (st == 1 | st == 2) { Q[cn].x2 = cx; Q[cn].y1 = cy; Q[cn].z1 == cz; }
//	if (st == 1 | st == 2 | st == 3) { Q[cn].x3 = cx; Q[cn].y1 = cy; Q[cn].z1 == cz; }
//	if (st == 1 | st == 2 | st == 3 | st == 4) { Q[cn].x4 = cx; Q[cn].y1 = cy; Q[cn].z1 == cz; }
//
//}
//void drawQuads()
//{
//	int j;
//	for (j = 0; j < Q[0].total + 1; j++) {
//		glBegin(GL_QUADS);
//		glColor3f(Q[j].r, Q[j].g, Q[j].b);
//
//		glVertex3f(Q[j].x1, Q[j].y1, Q[j].z1);
//		glVertex3f(Q[j].x2, Q[j].y2, Q[j].z2);
//		glVertex3f(Q[j].x3, Q[j].y3, Q[j].z3);
//		glVertex3f(Q[j].x4, Q[j].y4, Q[j].z4);
//
//		glEnd();
//	}
//
//}
//void Cube()
//{
//	glPushMatrix();
//	glColor3f(1, 1, 1);
//	glTranslatef(cx, cy, cz);
//	glutSolidCube((float)0.4 / 20);
//	glPopMatrix();
//}
//void drawGrid()
//{
//	int i;
//	for (i = 0; i < 40; i++)
//	{
//		glPushMatrix();
//		if (i < 20) glTranslatef(0, 0, (float)i / 20);
//		if (i >= 20)
//		{
//			glTranslatef((float)(i - 20) / 20, 0, 0);
//			glRotatef(-90, 0, 1, 0);
//		}
//		glBegin(GL_LINES);
//		glColor3f(0.1, 1, 0.3);
//		glLineWidth(1);
//		glVertex3f(0, 0, 0);
//		glVertex3f(0.95, 0, 0);
//		glEnd();
//		glPopMatrix();
//	}
//}
//
//void display()
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	glTranslatef(-0.8, 0, -0.3);
//	glRotatef(60, 1, 1, 0);
//	Cube();
//	drawGrid();
//	drawQuads();
//	glutSwapBuffers();
//}
//
//void init()
//{
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(0, 1.0f, 0.1f, 1000);
//	glMatrixMode(GL_MODELVIEW);
//	glEnable(GL_DEPTH_TEST);
//	glClearColor(0.1, 0.1, 0.1, 1);
//}
//
//void keyboard(unsigned char key, int x, int y)
//{
//	inc = 0.05;
//	if (key == 'b') cz -= inc; if (key == 'f') cz += inc; //backward and forward
//	if (key == 'l') cx -= inc; if (key == 'r') cx += inc; //left and right
//	if (key == 'd') cy -= inc; if (key == 'u') cy += inc; //down and up
//	if (key == 32) { addQuad(); }
//	glutPostRedisplay();
//}
//
//int main(int argc, char **argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE);
//	glutInitWindowSize(1000, 1000);
//	glutCreateWindow("Quidditch Field");
//	glutDisplayFunc(display);
//	glutKeyboardFunc(keyboard);
//	init();
//	glutMainLoop();
//	return 0;
//}

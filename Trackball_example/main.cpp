#include <stdio.h>
#include <math.h>
#include <gl/glut.h>

#define bool int	// ���� bool�� ���� �� �� ���
#define false 0
#define true 1
#define M_PI 3.14159	// math.h�� ���ǵǾ� ���� ������
int winWidth, winHeight;
float angle = 0.0, axis[3], trans[3];

bool trackingMouse = false;
bool redrawContinue = false;
bool trackballMove = false;

float lastPos[3] = { 0.0, 0.0, 0.0 };
int curx, cury;
int startX, startY;

void trackball_ptov(int x, int y, int width, int height, float v[3]) {
	float d, a;
	// x, y ���� width�� height �߽��� �� ���� �翵��Ű��, z�� �ö󰨿� �ָ��϶�.
	v[0] = (2.0 * x - width) / width;
	v[1] = (height - 2.0F * y) / height;
	d = sqrt(v[0] * v[0] + v[1] * v[1]);
	v[2] = cos((M_PI / 2.0) * ((d < 1.0) ? d : 1.0));
	a = 1.0 / sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
	v[0] *= a;	v[1] *= a;	v[2] *= a;

	return;
}
void mouseMotion(int x, int y) {
	float curPos[3], dx, dy, dz;
// glutMotionFunc(1)
	// �� ���� ��ġ�� ����Ѵ�.
	trackball_ptov(x, y, winWidth, winHeight, curPos);
	if (trackingMouse) {
		// �� ���� ����� ��ġ�� ����Ѵ�.
		dx = curPos[0] - lastPos[0];
		dy = curPos[1] - lastPos[1];
		dz = curPos[2] - lastPos[2];
	}
// glutMotionFunc(2)
	if (dx || dy || dz) {
		// theta�� ������ �����.
		angle = 90.0 * sqrt(dx * dx + dy * dy + dz * dz);
		axis[0] = lastPos[1] * curPos[2] - lastPos[2] * curPos[1];
		axis[1] = lastPos[2] * curPos[0] - lastPos[0] * curPos[2];
		axis[2] = lastPos[0] * curPos[1] - lastPos[1] * curPos[0];
		
		// ��ġ�� ������Ʈ ��Ŵ.
		lastPos[0] = curPos[0];
		lastPos[1] = curPos[1];
		lastPos[2] = curPos[2];
	}

	glutPostRedisplay();
	return;
}
void spinCube() {
	if (redrawContinue) glutPostRedisplay();

	return;
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	if (trackballMove) {
		glRotatef(angle, axis[0], axis[1], axis[2]);
	}
	colorCube();
	glutSwapBuffers();

	return;
}
void mouseButton(int button, int state, int x, int y) {
	if (button == GLUT_RIGHT_BUTTON) exit(0);

	// ���� ���콺��ư�� ������ ������ ����ڰ� ť�긦 ȸ���� �� �ְ� ��.
	if (button == GLUT_LEFT_BUTTON) {
		switch (state) {
		case GLUT_DOWN:
			y = winHeight - y;
			startMotion(x, y);
			break;
		case GLUT_UP:
			stopMotion(x, y);
			break;
		default:
			break;
		}
	}
	return;
}
void startMotion(int x, int y) {
	trackingMouse = true;
	redrawContinue = false;
	startX = x;
	startY = y;
	curx = x;
	cury = y;
	trackball_ptov(x, y, winWidth, winHeight, lastPos);
	trackballMove = true;

	return;
	return;
}

void stopMotion(int x, int y) {
	trackingMouse = false;
	// ��ġ�� ����ƴ��� üũ��.
	if (startX != x || startY != y)
		redrawContinue = true;
	else {
		angle = 0.0;
		redrawContinue = false;
		trackballMove = false;
	}
	return;
}

int main(int argc, char** argv) {

	return 0;
}
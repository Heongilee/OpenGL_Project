#include <stdio.h>
#include <gl/glut.h>

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin();
	glEnd();

	return;
}
void init() {
	glEnable(GL_DEPTH_TEST);	// ���̹��۸� ����ϰڴٰ� �������ְ� �ִ�.
	//glDisable(GL_DEPTH_TEST);	// ���̹��۸� ���� �ʹٸ�...?
	return;
}
void myidleFunc() {
	// ���� �۾����� �̺�Ʈ�� �ϳ��� ���ٸ� ��� �׷��� �������� �Ų�����(?) �ϱ� ����.
	glutPostRedisplay();
	return;
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("15012970 / �����");

	glutDisplayFunc(mydisplay);

	init();

	glutIdleFunc(myidleFunc);	// ���� ó���ϴ� �̺�Ʈ�� �ϳ��� ���� �� �ݹ��Լ��� ȣ��.
	glutMainLoop();
	return 0;
}


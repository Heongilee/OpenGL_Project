//#include "Myheaders.h"
//
//void init() {
//	GLfloat ambient[] = { 0.0, 0.0, 0.0, 1.0 };
//	GLfloat diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
//	GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
//	GLfloat position[] = { 0.0, 3.0, 2.0, 0.0 };
//	GLfloat lmodel_ambient[] = { 0.4, 0.4, 0.4, 1.0 };
//	GLfloat local_view[] = { 0.0 };
//
//	glClearColor(0.0, 0.1, 0.1, 0.0);
//	glEnable(GL_DEPTH_TEST);
//	glShadeModel(GL_SMOOTH);
//
//	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
//	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
//	//glLightfv(GL_LIGHT0, GL_SPECULAR, specular);		// �� ����..?
//	glLightfv(GL_LIGHT0, GL_POSITION, position);
//	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
//	glLightModelfv(GL_LIGHT_MODEL_LOCAL_VIEWER, local_view);
//
//	glEnable(GL_LIGHTING);
//	glEnable(GL_LIGHT0);
//
//	return;
//}
//
//void display() {
//	GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
//	GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 };
//	GLfloat mat_ambient_color[] = { 0.8, 0.8, 0.2, 1.0 };
//	GLfloat mat_diffuse[] = { 0.1, 0.5, 0.8, 1.0 };
//	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//
//	GLfloat no_shininess[] = { 0.0 };
//	GLfloat low_shininess[] = { 5.0 };
//	GLfloat high_shininess[] = { 100.0 };
//	GLfloat mat_emission[] = { 0.3, 0.2, 0.2, 0.0 };
//
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//	///////////////////////////////////////////
//	// ù ��° ���� ������ ambient �ݻ簡 ���� ������ ���´�.
//	///////////////////////////////////////////
//	// p.24		- ���� diffuse �ݻ縸 ����(ambient, specular�� ����).
//	glPushMatrix();
//	glTranslatef(-3.75, 3.0, 0.0);	// �� ��ġ�� ������Ʈ�� ������ ���ڴ�.
//	glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//	glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);	// ��ü�� ����.
//	glPopMatrix();
//
//	// - û�� diffuse �ݻ�� ���Ҿ� specular �ݻ�� low ��⸦ ����.
//	glPushMatrix();
//	glTranslatef(-1.25, 3.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//	glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	// p.25 - û�� diffuse �ݻ�� ���Ҿ� specular �ݻ�, high ��⸦ ����. (���̶����ÿ� �� �� ���߽�Ŵ.)
//	glPushMatrix();
//	glTranslatef(1.25, 3.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	// - ������ emissive�� �߰� ��Ŵ. (no_shiness�� ������ emission�� �����鼭 �ǹ̰� �������� ����.)
//	glPushMatrix();
//	glTranslatef(3.75, 3.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, no_mat);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//	glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	///////////////////////////////////////////
//	// �� ��° ���� ������ ����� ambient �ݻ� ������ ���´�.
//	///////////////////////////////////////////
//	// p.26		- ���� diffuse �ݻ縸 ����(ambient, specular�� ����).
//	glPushMatrix();
//	glTranslatef(-3.75, 0.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//	glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	// - û�� diffuse �ݻ�� ���Ҿ� specular �ݻ�� low ��⸦ ����.
//	glPushMatrix();
//	glTranslatef(-1.25, 0.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//	glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	// p.27 - û�� diffuse �ݻ�� ���Ҿ� specular �ݻ�, high ��⸦ ����. (���̶����ÿ� �� �� ���߽�Ŵ.)
//	glPushMatrix();
//	glTranslatef(1.25, 0.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	// - ������ emissive�� �߰� ��Ŵ. (no_shiness�� ������ emission�� �����鼭 �ǹ̰� �������� ����.)
//	glPushMatrix();
//	glTranslatef(3.75, 0.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//	glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	///////////////////////////////////////////
//	// �� ��° ���� ������ ������ �ִ� ambient �ݻ縦 ���´�.
//	///////////////////////////////////////////
//	// p.28		- ���� diffuse �ݻ縸 ����(ambient, specular�� ����).
//	glPushMatrix();
//	glTranslatef(-3.75, -3.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//	glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	// - û�� diffuse �ݻ�� ���Ҿ� specular �ݻ�� low ��⸦ ����.
//	glPushMatrix();
//	glTranslatef(-1.25, -3.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//	glMaterialfv(GL_FRONT, GL_SHININESS, low_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	// p.29 - û�� diffuse �ݻ�� ���Ҿ� specular �ݻ�, high ��⸦ ����. (���̶����ÿ� �� �� ���߽�Ŵ.)
//	glPushMatrix();
//	glTranslatef(1.25, -3.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, no_mat);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	// - ������ emissive�� �߰� ��Ŵ. (no_shiness�� ������ emission�� �����鼭 �ǹ̰� �������� ����.)
//	glPushMatrix();
//	glTranslatef(3.75, -3.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
//	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
//	glMaterialfv(GL_FRONT, GL_SHININESS, no_shininess);
//	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
//	glutSolidSphere(1.0, 16, 16);
//	glPopMatrix();
//
//	glFlush();
//	return;
//}
//
//void reshape(int w, int h) {
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	if (w <= (h * 2)) {
//		// Parallel Projection
//		glOrtho(-6.0, 6.0, -3.0 * ((GLfloat)h * 2) / (GLfloat)w, 3.0 * ((GLfloat)h * 2) / (GLfloat)w, -10.0, 10.0);
//	}
//	else {
//		// Parallel Projection
//		glOrtho(-6.0 * ((GLfloat)h * 2) / (GLfloat)w, 6.0 * ((GLfloat)h * 2) / (GLfloat)w, -3.0, 3.0, -10.0, 10.0);
//	}
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//
//	return;
//}
//
//void keyboard(unsigned char key, int x, int y) {
//	switch (key) {
//	case 27:
//		exit(0);
//		break;
//	}
//
//	return;
//}
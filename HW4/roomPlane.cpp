#define STB_IMAGE_IMPLEMENTATION
#include <stb-master/stb_image.h>
#include "Myheaders.h"
#include "MyFuncDecl.h"

void loadMyImages(void) {
	int imgWidth = ImageWidth, imgHeight = ImageHeight, imgChannel = ImageChannel;
	myWoodImage = stbi_load("asset/wood.png", &imgWidth, &imgHeight, &imgChannel, 0);
	mySkyImage = stbi_load("asset/sky.png", &imgWidth, &imgHeight, &imgChannel, 0);
	myMetalImage = stbi_load("asset/metal.png", &imgWidth, &imgHeight, &imgChannel, 0);
	myCheckBlueImage = stbi_load("asset/bluecheck.png", &imgWidth, &imgHeight, &imgChannel, 0);

	if (myWoodImage && myMetalImage && mySkyImage && myCheckBlueImage) {
		printf("�̹��� �ε� ����, ���� : %d/ ���� : %d", imgHeight, imgWidth); 
	}
	else {
		printf("ERROR");
	}

	return;
}
void drawDoor(void) {
	GLfloat doorSize[3] = { 15.0, 2.0, 50.0 };

	// ��
	glPushMatrix();
	glTranslatef(-63.0, -38.0, 0.0);
	glRotatef(170.0, 0, 0, -1);
	glColor3ub(153, 112, 0);
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0);  glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(0.0, 1.0);  glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0);  glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0); glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(0.0, 1.0); glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(1.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(0.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(1.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0); glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(0.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(1.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0); glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(0.0, 1.0); glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(1.0, 1.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -0.1);
		glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(0.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
		glBegin(GL_POLYGON);
		glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(1.0, 1.0); glVertex3f(1 * (doorSize[0] / 2.0), -1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glTexCoord2f(1.0, 0.0); glVertex3f(1 * (doorSize[0] / 2.0), 1 * (doorSize[1] / 2.0), -1 * (doorSize[2] + 0.1));
		glEnd();
			// ������
			glPushMatrix();
			glColor3ub(166, 166, 166);
			glTranslatef(-6.5, -2.5, -25.1);
			glutSolidSphere(2.0, 15, 15);
			glPopMatrix();
	glPopMatrix();
	
	return;
}
void drawWall_1(GLfloat x, GLfloat y, GLfloat z, GLfloat px, GLfloat py, GLfloat pz, GLubyte red, GLubyte green, GLubyte blue) {
	// (x, y, z) ũ�� ���� �Ķ����
	// (px, py, pz) ��ġ���� �Ķ����
	// (red, green, blue) ���� ���� �Ķ����

	glPushMatrix();
	glTranslatef(px, py, pz);
	glColor3ub(red, green, blue);
	// >>>>>>>>>>>>>>>
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glTexCoord2f(0.0, 1.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 1.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glTexCoord2f(0.0, 1.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(1.0, 1.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glTexCoord2f(0.0, 1.0); glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(1.0, 1.0); glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(0.0, 1.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(1.0, 1.0); glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(0.0, 1.0); glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(1.0, 1.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -0.1);
	glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(0.0, 1.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(1.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glBegin(GL_POLYGON);
	glTexCoord2f(0.0, 0.0); glVertex3f(-1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(1.0, 1.0); glVertex3f(1 * (x / 2.0), -1 * (y / 2.0), -1 * (z + 0.1));
	glTexCoord2f(1.0, 0.0); glVertex3f(1 * (x / 2.0), 1 * (y / 2.0), -1 * (z + 0.1));
	glEnd();
	glPopMatrix();
	void;
}
void display(void) {
	GLfloat mat_ambient[] = { 0.3, 0.5, 0.1, 1.0 };
	GLfloat mat_diffuse[] = { 0.25, 0.25, 0.25, 1.0 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };

	reshape(my_Window_width, my_Window_height);	// �� ��/�ƿ��� ���� �ѹ� �� ȣ����.
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);

	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3ub(99, 58, 0);
	glBindTexture(GL_TEXTURE_2D, texName[0]);
	glRectf(-70.0, -40.0, 70.0, 40.0);

	drawDoor();	// �� ��
	// ���� ��
	drawWall_1(12.0, 2.0, 50.0, -64.0, -21.5, 0.0, 53, 53, 53);
	drawWall_1(100.0, 2.0, 50.0, -20.0, 40.0, 0.0, 53, 53, 53);
	drawWall_1(10.0, 2.0, 50.0, -20.0, 40.0, 0.0, 53, 53, 53);
	drawWall_1(40.0, 2.0, 50.0, 50.0, 30.0, 0.0, 53, 53, 53);
	// �ٹ������� õ��
	drawWall_1(12.0, 62.0, 2.0, -64.0, 10.0, -50.0, 53, 53, 53);
	glPushMatrix();
	// ���� ��
	glRotatef(90.0, 0.0, 0.0, 1.0);
	drawWall_1(62.0, 2.0, 50.0, 8.0, 70.0, 0.0, 53, 53, 53);	//�ٹ������� �ٱ���
	drawWall_1(14.5, 2.0, 50.0, -15.0, 57.0, 0.0, 168, 130, 25);	// �ٹ����� �� 1
	drawWall_1(5.0, 2.0, 50.0, -10.0, 56.5, 0.0, 250, 244, 192);		// ���� �ִ� Ÿ��
	drawWall_1(0.53, 0.53, 50.0, -7.0, 56.0, 0.0, 0, 0, 0);		// ���� ��
	drawWall_1(14.5, 2.0, 50.0, 0.0, 57.0, 0.0, 168, 130, 25);		// �ٹ����� �� 2
	drawWall_1(0.53, 0.53, 50.0, 10.0, 56.0, 0.0, 0, 0, 0);		// ���� ��
	drawWall_1(14.5, 2.0, 50.0, 15.0, 57.0, 0.0, 168, 130, 25);		// �ٹ����� �� 3
	drawWall_1(14.5, 2.0, 50.0, 30.0, 57.0, 0.0, 168, 130, 25);		// �ٹ����� �� 4
	drawWall_1(0.53, 0.53, 50.0, 27.0, 56.0, 0.0, 0, 0, 0);		// ���� ��
	drawWall_1(5.0, 2.0, 50.0, 30.0, 56.5, 0.0, 250, 244, 192);			// ���� �ִ� Ÿ��
	drawWall_1(70.0, 2.0, 12.5, -5.0, -70.0, 0.0, 53, 53, 53);		//â���� ���� ��
	drawWall_1(10.0, 2.0, 50.0, 35.0, -30.0, 0.0, 53, 53, 53);
	glPopMatrix();
	// ħ�� �Ӹ� �κ�
	glPushMatrix();
	drawWall_1(1.0, 1.0, 35.0, 68.0, -39.0, 0.0, 153, 56, 0);
	for (int i = 1; i <= 5; i++) drawWall_1(1.0, 1.0, 24.0, 68.0 - (3.0 * i), -39.0, -10.0, 153, 56, 0);
	drawWall_1(1.0, 1.0, 35.0, 50.0, -39.0, 0.0, 153, 56, 0);
	glPushMatrix();
	glRotatef(90.0, 0, 1, 0);
	drawWall_1(1.0, 1.0, 18.0, 34.2, -39.0, 68.0, 153, 56, 0);
	drawWall_1(1.0, 1.0, 18.0, 10.0, -39.0, 68.0, 153, 56, 0);
	glPopMatrix();
	// ħ�� �ٸ� �κ�
	drawWall_1(1.0, 1.0, 15.0, 68.0, 15.0, 0.0, 153, 56, 0);
	drawWall_1(1.0, 1.0, 15.0, 50.0, 15.0, 0.0, 153, 56, 0);
	// ħ�� ���� �κ�
	glPushMatrix();
	glRotatef(90.0, 0, 0, 1);
	drawWall_1(54.0, 2.0, 10.0, -11.5, -50.0, -5.0, 153, 56, 0);
	drawWall_1(54.0, 2.0, 10.0, -11.5, -68.0, -5.0, 153, 56, 0);
	glRotatef(-90.0, 0, 0, 1);
	drawWall_1(18.0, 2.0, 10.0, 59.0, -39.0, -5.0, 153, 56, 0);
	drawWall_1(18.0, 2.0, 10.0, 59.0, 15.0, -5.0, 153, 56, 0);
	glPopMatrix();
	glBindTexture(GL_TEXTURE_2D, 0);
	// ��Ʈ����
	glBindTexture(GL_TEXTURE_2D, texName[3]);
	drawWall_1(18.0, 52.0, 10.0, 59.0, -12.0, -8.0, 103, 153, 255);
	glBindTexture(GL_TEXTURE_2D, 0);
	glPopMatrix();
	// â�� ������
	glPushMatrix();
	drawWall_1(3.0, 2.0, 39.0, 71.0, -39.0, -12.5, 255, 255, 228);
	drawWall_1(3.0, 2.0, 39.0, 71.0, 13.0, -12.5, 255, 255, 228);
	drawWall_1(3.0, 2.0, 39.0, 71.0, 29.0, -12.5, 255, 255, 228);
	drawWall_1(3.0, 70.0, 2.0, 71.0, -5.0, -12.5, 255, 255, 228);
	drawWall_1(3.0, 70.0, 2.0, 71.0, -5.0, -50.0, 255, 255, 228);
	// â���� �۷���
	glBindTexture(GL_TEXTURE_2D, texName[1]);
	drawWall_1(1.0, 69.0, 37.5, 71.0, -5.0, -12.5, 178, 235, 244);
	glPopMatrix();
	glBindTexture(GL_TEXTURE_2D, 0);
	////å��
	glBindTexture(GL_TEXTURE_2D, texName[0]);
	drawWall_1(55.0, 25.0, 5.0, 1.0, 27.0, -12.5, 186, 148, 43);
	glBindTexture(GL_TEXTURE_2D, 0);
	//å�� �ٸ�
	glBindTexture(GL_TEXTURE_2D, texName[2]);
	glPushMatrix();
	drawWall_1(5.0, 1.0, 12.5, -20.0, 24.0, 0.0, 0, 0, 0);
	drawWall_1(5.0, 10.0, 1.0, -20.0, 29.0, 0.0, 0, 0, 0);
	drawWall_1(5.0, 1.0, 12.5, -20.0, 34.0, 0.0, 0, 0, 0);
	drawWall_1(5.0, 1.0, 12.5, 22.0, 24.0, 0.0, 0, 0, 0);
	drawWall_1(5.0, 10.0, 1.0, 22.0, 29.0, 0.0, 0, 0, 0);
	drawWall_1(5.0, 1.0, 12.5, 22.0, 34.0, 0.0, 0, 0, 0);
	glPopMatrix();
	glBindTexture(GL_TEXTURE_2D, 0);

	//����
	glPushMatrix();
	glBindTexture(GL_TEXTURE_2D, texName[0]);
	glTranslatef(12.0, 7.0, 0.0);
	//���� �ٸ�
	drawWall_1(1.0, 1.0, 25.0, -4.0, 0.0, 0.0, 211, 198, 74);
	drawWall_1(1.0, 1.0, 25.0, 4.0, 0.0, 0.0, 211, 198, 74);
	drawWall_1(1.0, 1.0, 10.0, -4.0, 8.0, 0.0, 211, 198, 74);
	drawWall_1(1.0, 1.0, 10.0, 4.0, 8.0, 0.0, 211, 198, 74);
	//���ڵ����
	drawWall_1(8.0, 1.0, 8.0, 0.0, 0.0, -15.0, 211, 198, 74);
	//���� ������
	drawWall_1(9.0, 9.0, 2.0, 0.0, 4.0, -10.0, 211, 198, 74);
	glBindTexture(GL_TEXTURE_2D, 0);
	glPopMatrix();

	//���̸�
	glPushMatrix();
	glTranslatef(20.0, 35.0, -16.9);
	glRotatef(-20.0, 0.0, 0.0, 1.0);
	//��ħ��
	drawWall_1(5.0, 3.0, 1.0, 0.0, 0.0, 0.0, 184, 184, 184);
	drawWall_1(5.0, 1.0, 7.0, 0.0, 2.0, 0.0, 184, 184, 184);
	drawWall_1(5.0, 2.0, 1.0, 0.0, 1.0, -6.0, 184, 184, 184);
	//�����
	drawWall_1(15.0, 2.0, 13.0, 0.0, 0.0, -6.0, 0, 0, 0);
	//ȭ��
	drawWall_1(13.0, 0.2, 11.0, 0.0, -0.95, -6.8, 245, 245, 245);
	glPopMatrix();

	// Ű����
	glPushMatrix();
	glTranslatef(13.0, 25.0, -17.0);
	//Ű���� ��
	drawWall_1(10.0, 6.5, 1.0, 0.0, 0.0, 0.0, 25, 25, 25);
	//����Ű
	drawWall_1(6.0, 3.5, 0.5, 1.5, 0.0, -0.6, 245, 245, 245);
	//����Ű
	drawWall_1(2.0, 3.5, 0.5, -3.3, 0.0, -0.6, 245, 245, 245);
	glPopMatrix();

	//å ��
	glPushMatrix();
	glTranslatef(0.0, 35.0, -17.0);
	drawWall_1(1.0, 7.0, 5.5, 2.0, 0.0, 0.0, 0, 0, 0);
	drawWall_1(1.0, 7.0, 5.5, 1.0, 0.0, 0.0, 255, 255, 255);
	drawWall_1(1.0, 7.0, 7.5, 0.0, 0.0, 0.0, 222, 79, 79);
	drawWall_1(1.0, 7.0, 7.5, -1.0, 0.0, 0.0, 54, 138, 255);
	drawWall_1(1.0, 7.0, 8.5, -2.0, 0.0, 0.0, 234, 234, 234);
	drawWall_1(1.0, 7.0, 9.0, -3.0, 0.0, 0.0, 181, 178, 255);
	glPopMatrix();

		//������
		glPushMatrix();
		glTranslatef(-30.0, 30.0, 0.0);
			//����κ�
			glPushMatrix();
			glColor3ub(255, 255, 255);
			glTranslatef(0.0, 0.0, -10.0);
			glutSolidCylinder(3.0, 10.0, 15, 15);
			glColor3ub(25, 25, 25);
			glTranslatef(0.0, 0.0, 2.5);
			glutSolidCylinder(3.2, 0.2, 15, 15);
			glPopMatrix();
		// ��� �κ�
		drawWall_1(1.5, 1.0, 1.0, 0.0, -3.3, 0.0, 25, 25, 25);
		glPopMatrix();
	glPopMatrix();

	glutSwapBuffers();
	return;
}

void spinDisplay(void) {
	spin += 0.5;
	if (spin > 360.0) {
		spin = spin - 360.0;
	}
	glutPostRedisplay();

	return;
}

void init() {
	GLfloat ambient[] = { 0.0, 1.0, 0.0, 1.0 };
	GLfloat diffuse[] = { 0.25, 0.25, 0.25, 1.0 };
	GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };

	GLfloat two_ambient[] = { 1.0, 0.0, 1.0, 1.0 };
	GLfloat two_diffuse[] = { 0.25, 0.25, 0.25, 1.0 };
	GLfloat two_specular[] = { 1.0, 1.0, 1.0, 1.0 };

	GLfloat light_Pos[] = { 0.0, 0.0, -50.0, 1.0 };

	glClearColor(0.83, 0.83, 0.83, 0.0);
	glEnable(GL_DEPTH_TEST);
	glShadeModel(GL_SMOOTH);

	// �ؽ�ó ���� ����
		// �ؽ�ó �̹��� �ε�
	loadMyImages();
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

	glGenTextures(4, texName);
	glBindTexture(GL_TEXTURE_2D, texName[0]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, ImageWidth, ImageHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, myWoodImage);
	stbi_image_free(myWoodImage);

	glBindTexture(GL_TEXTURE_2D, texName[1]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, ImageWidth, ImageHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, mySkyImage);
	stbi_image_free(mySkyImage);

	glBindTexture(GL_TEXTURE_2D, texName[2]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, ImageWidth, ImageHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, myMetalImage);
	stbi_image_free(myMetalImage);

	glBindTexture(GL_TEXTURE_2D, texName[3]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, ImageWidth, ImageHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, myCheckBlueImage);
	stbi_image_free(myCheckBlueImage);

	//glBindTexture(GL_TEXTURE_2D, texName[]); 
	// ...

	// ���� ���� ����
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_Pos);

	glLightfv(GL_LIGHT1, GL_AMBIENT, two_ambient);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, two_diffuse);
	glLightfv(GL_LIGHT1, GL_SPECULAR, two_specular);
	glLightfv(GL_LIGHT1, GL_POSITION, light_Pos);

	glEnable(GL_TEXTURE_2D);
	glEnable(GL_POLYGON_SMOOTH);
	return;
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	my_Window_width = w;
	my_Window_height = h;

	glLoadIdentity();
	gluPerspective(60.0, (GLsizei)w / (GLsizei)h, 0.1, 1000.0);
	//gluLookAt(0.0, -30.0, -150.0, 0.0, 0.0, 0.0, 0.0, 5.0, -1.0);	// ī�޶� ��ġ
	if(camera_angle_state == 0)
		gluLookAt(0.0, zoom, zoom / 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, -5.0);	// ī�޶� ��ġ
	else if (camera_angle_state == 1)
		gluLookAt(0.0, 0.0, zoom, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);	// ī�޶� ��ġ

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	return;
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 48:
		printf("���Ƚ��ϴ�. %c\n", key);
		glDisable(GL_LIGHTING);
		glDisable(GL_LIGHT0);
		glDisable(GL_LIGHT1);
		break;
	case 49:
		printf("���Ƚ��ϴ�. %c\n", key);
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glDisable(GL_LIGHT1);
		break;
	case 50:
		printf("���Ƚ��ϴ�. %c\n", key);
		glEnable(GL_LIGHTING);
		glDisable(GL_LIGHT0);
		glEnable(GL_LIGHT1);
		break;
	case 51:
		printf("���Ƚ��ϴ�. %c\n", key);
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glEnable(GL_LIGHT1);
		break;
	case 52:
		glDisable(GL_TEXTURE_2D);
		break;
	case 53:
		glEnable(GL_TEXTURE_2D);
		break;
	default:
		break;
	}

	glutPostRedisplay();
	return;
}

void mouse(int button, int state, int x, int y) {
	switch (button) {
	// ���� ���콺 ��ư : ȸ��
	case GLUT_LEFT_BUTTON:
		// glutIdleFunc() : callback�Լ��� �ƹ����� �� �Ҷ� ��� refresh�Ѵٴ� ����.
		if (state == GLUT_DOWN && mouse_leftClick_state == 0) {
			printf("%d\n", mouse_leftClick_state);
			mouse_leftClick_state = 1;
			glutIdleFunc(NULL);
		}
		else if (state == GLUT_DOWN && mouse_leftClick_state == 1) {
			printf("%d\n", mouse_leftClick_state);
			mouse_leftClick_state = 0;
			glutIdleFunc(spinDisplay);
		}
		break;
	case GLUT_MIDDLE_BUTTON:
		if (state == GLUT_DOWN) {
			printf("��� ��ư ����.\n");
			++camera_angle_state %= 2;
		}
		break;
	// ������ ���콺 ��ư : �� ��/�ƿ�
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN && mouse_rightClick_state == 0) {	//1.5�� ��
			printf("����. %d\n", mouse_rightClick_state);
			++mouse_rightClick_state %= 3;
			zoom /= 1.5;
		}
		else if (state == GLUT_DOWN && mouse_rightClick_state == 1) {	//2�� ��
			printf("����. %d\n", mouse_rightClick_state);
			++mouse_rightClick_state %= 3;
			zoom = (zoom * 1.5) / 2.0;
		}
		else if (state == GLUT_DOWN && mouse_rightClick_state == 2) {	// 1�� ��
			printf("����. %d\n", mouse_rightClick_state);
			++mouse_rightClick_state %= 3;
			zoom *= 2.0;
		}
		break;
	default:
		break;
	}

	glutPostRedisplay();
	return;
}
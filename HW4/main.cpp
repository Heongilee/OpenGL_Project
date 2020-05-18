#include "Myheaders.h"
#include "MyFuncDecl.h"

/* ----------------------------------------------------------------------
	1. �ּ� 10�� ������Ʈ�� �׸� ��.	(��, ��, å��, ����, ħ��, â��, 
	2. ���� ���� ����� ��.
	3. ���콺 ���ͷ���
		�� ���� ���콺 : ȸ��						(OK)
		�� ��� ���콺 : �̵�(Translate)			(OK)
		�� ������ ���콺 : ����-�ƿ�.				(OK)
		
		�� ���� : Trackball
	4. �� ȿ�� ��ü ȿ�� �߰��� ��. + Ű���� ���ͷ���
		�� ambient, diffuse, specular, smooth shading
		�� '0'�� ������, �ƹ��� �� ȿ���� �� ��.					// case 48:
		�� '1'�� ������, light1�� Ŵ.								// case 49:
		�� '2'�� ������, main src + light2 Ŵ.						// case 50:
		�� '3'�� ������, main + light1 + light2 Ŵ. (default)		// case 51:
	5. 
---------------------------------------------------------------------- */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(1280, 720);
	glutInitWindowPosition(100, 25);
	glutCreateWindow("15012970 / ����� / HW4");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
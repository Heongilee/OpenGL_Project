#include "Myheaders.h"
#include "MyFuncDecl.h"

/* ----------------------------------------------------------------------
	1. 최소 10개 오브젝트를 그릴 것.	(문, 벽, 책상, 의자, 침대, 창문, 
	2. 더블 버퍼 사용할 것.
	3. 마우스 인터렉션
		ㄴ 왼쪽 마우스 : 회전						(OK)
		ㄴ 가운데 마우스 : 이동(Translate)			(OK)
		ㄴ 오른쪽 마우스 : 줌인-아웃.				(OK)
		
		※ 참고 : Trackball
	4. 빛 효과 물체 효과 추가할 것. + 키보드 인터렉션
		ㄴ ambient, diffuse, specular, smooth shading
		ㄴ '0'을 누르면, 아무런 빛 효과를 안 줌.					// case 48:
		ㄴ '1'을 누르면, light1만 킴.								// case 49:
		ㄴ '2'을 누르면, main src + light2 킴.						// case 50:
		ㄴ '3'을 누르면, main + light1 + light2 킴. (default)		// case 51:
	5. 
---------------------------------------------------------------------- */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(1280, 720);
	glutInitWindowPosition(100, 25);
	glutCreateWindow("15012970 / 이헌기 / HW4");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}
#include <windows.h>
#define _WIN32_WINNT 0x0500
int APIENTRY WinMain( HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmdLine, int nCmdShow )
{
    HWND hWnd = GetConsoleWindow(); //ÁôÂÃµøµ¡1
ShowWindow( hWnd, SW_HIDE );
	while(MessageBox( NULL, "I loooooooooooove U!", "Oh!", MB_OK )){}
	return 0;
}

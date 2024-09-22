#include <windows.h>
#pragma comment (lib, "User32.lib")
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    while(1){//这个1就是造成死循环的,但是写0就不一样了。
    MessageBox(NULL, TEXT("你点确定试试？关不掉吧！hahaha"), TEXT("你的电脑中病毒了"),MB_OK);//建立弹窗
	}
    return 0;
}

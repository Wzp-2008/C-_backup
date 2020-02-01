#include <stdlib.h>
//#include <stdio.h>
#include<windows.h>
#include<stdio.h>
#include<shellapi.h>
#pragma comment(lib,"user32")
#pragma comment(lib,"gdi32.lib")
LRESULT CALLBACK WndProc(HWND hwnd,UINT message,WPARAM wp,LPARAM lp);

HWND bhwnd;
//??????
int WINAPI WinMain(
HINSTANCE hInstance, //handle to current instance
HINSTANCE hPrevInstance,//handle to previous instance
LPSTR lpCmdLine, //command line
int nCmdShow //show state
)
{
//???????
WNDCLASS wndcls;
wndcls.cbClsExtra =0;
wndcls.cbWndExtra =0;
//wndcls.hbrBackground =(HBRUSH)GetStockObject(BLACK_BRUSH);
wndcls.hCursor =LoadCursor(NULL,IDC_ARROW);
wndcls.hIcon =LoadIcon(NULL,IDI_APPLICATION);
wndcls.hInstance =hInstance; //?????????WinMain?????
wndcls.lpfnWndProc =WndProc;//WinSunProc; // ????????
wndcls.lpszClassName="mywindow";
wndcls.lpszMenuName =NULL;
wndcls.style=CS_HREDRAW|CS_VREDRAW;
RegisterClass(&wndcls); //?????
//????,??????????????????????
HWND hwnd;
hwnd=CreateWindow("mywindow","my first application",
WS_OVERLAPPEDWINDOW,0,0,600,400,NULL,NULL,hInstance,NULL);
//???????
//bhwnd=CreateWindow("Button","MyButton",WS_CHILDWINDOW,100,100,100,100,hwnd,NULL,hInstance,NULL);
ShowWindow(hwnd,SW_SHOWNORMAL);
UpdateWindow(hwnd);
//Add Btn
bhwnd=CreateWindow("Button","MyButton",WS_CHILDWINDOW,100,100,100,100,hwnd,(HMENU)OK,hInstance,NULL);
ShowWindow(bhwnd,SW_SHOWNORMAL);
//ShellExecute((hwnd)::AfxGetMainWnd(),"open", "http://www.baidu.com/",NULL,NULL, SW_NORMAL);
//???????,??????
MSG msg;
while(GetMessage(&msg,NULL,0,0))
{
TranslateMessage(&msg); //?????????????
DispatchMessage(&msg); //??????????
}
return msg.wParam;
}

#define BUTTON_ID 10011 //??ID
LRESULT CALLBACK WndProc(HWND hwnd,UINT message,WPARAM wp,LPARAM lp)
{
HDC hdc;
PAINTSTRUCT ps;
static HWND btnWnd;
static bool flag=false;
switch(message)
{
case WM_CREATE:btnWnd =CreateWindow("Button","??",WS_VISIBLE|WS_CHILD,
10,10,150,120,hwnd,(HMENU)BUTTON_ID,0,0);break; //???3???????ID
case WM_PAINT:break;
case WM_COMMAND: //????WM_COMMAND???
switch(LOWORD(wp)) //wParam???????????ID
{ //?????????!
case BUTTON_ID:
//SetWindowText(btnWnd,"??????");
if(flag==true)
{
SendMessage(btnWnd,WM_SETTEXT,0, LPARAM("?????"));
}
else
{
SendMessage(btnWnd,WM_SETTEXT,0, LPARAM("?????"));
MessageBox(hwnd,"HHHHHHH","message",0);
//SetWindowText(btnWnd,(LPCSTR)"??");
}
flag = !flag;
//MessageBox(hwnd,"???????", "???!",MB_OK);
break;
default:break;
}
break;
case WM_DESTROY:PostQuitMessage(0);return 0;
default:break;
}
return DefWindowProc(hwnd,message,wp,lp);
}

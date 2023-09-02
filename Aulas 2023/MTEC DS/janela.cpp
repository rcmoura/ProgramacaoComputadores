#include <windows.h>
#include <stdlib.h>
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

// WinMain, a funcao main em janelas
int WINAPI WinMain (HINSTANCE hThisInstance,
HINSTANCE hPrevInstance,
LPSTR lpszArgument,
int nFunsterStil)
{

HWND hwnd;      // O objeto para indicar a janela
MSG messages;   // Objeto mensagem do Windows para controlar o acionamento de bot?es
WNDCLASSEX wincl;   // O objeto para criar a janela

wincl.hInstance = hThisInstance;
wincl.lpszClassName = WindowsAppl; // Nome da classe da janela
wincl.lpfnWndProc = WindowProcedure;
wincl.style = CS_DBLCLKS;
wincl.cbSize = sizeof (WNDCLASSEX);
wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);      // Janela com icone default do Windows
wincl.hCursor = LoadCursor (NULL, IDC_ARROW);          //Cursor default
wincl.lpszMenuName = NULL;
wincl.cbClsExtra = 0;
wincl.cbWndExtra = 0;
wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;       // Cor cinza de background

if (!RegisterClassEx (&wincl))  // Se o registro da classe foi mal-sucedido return 0
return 0;

hwnd = CreateWindowEx (               // Cria??o da janela
0,
?WindowsAppl?,                 // Indica??o da classe da janela
?Hello World?,                 // Nome da janela
WS_OVERLAPPEDWINDOW,           // Estilo da janela
350,                               // x em rela??o ao desktop
250,                                 // y em rela??o ao desktop
300,                                  // largura da janela
300,                               // altura da janela
HWND_DESKTOP,
NULL,
hThisInstance,
NULL
);

ShowWindow (hwnd, nFunsterStil);                // Mostrar a janela

while (GetMessage (&messages, NULL, 0, 0)) // Recuperar mensagens
{
TranslateMessage(&messages);
DispatchMessage(&messages);
}

return messages.wParam;
}
#define BUTTONOK 10
HINSTANCE g_inst;
HWND Cateto1, Cateto2, ButtonOk;

void DrawComponents(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {

CreateWindowEx (
0,
?STATIC?,
?Cateto a?,
WS_VISIBLE|WS_CHILD,
30, 20, 60, 20,
hwnd,
NULL,
g_inst,
NULL
);
Cateto1 = CreateWindowEx (
WS_EX_CLIENTEDGE,
?EDIT?,
??,
WS_VISIBLE|WS_CHILD|WS_BORDER,
30, 50, 50, 20,
hwnd,
NULL,
g_inst,
NULL
);

CreateWindowEx (
0,
?STATIC?,
?Cateto b?,
WS_VISIBLE|WS_CHILD,
30, 80, 60, 20,
hwnd,
NULL,
g_inst,
NULL
);

Cateto2 = CreateWindowEx (
WS_EX_CLIENTEDGE,
?EDIT?,
??,
WS_VISIBLE|WS_CHILD|WS_BORDER,
30, 110, 50, 20,
hwnd,
NULL,
g_inst,
NULL
);

ButtonOk = CreateWindowEx (
0,
?BUTTON?,
?Ok?,
WS_VISIBLE|WS_CHILD,
40, 140, 20, 20,
hwnd,
(HMENU)BUTTONOK,
g_inst,
NULL
);

}
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
switch (message)
{
case WM_CREATE: // Cria??o da janela
break;
case WM_COMMAND: // Interpreta??o da janela
if ((HIWORD(wParam) == BN_CLICKED))
{
SendMessage(
(HWND) Cateto1,
(UINT) EM_GETLINE,
(WPARAM) 1,
(LPARAM) &Cat1
);

SendMessage((HWND)Cateto2,(UINT)EM_GETLINE,(WPARAM)1,(LPARAM) &Cat2);

CatetoA = atoi(Cat1);
CatetoB = atoi(Cat2);
int Hipotenusa_quadrado = CatetoA*CatetoA + CatetoB*CatetoB;
hipotenusa = sqrt(Hipotenusa_quadrado);

itoa (hipotenusa,Hipot,10);

MessageBox (NULL, Hipot, ?Resultado?, MB_OK);
}
break;
case WM_DESTROY:   // Destrui??o da janela
PostQuitMessage (0);
break;
default:
return DefWindowProc (hwnd, message, wParam, lParam);
}
return 0;
}

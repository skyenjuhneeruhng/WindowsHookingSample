//Author: Sky19938470
//2019/05/26


#ifdef HOOKDLL_EXPORTS
#define HOOKDLL_API __declspec(dllexport)
#else
#define HOOKDLL_API __declspec(dllimport)
#endif

// Define a private messages. This message is sent when key is down/up
#define WM_KEYSTROKE (WM_USER + 101)
#define WM_KEYINPUT  (WM_USER + 102)
#define WM_MOUSEEVENT (WM_USER + 103)
#define WM_MOUSEINPUT (WM_USER + 104)

//exported functions.
BOOL HOOKDLL_API WINAPI SetKeyboardHook(BOOL bInstall, 
										DWORD dwThreadId = 0, 
										HWND hWndCaller = NULL);

BOOL HOOKDLL_API WINAPI SetLowKeyboardHook(BOOL bInstall, 
										DWORD dwThreadId = 0, 
										HWND hWndCaller = NULL);

BOOL HOOKDLL_API WINAPI SetMouseHook(BOOL bInstall,
									DWORD dwThreadId = 0,
									HWND hWndCaller = NULL);

//BOOL HOOKDLL_API WINAPI SetLowMouseHook(BOOL bInstall,
//									DWORD dwThreadId = 0,
//									HWND hWndCaller = NULL);
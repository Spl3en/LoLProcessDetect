#include <stdio.h>
#include <stdlib.h>

#include "./Win32Tools/Win32Tools.h"

#define LOL_PROCESS 	"League of Legends.exe"
#define LOL_WINDOW_NAME "League of Legends (TM) Client"

int main ()
{
	// Get the PID
	DWORD pid;
	if ((pid = get_pid_by_name (LOL_PROCESS)) == 0)
		warning ("Process " LOL_PROCESS " not active");
	else
		info("get_pid_by_name success !");


	// Get the process handle
	HANDLE process;
	if ((process = OpenProcess (PROCESS_ALL_ACCESS, FALSE, pid)) == 0)
		warning ("Process " LOL_PROCESS " is unable to be opened with all access.");
	else
		info("OpenProcess success !");


	// Get the base address
	DWORD base_addr;
	if ((base_addr = get_baseaddr (LOL_PROCESS)) == 0)
		warning ("Process " LOL_PROCESS " not found.");
	else
		info("OpenProcess success !");


	// Get the window handle
	HWND hwnd;
	if ((hwnd = get_hwnd_from_title (LOL_WINDOW_NAME)) == NULL)
		warning ("Can't find window name \"" LOL_WINDOW_NAME "\".");
	else
		info("get_hwnd_from_title success !");


	system("pause");
    return 0;
}

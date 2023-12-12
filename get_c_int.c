#include "main.h"

/**
 * get_c_int - Handle the crtl + c call in prompt
 * @sig: Signal handler
 */
void get_c_int(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}

#include "library/syscalls.h"
#include "library/string.h"

int main(const char *argv[], int argc)
{
	printf("Testing exec.  Exec'ing saver.exe.\n");
	const char *args[] = { "saver.exe" };
	process_exec("saver.exe", args, 1);
	printf("This shouldn't print.\n");
	return 0;
}

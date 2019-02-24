/*
 *
Copyright (C) 2017 The University of Notre Dame
This software is distributed under the GNU General Public License.
See the file LICENSE for details.
*/

#include "library/syscalls.h"
#include "library/string.h"
#include "library/user-io.h"

int main(const char *argv[], int argc)
{
	char buffer[200];
	uint32_t i = 0;
	chdir("/");
	char filename[5] = "ex";
	char id[4];
	for(i = 0; i < 5; i++) {
		filename[2] = 0;
		strcat(filename, uint_to_string(i, id));
		printf("writing %s\n", filename);
		mkdir(filename);
		readdir(".", buffer, 200);
		chdir(filename);
		printf("%s\n", buffer);
	}
	printf("final directory:\n");
	pwd(buffer);
	printf("%s\n", buffer);

	return 0;
}

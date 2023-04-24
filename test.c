#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char c = 'a';
	char sp = '\n';
	char *pt = "b";

	write(1, &c, 1);
	write(1, &sp, 1);
	write(1, &(*pt), 1);
}

#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("file.txt", "w+");

	fputs("and that piece of art is useful" - Dora Korpar, 2015-10-19", fp);

	fclose(fp);

	return (0);

}

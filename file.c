#include <stdio.h>
int main(void)
{
	FILE *fi, *fo;
	int b;
	fi = fopen("in", "r");
	fo = fopen("out", "w");
	b = fgetc(fi);
	while (EOF != b) {
		fputc(b, fo);
		b = fgetc(fi);
		printf("%d\n",b);
	} 
	fclose(fi);
	fclose(fo);
}

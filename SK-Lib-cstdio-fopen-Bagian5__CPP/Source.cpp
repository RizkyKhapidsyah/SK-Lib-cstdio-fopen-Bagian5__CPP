#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	int c;
	FILE* fp;
	fp = fopen("file.txt", "r");

	if (fp) {
		while ((c = getc(fp)) != EOF) {
			putchar(c);
		}
		fclose(fp);
	}

	_getch();
	return 0;
}
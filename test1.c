#include <stdio.h>
int main () {
	printf ("Test v13.01: OK\n");
	FILE *fIn;
	int a = 0;
	int b = 0;
	fIn = fopen ("data.txt", "r");
	if (NULL == fIn ) {
		printf ("File not found!\n");
		return 1;
	}
	else {
		printf ("File opened successful!\n");
		fscanf (fIn, "%d", &a);
		printf ("\na: %d", a);
		fscanf (fIn, "%d", &b);
		printf ("\nb: %d", b);
	}
	fclose (fIn);
	return 0;
}


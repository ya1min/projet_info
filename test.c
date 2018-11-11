/*
 * test.c
 *
 *  Created on: 6 nov. 2018
 *      Author: yibrahimi
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	FILE *MyFile = NULL; //pointeur du fichier
	char buffer[255];
	char header[13] = "Amplitude";

	typedef struct Data {
		char variable[100];
		int valeur;
	} strdata;

	strdata Data;

	// En generale : FILE * fopen ( const char * filename, const char * mode );
	MyFile = fopen("test.txt", "r");
	if (MyFile == NULL) {
		printf("Error can't open file");
		return EXIT_FAILURE;
	}
//reading file
	else {
		printf("the file is working\n");

		fgets(buffer, 13, (FILE*) MyFile);

		printf("1 : %s\n", buffer);

		if (strcmp(buffer, header) == 0)
			printf("The strings are equal.\n");
		else
			printf("The strings are not equal.\n");

		fclose(MyFile);

		return EXIT_SUCCESS;

	}

}

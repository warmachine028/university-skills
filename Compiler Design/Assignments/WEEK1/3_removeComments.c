#include <stdio.h>
#include "removeComments.c"
#define size 1000000

// reads file and return contents
char *readFile(char fileName[])
{
	// Opening input file in "read" mode
	FILE *cursor = fopen(fileName, "r");
	char *data = malloc(size);

	char buffer;
	int cursize = 0;

	do // Copying file contents in buffer
	{
		buffer = fgetc(cursor);
		data[cursize++] = buffer;
	} while (buffer != EOF);

	fclose(cursor);
	return data;
}

// takes contents and write into file
void write(char content[], char fileName[])
{
	// Opening output file in "write" mode
	FILE *file = fopen(fileName, "w");
	for (int i = 0; content[i] != EOF; i++)
		fputc(content[i], file);
	fclose(file);
}

void main()
{
	char *data;
	data = readFile("testCode.c");
	// data = readFile("removeComments.c");
	data = readFile("3_removeComments.c");
	data = removeComments(data);
	write(data, "writeFile.c");
}

#include <stdio.h>
#include "removeComments.c"
#define size 1000000


char *readFile(char fileName[])
{
	
	FILE *cursor = fopen(fileName, "r");
	char *data = malloc(size);

	char buffer;
	int cursize = 0;

	do 
	{
		buffer = fgetc(cursor);
		data[cursize++] = buffer;
	} while (buffer != EOF);

	fclose(cursor);
	return data;
}


void write(char content[], char fileName[])
{
	
	FILE *file = fopen(fileName, "w");
	for (int i = 0; content[i] != EOF; i++)
		fputc(content[i], file);
	fclose(file);
}

void main()
{
	char *data;
	data = readFile("testCode.c");
	
	data = readFile("3_removeComments.c");
	data = removeComments(data);
	write(data, "writeFile.c");
}

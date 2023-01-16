#include <stdlib.h>
#include <stdio.h>

#define size 1000

int main()
{
	FILE *cursor = fopen("3_Test_Program.c", "r");
	FILE *final = fopen("write_file.c", "w");

	char buffer, data[size];
	int cursize = 0;

	do
	{
		buffer = fgetc(cursor);
		data[cursize] = buffer;
		cursize++;
	} while (buffer != EOF);

	int i = 0;
	while (i < cursize)
	{
		if (data[i] == '/')
		{
			// A single line comment is encountered
			if (data[i + 1] == '/')
			{
				while (data[i] != '\n')
				{
					i++;
				}
				fputc(data[i], final);
			}
			// A multi line comment is encountered
			else if (data[i + 1] == '*')
			{
				printf("THis is here");
				while (data[i] != '*')
				{
					if (data[i + 1] == '/')
						break;
					i++;
				}
				fputc(data[i], final);
			}
			// Not a comment
			else
			{
				fputc(data[i], final);
			}
		}
		else
		{
			fputc(data[i], final);
		}
		i += 1;
	}
	fclose(cursor);
	fclose(final);
}

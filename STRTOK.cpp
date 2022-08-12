#include<stdio.h>
#include<string.h>
main()
{
	char string[50]="Hello World!";
	char *p = strtok(string," ");
	while(p != NULL)
	{
		printf(p);
		p = strtok(NULL," ");
	}
}

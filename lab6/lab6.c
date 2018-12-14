#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int find(char[][256], int, char *);

int main(void)
{
	int wordsnumber = 0;
	int wordcheck;
	int j = 1;
	char text[256];
	char unique[129][256] = {"\0"};
	int count[129] = { 0 };
	char word1,delimiter[8] = " .,:;-\n";
	int counter = 0;
	fgets(text, 256, stdin);
	char *word = strtok(text, delimiter);
	
	while (word != NULL)
	{
		int z = find(unique, counter, word); 
		if (z==-1)
		{
			strcpy(unique[counter], word);
			count[counter]++; 
			counter++;
		}
		else
		{
			count[z]++;
		}
		word = strtok(NULL, delimiter);
	}
	int max = count[0];
	int mi = 0; 
	for (int i = 1; i < counter; ++i) 
	{
		if (count[i] > max) 
		{
			max = count[i];
			mi = i;
		}
	}

	printf("\n%s = %d times", unique[mi], max);
	getchar();
	return(0);
}

int find(char m[][256],int n, char *word) 
{
	for (int i = 0; i <= n; ++i)
	{
		if (strcmp(m[i], word) == 0)
			return(i);
	}
	return(-1);
}

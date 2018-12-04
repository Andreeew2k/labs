#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define MAX 25 //the maximum number of elements in a row/column

int input(double[][MAX]);
double min_col_el(double[][MAX], int, int);
double max_col_el(double[][MAX], int, int);

int main()//перевірити чи можуть на побічній діагоналі елементи зростати зліва направо
{
	double m[MAX][MAX];
	int i, j, n;
	n = input(m);

	for (i = 0; i < n - 1; ++i)
		if (min_col_el(m, i, n) > max_col_el(m, i + 1, n))
		{
			printf("No, they can't");
			_getch();
			return(0);
		}

	printf("Yes, they can!");
	_getch();
	return(0);
}

double max_col_el(double m[][MAX], int k, int n)
{
	int i;
	double max = m[0][k];
	for (i = 1; i < n; ++i)
		if (m[i][k] > max)
			max = m[i][k];
	return(max);
}

double min_col_el(double m[][MAX], int k, int n)
{
	int i;
	double min = m[0][k];
	for (i = 1; i < n; ++i)
		if (m[i][k] < min)
			min = m[i][k];
	return(min);
}

int input(double m[][MAX])
{
	int i = 0, j = 0;
	const char space[] = " ";
	char *temp;
	char line[2 * MAX] = "\0";
	printf("Enter elements of a row separated by spaces\n"
		"Separate rows by enter\n"
		"If you have entered all the elements type 'end' instead\n\n");

	while (1)
	{
		gets(line);
		if (!strcmp(line, "end"))
		{
			break;
		}
		temp = strtok(line, space);
		while (temp != NULL)
		{
			m[i][j] = atof(temp);
			++j;
			temp = strtok(NULL, space);
		}
		++i;
		j = 0;
	}
	printf("\n");
	return(i);
}

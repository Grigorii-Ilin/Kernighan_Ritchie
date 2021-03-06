// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	const int N = 60;
	char ch;
	int charsCount = 0, spacesCount = 0, tabsCount = 0, linesCount = 0;
	bool spacePrevious = false;
	int a = 0;
	
	do {
		a++;
		scanf("%c", &ch);
		

		switch ((unsigned int)ch) {
		case(unsigned int)' ':
			spacesCount++;
			if (!spacePrevious) {
				printf("%c", ch);
			}
			spacePrevious = true;
			break;
		case(unsigned int)'\t':
			tabsCount++;
			printf("\\t");
			spacePrevious = false;
			break;
		case(unsigned int)'\n':
			spacePrevious = false;
			break;
		default:
			printf("%c", ch);
			spacePrevious = false;
			break;
		}

	} while (a<N);
printf("Spaces: %d  Tabs: %d  Lines: %d", spacesCount, tabsCount, linesCount);

getch();
    return 0;
}


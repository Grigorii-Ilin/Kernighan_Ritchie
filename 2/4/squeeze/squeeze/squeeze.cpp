// squeeze.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<string.h>
#pragma warning(disable:4996)

int squeeze(char str[], const char symbols[]);
const int STR_BUF = 100;

int main()
{
	char str[STR_BUF];
	char symbols[STR_BUF];

	while (true) {
		printf("\nInput str and symbol:\n");
		scanf("%s  %s", str, symbols);
		int firstMatchPos=squeeze(str, symbols);
		printf("Result: %s , First match pos: %d\n", str, firstMatchPos);
	}

	getch();
    return 0;
}

int squeeze(char str[], const char symbols[]) {
	char resultStr[STR_BUF];
	int resultCurrentChar = 0;
	int firstMatchPos = -1;

	for (size_t charInStrIndex = 0; str[charInStrIndex]!='\0'; charInStrIndex++) {
		bool match = false;

		for (size_t symbolIndex = 0; symbols[symbolIndex] != '\0'; symbolIndex++) {
			if (str[charInStrIndex]== symbols[symbolIndex]) {
				if (firstMatchPos==-1) {
					firstMatchPos = charInStrIndex;
				}
				match = true;
				break;
			}
		}	

		if (!match) {
			resultStr[resultCurrentChar] = str[charInStrIndex];
			resultCurrentChar++;
		}
	}
	resultStr[resultCurrentChar] = '\0';
	strcpy(str, resultStr);

	return firstMatchPos;
}

// spaces to new lines.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>

#pragma warning(disable:4996);

int main()
{
	char ch;
	

	ch = (unsigned char)getch();
	while(ch!='\n') {
		if (ch=='\n') {
			break;
		}
		if (ch==' ') {
			ch = '\n';
		}
		putch((unsigned int)ch);
		ch = (unsigned char)getch();
	} 

	getch();
    return 0;
}


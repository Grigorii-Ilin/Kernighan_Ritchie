// Celsius reverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>


int main()
{
	printf("Fahrenheit and Celsius temperature\n");

	for (int fahr = 300; fahr >= 0; fahr-=20) {
		printf("%4d %4.1f\n", fahr, (5.0 / 9.0*(fahr - 32.0)));
	}

	_getch();
    return 0;
}


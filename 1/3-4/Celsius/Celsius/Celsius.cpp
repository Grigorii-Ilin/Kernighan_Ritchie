// Celsius.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

//Convert a temperature cels, fahr
int main(){
	float fahr = 0, cels = 0;
	int lower = 0, upper = 300, step = 20; //borders of t and step for change
	
	printf("Celsius and Fahrenheit temperature\n");
	cels = lower;
	while (cels<=upper) {
		fahr = (9.0 / 5.0)*cels + 32.0;
		printf("%3.0f %6.1f\n", cels, fahr);
		cels = cels + step;
	}


	_getch();
    return 0;
}


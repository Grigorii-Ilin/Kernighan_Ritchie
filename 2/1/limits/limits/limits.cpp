// limits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<float.h>
#include<math.h>
#pragma warning(disable:4996)


int main()
{
	int p = 7; //power
	printf("CHAR_MIN %d  %.0f\n", CHAR_MIN, pow(2, p)*-1);
	printf("CHAR_MAX %d  %.0f\n", CHAR_MAX, pow(2, p)-1);
	printf("UCHAR_MAX %d  %.0f\n", UCHAR_MAX, pow(2, p+1) - 1);

	p = 15; 
	printf("SHRT_MIN %d  %.0f\n", SHRT_MIN, pow(2, p)*-1);
	printf("SHRT_MAX %d  %.0f\n", SHRT_MAX, pow(2, p) - 1);
	printf("USHRT_MAX %d  %.0f\n", USHRT_MAX, pow(2, p + 1) - 1);

	p = 31;
	printf("INT_MIN %d  %.0f\n", INT_MIN, pow(2, p)*-1);
	printf("INT_MAX %d  %.0f\n", INT_MAX, pow(2, p) - 1);
	printf("UINT_MAX %u  %.0f\n", UINT_MAX, pow(2, p + 1) - 1);

	p = 63;
	printf("LLONG_MIN %lld  %.0f\n", LLONG_MIN, pow(2, p)*-1);
	printf("LLONG_MAX %lld  %.0f\n", LLONG_MAX, pow(2, p) - 1);
	printf("ULLONG_MAX %llu  %.0f\n", ULLONG_MAX, pow(2, p + 1) - 1);

	int tenExponent = 308;
	printf("DBL_MAX %e  %e\n", DBL_MAX, pow(10, tenExponent)*1.7976931348623158);

	tenExponent = 38;
	printf("FLT_MAX %e  %e\n", FLT_MAX, pow(10, tenExponent)*3.402823466);

	getch();
    return 0;
}


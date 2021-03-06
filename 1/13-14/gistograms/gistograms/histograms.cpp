// gistograms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include<conio.h>
#include<string.h>
#pragma warning(disable:4996)


int main()
{
	const int SENTENCE_LEN_MAX = 100, WORD_LEN_MAX=20;
	int wordsLen[WORD_LEN_MAX];
	for (size_t i = 0; i < WORD_LEN_MAX; i++) {
		wordsLen[i] = 0;
	}

	const int SYMBOLS_COUNT = 256;
	int symbols[SYMBOLS_COUNT];
	for (size_t i = 0; i < SYMBOLS_COUNT; i++) {
		symbols[i] = 0;
	}

	char* str = new char[WORD_LEN_MAX];
	int sentenceLen = 0;
	int oneWordLen = 0;
	do {
		scanf("%s", str);

		oneWordLen = strlen(str);
		wordsLen[oneWordLen-1]++;
		sentenceLen += oneWordLen;

		for (size_t symbolIndex = 0; symbolIndex < oneWordLen; symbolIndex++) {
			int a = (unsigned int)str[symbolIndex];
			symbols[a]++;
		}
	} while (sentenceLen<SENTENCE_LEN_MAX);
	delete str;

	printf("\nWords length:");
	for (size_t wordLenIndex = 0; wordLenIndex < WORD_LEN_MAX; wordLenIndex++) {
		printf("\nLen %3d: ", wordLenIndex+1);
		for (size_t histogramSymbol = 0; histogramSymbol < wordsLen[wordLenIndex]; histogramSymbol++) {
			printf("|");
		}
	}

	printf("\nSymbolsCount:");
	for (size_t symbolIndex = 0; symbolIndex < SYMBOLS_COUNT; symbolIndex++) {
		printf("\nSymbol num %3d: ", symbolIndex);
		for (size_t histogramSymbol = 0; histogramSymbol < symbols[symbolIndex]; histogramSymbol++) {
			printf("|");
		}
	}

	for (size_t i = 0; i < 5; i++) {
		getch();
	}
	
    return 0;
}


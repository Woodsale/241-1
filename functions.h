#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//char* subCipher(char* cipher, char* key, int five);

//char* reverseIt(char* rev);
//int charCounter(char* abc);
char* code(char* c,char* k);
char* uncode(char* c,char* k, char* aWord);

char* deblank(char* input);

char* noRep(char* k);

char* noRepTwo(char* a, char* k);

void caesar(char cipher[], char key[]);
void uncaesar(char cipher[], char key[]);

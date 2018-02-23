#include "functions.h"
#include <stdio.h>
#include <string.h>
		
	/***********************************************
	Takes a word to be coded with and a key to code
	it with
	************************************************/
void caesar (char cipher[], char key[]){
	char abc[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	
	char* abcTwo = noRepTwo(abc,key);
	char* keyTwo = noRep(key);
	
	char* abcThree = deblank(abcTwo); 
	char* keyThree = deblank(keyTwo);
	//combines abc with no ' ' and the key
	key = strcat(keyThree,abcThree);
	
	char* newCipher = code(cipher,key);
	
	printf("%s\n", key);
  	printf("%s\n", newCipher);
}
	
	/***********************************************
	Takes a word to be uncoded and a key to uncode 
	it with, then prints the output 
	************************************************/
void uncaesar (char cipher[], char key[]){
	char abc[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	
	char* abcTwo = noRepTwo(abc,key);
	char* keyTwo = noRep(key);

	char* abcThree = deblank(abcTwo); 
	char* keyThree = deblank(keyTwo);
	//combines abc with no ' ' and the key
	key = strcat(keyThree,abcThree);
	
	char aWord[strlen(cipher)];

	char* newCipher = uncode(cipher,key,aWord);

	printf("%s\n", key);
	printf("%s\n", newCipher);
}
	/***********************************************
 	This will take a key and a ciphered word and
	return an uncoded version of the word
	************************************************/
char* uncode(char* c, char* k, char* aWord){
	int a,b;
	for(a = 0;a<strlen(k);a++){
		for(b = 0;b<strlen(c);b++){	
			if(k[a] == c[b]){
				aWord[b] = a + 'A';
			}
		}
	}
	return aWord;
}

	/***********************************************
	This part of the function will assign the letters
	in cipher to the key 
	************************************************/
char* code(char* c, char* k){
	int f,g;
	int aList[strlen(c)];	
	for(f = 0;f < strlen(c);f++){
		aList[f] = c[f] - 'A';
	}

	for(g = 0;g < strlen(c);g++){
		//for(h = 0;h < strlen(key);h++){
		c[g] = k[aList[g]];
		//}
	}
	return c;
}

	/***********************************************
	This function removes  ' ', It was found on 
	StackOverflow 
	************************************************/
char* deblank(char* input){
	int i,j;
	char *output = input;
	for(i = 0,j = 0;i < strlen(input);i++,j++){
		if(input[i] != ' ')
			output[j] = input[i];
		else
			j--;
	}
	output[j] = 0;
	return output;
}

	/***********************************************
	This function removes repeated chars and replaces
	with a ' ' 
	************************************************/
char* noRep(char* k){
	int m = 0, n = 0;
	for(m = 0;m < strlen(k);m++){
		for(n = 0;n < strlen(k);n++){
			if((k[m] == k[n]) && (m != n)){
				k[n] = ' ';
			}
		}
	}
	return k;
}
	/***********************************************
	This function removes repeated chars from two 
	char arrays
	************************************************/
char* noRepTwo(char* a, char* k){
	int x = 0,y = 0;
	for(x = 0;x < strlen(a);++x){
		for(y = 0;y < strlen(k);++y){
			if(a[x] == k[y]){
				a[x] = ' ';
			}
		}
	}
	return a;
}

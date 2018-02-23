#include "functions.h"

void main(){	
	char cipher[75];
	char key[26];
	char var[1];
	
	printf("E for encoding a word, U for uncoding a word: \t");
	scanf("%s/n", var);

	if(var[0] == 'E'){
			printf("\nEnter a word to be encoded\nCapitial letters only:\t");
			scanf("%s", cipher);
	
			printf("\nEnter a key word:\t");
			scanf("%s",key);
	
			caesar(cipher,key);
			printf("\n");
	}
	else if(var[0] == 'U'){
			printf("\nEnter  word to be uncoded\nCapitial letters only:\t");
			scanf("%s", cipher);
	
			printf("\nEnter the key word:\t");
			scanf("%s",key);
	
			uncaesar(cipher,key);
			printf("\n");
	}else{
	
			printf("\nInvalid ");
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Algoritmo desenvolvido por ConradoPSA (SUPREME DEVELOPER)
*/

const char U_CHAR[] = "abcd";
const int U_CHAR_LEN = sizeof(U_CHAR) - 1;

void combinacao(char * str, int ini, int fim){
	int k;
	for (k=0; k < U_CHAR_LEN; k++)
    {
        str[ini] = U_CHAR[k];

        if (ini == fim - 1)
        	printf("%s\n", str);		
        else 
			combinacao(str, ini + 1, fim);
    }
}

void bruteForce(int qtd){
	char * str = (char *)malloc(qtd+1);

	int i;
	for (i=1; i<=qtd; ++i){
		str[i] = '\0';		
		combinacao(str, 0, i);
	}	
}

int main(){
	int n;
	printf("n=");
	scanf("%d", &n);
	bruteForce(n);
}

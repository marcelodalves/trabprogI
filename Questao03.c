#include <stdio.h>

int main()
{

//variaveis	
int i, j, decre, cresc, vetor[10];

//obtencao do vetor
for (i = 0; i < 10; i++){
	printf ("Insira o vetor %d: ", i+1);
	scanf ("%d", &vetor[i]);
}

//verificacao
for (i = 0; i < 10; i++){
	if (vetor[i] < vetor [i+1]) cresc++;
	if (vetor[i] > vetor [i+1]) decre++;
}

if (decre == 10) printf ("\n\nDESCRESCENTE");
if (cresc == 10) printf ("\n\nCRESCENTE");
if (decre != 10 && cresc != 10) printf("SEM ORDEM");

getch();
return 0;
}

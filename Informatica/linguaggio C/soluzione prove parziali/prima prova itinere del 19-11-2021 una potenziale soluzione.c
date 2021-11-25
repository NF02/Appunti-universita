/*
Parte 1.
–Scrivere un programma in C che:
consenta di caricaresu unarray(V)nnumeri interiletti dallo standard input(con ndefinito dall’utente) 
in modo tale che vengano inseriti solo ed esclusivamentevalori pari. Tutti i valori disparidovranno essere
ignoratie pertanto non saranno inseriti nell’array(V).

Parte 2.
Completare il programma con laseguentefunzionalità: copiarein unnuovo array (W) gli elementi 
dell’array (V) che soddisfano la seguente condizione: V[i] == i;

Parte 3.
Completare il programma con la seguente funzionalità:
preso in ingresso un numero intero xstampare a video gli 
indici ie jdell’array (V) per i quali è soddisfatta la seguente 
condizione: V[i] + V[j] == x;
*/

#include <stdio.h>

#define N 1000

int main(){
	int n=1, v[N], ins=0, i=0, w[N];
	// Parte uno
	do {
		printf("inserisci la dimensione del vettore: ");
		scanf("%d",&n);
	}while(n<1 && n>N); // controllo di sicurezza, evita crush involontari
	while (i<n){
		printf("inserisci un numero pari: ");
		scanf("%d",&ins);
		if (ins%2==0){ // controllo se è pari usando la regola matematica della divisione per due
			v[i]=ins; 
			i++;
		}else {
			printf("il numero è dispari, riprova!\n");
		}
	}
	for (i=0;i<n;i++)
		printf("%d\n",v[i]);

	// Parte due
	int j=0;
	for(i=0;i<n;i++)
		if(v[i]==i){ // controllo se in posizione i il valori sia uguale i e poi vado a inserirlo dentro al vettore w che è stato generato appositamente
			w[j]=i;
			j++;
		}
	printf("-----------\n");
	for (i=0;i<j;i++)
		printf("%d\n",w[i]);
	// Parte tre

	int x=0;
	printf("inserisci un valore random: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if (v[i]+v[j]==x) 
				printf("%d\n %d\n",i,j);
	return 0;
}

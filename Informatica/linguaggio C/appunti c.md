# Linguaggio C
## Definizione
Il linguaggio C è un linguaggio compilato, fortemente tipizzato e case sensitive. Ovvimanete essendo un linguaggio compilato
richiederà una ricompilazione nel caso in cui si cambi l'OS oppute l'architettura. È un linguaggio nato per i sistemi Unix 
negli anni 70' e quindi ha un ottica di programmazione orientata per quello che erano gli elaboratori all'epoca e anche quello
che i programmatori usavano all'epoca, seguendo il loro schema mentale, che risultava leggermente diverso dal quello dei 
programmatori odierni, abbituati a linguaggi orientati alla programmazione ad Oggetti e poco abbituati a gestire manualmente
le risorse. Il C è stato modificato nel tampo e attualmente lo standard è il **C11** del 2011.
### Programma base "**hello world**"
```c
#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("hello world");
    return 0;
}
```
## funzioni d'input/output basilari
| Nome funzione   |                   Descrizione               |
| --------------- | ------------------------------------------- |
| `printf()`      | Funzione per stampare una stringa a schermo |
| `scanf()`       | Funzione che consente di assegnare un valore ad una variabile |

queste due funzioni consentono di avere una interazione con il programma
anche se non in modo persistente.
```
Il termine persistenza in informatica, il concetto di persistenza si riferisce alla caratteristica dei dati di un programma di sopravvivere all'esecuzione del programma stesso che li ha creati: senza questa capacità questi infatti verrebbero salvati solo in memoria Ram venendo dunque persi allo spegnimento del computer. 
```
By <a href="https://it.wikipedia.org/wiki/Persistenza_(informatica)">Wikipedia</a>
## Variabili
Queste sono le variabili primitive presenti all'interno del C che compongono anche le variabili complesse e anche le strutture
dati.
| Nome        | Descrizione                                                                                       |
| ----------- | --------------------------------------------------------------------------------------------------|
| **int**     | Numero intero                                                                                     |
| **float**   | Numero reale                                                                                      |
| **char**    | Carattere alfanumerico                                                                            |
| **double**  | Numero reale "esteso"                                                                             |
| **long**    | Numero intero "esteso"                                                                            |
| **short**   | Numero intero "ridotto"                                                                           |
| **void**    | Variabile nulla che viene utilizzata normamente per le funzioni che non devono rendere un valore. |
|             |                                                                                                   | 

- *esteso* - consente di inserire un valore più grande all'interno della variabile, ma occupa più spazio in memoria
- *ridotto* - permette di inserire un valore più piccolo rispetto alla variabile standard ma pesa meno memoria e
  quindi risulta più ottimizzato se non è necessario l'utilizzo di un **int** completo.
### Operatore d'assegnamento
l'operatore d'assegnamento è un operatore che viene utilizzato per assegnare un dato valore all'interno di una variabile.
viene espresso dal carattere `=`, non va confuso con l'operatore di confronto che viene espresso con `==` perché altrimenti sorgono
dei problemi seri.
#### Esempio:
```c
int i=0; // in questo caso il valore all'interno della variabile è stato sostituito con il valore 0
i=4; // adesso all'interno di i non è resente più 0 ma è presente il 4. Il valore 0 è stato eliminato definitivamente.
```
Ovviamente questo metodo funziona per le variabili primitive non per quelle composte.
### Casting
Il casting è un pratica che consente convertire il contenuto di una variabile di un determinato tipo in quello di un altra differente, questa pratica consente di svolgere delle operazioni che altrimenti non sarebbero possibili, come il poter avere il resto tra due interi trasformandolo in un numero relativo e quindi permette di avere un valore più preciso. <br>Esempio:
```c
int a=42;
int b=3;
float ris=(float)a%b;
```
Il tipo lo si specifica tra parentesi tonde prima delle operazione di cui si vuole adattare il risultato.
## Operatori logici
Come tutti i linguaggi di programmazione, possiede una parte legata all'algebra booleana e anche agli aspetti logici in generare 
come maggiore, minore e uguale, anche le funzioni di comparazione.
| Simboli | funzione                   |
| ------- | -------------------------- |
|    ==   | Comparazione               |
|    &&   | AND logico                 |
|  \|\|   | OR logico                  |
|    !=   | Differenza                 |

## Operatori aritmetici
| Simboli | funzione                 |
| ------- | ------------------------ |
|    +    | somma                    |
|    -    | sottrazione              |
|    /    | divisione                |
|    %    | modulo (resto divisione) |

## Gestione dei file
Come in tutti i linguaggi strutturati, il `C` ha la possibilità di gestire dei file, ovviamente è sempre il C, quindi le operazioni vanno svolte manualmente. E
soprattutto richiedono una certa attenzione, perché il rischio è quello di sovrascrivere qualche documento in portante che una volta perso non lo si recupera, 
è perso definitivamente. 
### Variabili dedicate
| Nome variabile |                   Descrizione               |
| -------------- | ------------------------------------------- |
| FILE           | questo tipo di variabile indira un file fisico presente sul device d'archiviazione in questione |

Effettivamente la cosa importate in questi casi è fornire un percorso valido in cui salvare lo stesso.

### Funzioni dedicate
| Nome funzione |                   Descrizione               |
| ------------- | ------------------------------------------- |
| fprintf()     | Funzione per stampare una stringa in un file|
| fscanf()      | Funzione che consente di assegnare un valore da file |
### esempi di caricampento
```c

/* librerie standard */

int main() {
  FILE *fd;
  int x=-32;

		/* apre il file in scrittura */
  fd=fopen("scrivi.txt", "w");
  if( fd==NULL ) {
    perror("Errore in apertura del file");
    exit(1);
  }


		/* scrive il numero */
  fprintf(fd, "%d\n", x);


		/* chiude il file */
  fclose(fd);

  return 0;
}
```
Il consiglio è di scrivere una funzione esterna al `main` per gestire questa oparazione
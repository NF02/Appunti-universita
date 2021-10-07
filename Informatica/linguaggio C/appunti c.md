# Linguaggio C
---
author: "Nicola Ferru"

---
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
## Librerie
In C viengono utilizzate delle librerie per caricare e implementare nuove funzionalità, questo consente di ottimizzare al massimo 
il programma, per caricare una libreria è necessario utilizzare la direttiva al preprocessore `#include<nomeLibreria>`  nel caso delle
librerie di sistema, mentre, nel caso di librerie locali scritte ad hoc per il programma bisogna utilizzare la direttiva `#include "nomeLibreria"`.
## Commenti
Come in ogni buon linguaggio di programmazione anche il C supporta l'utilizzo dei commenti sia per singola linea sia multi-linea,
i caratteri che vengono utilizzarti per indicare questo tipo di testo sono ripportati qui sotto nella tabella.
| Nome funzione   |                   Descrizione               |
| --------------- | ------------------------------------------- |
| ` // testo`     | Commento a linea singola                    |
| `/* testo */`   | Commento multi-linea                        |

Il commento è un istruzione che non viene interpretata come codice eseguibile dal compilatore, che lo ignorarà e passerà alla prossima istruzione.
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
### esempi
```c
    // con testo statico
    printf("testo");
    // con testo dimanico
    int c=4;
    printf("%d",c);
    // acquisizione di un valore
    scanf("%d",&c);
```
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
Il casting è un pratica che consente convertire il contenuto di una variabile di un determinato tipo in 
quello di un altra differente, questa pratica consente di svolgere delle operazioni che altrimenti non sarebbero
possibili, come il poter avere il resto tra due interi trasformandolo in un numero relativo e quindi permette di 
avere un valore più preciso. <br>Esempio:
```c
int a=42;
int b=3;
float ris=(float)a%b;
```
Il tipo lo si specifica tra parentesi tonde prima delle operazione di cui si vuole adattare il risultato.
### Consigli
Dare sempre un nome valido alle variabili, perché così il programma risulta più leggibile dopo averlo scritto, cioè quando si scrive un
programma non lo si fa mai di fila, molte volte è necessario prendere una pausa quindi se si danno dei nomi senza senso alle variabili diventarà più
difficile interpretare l'utilizzo della stessa.
### Contenuto delle variabili
Quando viene dichiarata una variabile senza averla inizializzata con un valore, il contenuto che si trova al suo interno è ""ignoto"", cioè
il valore all'interno allo spazio di memoria è quello del programma che la stava utilizzando prima quindi non è gestibile e risulta totalmente
random per il programmatore.

## Operatori logici
Come tutti i linguaggi di programmazione, possiede una parte legata all'algebra booleana e anche agli aspetti logici in generare 
come maggiore, minore e uguale, anche le funzioni di comparazione.
| Simboli | funzione                   |
| ------- | -------------------------- |
|    `==` | Comparazione               |
|    `&&` | AND logico                 |
|  `||`   | OR logico                  |
|    `!=` | Differenza                 |

## Operatori aritmetici
| Simboli | funzione                 |
| ------- | ------------------------ |
|    +    | somma                    |
|    -    | sottrazione              |
|    /    | divisione                |
|    %    | modulo (resto divisione) |
### Operatori composti
| Simboli | funzione                 |
| ------- | ------------------------ |
|    +=   | somma                    |
|    -=   | sottrazione              |
|    /=   | divisione                |
|    %=   | modulo (resto divisione) |
#### esempio
```c
  cont+=5
  // invece di 
  count=count+5
```
occhio alle variabili non inizializzate perché non sono gestibili quindi non si può sapere che valore possa assumere il risultato.
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
| fopen()       | Funzione che consente di aprire un file |
| fclose()      | Funzione che consente di chiudere un file |

### esempi
#### Operazione di scrittura su file
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
#### Operazione di recupero dei dati da un file
```c
int main(){
  FILE *pf;
  char nome_file[128];
  printf("Inserisci il nome di un file (percorso completo): "); 
  scanf ("%s" , nome_file );
  pf = fopen(nome_file , "r"); if (pf) {
      fseek(pf, SEEK_END);
      printf ("%s è lungo %ld bytes" , nome_file , ftell (pf )); 
      fclose( pf );
  }else{
    printf("%s non esiste !", nome_file );
  }
  return 0;
}
```
### Consiglio
Il consiglio è di scrivere una funzione esterna al `main` per gestire queste operazioni, perché così si possono gestire
al meglio le eccezioni e quindi si può impedire all'utente finale di fare potenziali danni al suo stesso sistema delimitando
le operazioni possibili guidandolo nel gio sto modo. Perché l'utente non sa cosa sta facendo.
### ATTENZIONE!!!!
Quando si apre un file bisogna sempre e comunque chiuderlo quando si finisce di esequire una determinata operazione, altrementi 
si rischia creare degli effettivi problemi, uno dei tanti è che il file risulta in utilizzo finché il programma è aperto anche se
non è più necessario, per di più rischi di danneggiare lo stesso scrivendoci per errore e tanti altri problemi logici che non possono 
essere espressi in due righe.

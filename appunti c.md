# Linguaggio C
## Definizione
Il linguaggio C è un linguaggio compilato, fortemente tipizzato e case sensitive. Ovvimanete essendo un linguaggio compilato
richiederà una ricompilazione nel caso in cui si cambi l'OS oppute l'architettura. È un linguaggio nato per i sistemi Unix 
negli anni 70' e quindi ha un ottica di programmazione orientata per quello che erano gli elaboratori all'epoca e anche quello
che i programmatori usavano all'epoca, seguendo il loro schema mentale, che risultava leggermente diverso dal quello dei 
programmatori odierni, abbituati a linguaggi orientati alla programmazione ad Oggetti e poco abbituati a gestire manualmente
le risorse. Il C è stato modificato nel tampo e attualmente lo standard è il **C11** del 2011.
### Programma base "hello world"
```c
#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("hello world");
    return 0;
}
```
## funzioni d'input/output basilari
| Nome funzione |                   Descrizione               |
| ------------- | ------------------------------------------- |
| printf()      | Funzione per stampare una stringa a schermo |
  scanf()       | Funzione che consente di assegnare un valore ad una variabile |
## Variabili
queste sono le variabili primitive presenti all'interno del C che compongono anche le variabili complesse e anche le strutture
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
viene espresso dal carattere =, non va confuso con l'operatore di confronto che viene espresso con == perché altrimenti sorgono
dei problemi seri.
#### Esempio:
```c
int i=0; // in questo caso il valore all'interno della variabile è stato sostituito con il valore 0
i=4; // adesso all'interno di i non è resente più 0 ma è presente il 4. Il valore 0 è stato eliminato definitivamente.
```
Ovviamente questo metodo funziona per le variabili primitive non per quelle composte.
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

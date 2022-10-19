#include<stdio.h>
#include<stdlib.h>

struct lista {
	int num;
	struct lista *next;

};
int* popola_array(int dim);
void stampa_array(int *v,int dim);
struct lista* inserisci_valore(struct lista* p, int i);
void stampa_list(struct lista* p);

int main (){
	int *v,dim;
	printf("quali elementi vuoi inserire: ");
	scanf("%d",&dim);
	v=popola_array(dim);
	stampa_array(v,dim);
	printf("---------------\n");
	struct lista* p=NULL;
	for(int i=0;i<dim;i++){
		if (v[i]==i)
			inserisci_valore(p,i);
	}
	int x=10;
	FILE *f;
	f=fopen("pippo.txt","w");
	for(int i=0;i<dim;i++)
		for(int j=0;j<dim;j++)
			if(v[i]+v[j]==x)
				fprintf(f,"%d %d ",i,j);
	fclose(f);
	return 0;
}

int* popola_array(int dim){
	int i=0, *v,ins;
	if(dim == 0)
		return 0;
	else{
		v=malloc(sizeof(int)*dim);
		do{
			printf("inserisci numero numero: ");
			scanf("%d",&ins);
			if(ins%2==0){
				v[i]=ins;
				i++;
			}else{
				printf("non è un numero pari!\n");
			}

		}while(i<dim);
		return v;

	}
}
void stampa_array(int *v, int dim){
	for (int i=0;i<dim;i++)
		printf("%d ",*(v+i));
	printf("\n");
}
struct lista* inserisci_valore(struct lista* p, int i){
	struct lista* p1=malloc(sizeof(struct lista));
	p1->num=i;
	if(p==NULL)
		p=p1;
	else{
		struct lista* paux=p;
		while(paux->next!=NULL)
			paux=paux->next;
		paux->next=p1;
	}
	p1->next=NULL;
	return p;
}

void stampa_list(struct lista* p){
	while(p!=NULL){
		printf("%d ",p->num);
		p=p->next;
	}
	printf("\n");
}


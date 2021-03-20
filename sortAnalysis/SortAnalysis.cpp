//diziler 100.000 çok yer kapladýðý için dizileri bölerek çalýþtýrdým insetion selec bubble için 1 , merge ile quick için ayrý çalýþtýrdým


#include<stdio.h>
#include "sorts.h"
#include<stdlib.h>
#include<time.h>

int main(){
	int boyut=100000;
	srand(time(NULL));
	int dizi1[boyut];
	int dizi2[boyut];
	int dizi3[boyut];
	int dizi4[boyut];
	int dizi5[boyut];
	
	for(int i=0;i<boyut;i++){
		int a=rand()%500;	
		dizi1[i]=a;
		dizi2[i]=a;
		dizi3[i]=a;
		dizi4[i]=a;
		dizi5[i]=a;
	}
	int bayrak=0;
	int scm;
	printf("1-sirali dizi icin....\n2-tersten sirali icin....\n3-rondam sirali....\nseciminiz : ");
	scanf("%d",&scm);
	switch (scm){
		case 1 : enIyiDurum(dizi1, boyut);bayrak=1;break;
		case 2 : bKsiralama(dizi1,boyut);bKsiralama(dizi2,boyut);bKsiralama(dizi3,boyut);bKsiralama(dizi4,boyut);bKsiralama(dizi5,boyut);break;
		case 3 : break;
	}
	if(bayrak==0){
		time_t start, end;
	
		start=clock();  	
		selection(dizi1, boyut);
		end = clock();
		printf("\nselection sort time %f",(double)(end-start)/(double)CLK_TCK);
		
		start=clock();
		insertion(dizi2, boyut);
		end = clock();
		printf("\ninsertion sort time %f",(double)(end-start)/(double)CLK_TCK);
		
		start=clock();
		bubble(dizi3, boyut);
		end = clock();
		printf("\nbubble sort time %f",(double)(end-start)/(double)CLK_TCK);
		
		start=clock();
		mergeSort(dizi4, 0, boyut-1);
		end = clock();
		printf("\nmerge sort time %f",(double)(end-start)/(double)CLK_TCK);	
		
		start=clock();
		quickSort(dizi5, 0, boyut-1);
		end = clock();
		printf("\nquick sort time %f",(double)(end-start)/(double)CLK_TCK);		
	}	
	
	return 0;	
}

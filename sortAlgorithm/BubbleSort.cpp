#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
	time_t start, end;

	
	int dizi[100000];
	int gecici,bayrak=0;
	for(int i=0;i<100000;i++){
		dizi[i]=rand();
	}
	int boyut=100000;
		start=clock();
	srand(time(NULL));
	while(bayrak==0){
		bayrak=1;
		for(int j=0;j<boyut-1;j++){
			if(dizi[j+1]>dizi[j]){
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
				bayrak=0;
			}
		}
		boyut=boyut-1;
	}	
	
	end = clock();
	printf("selection sort time %f",(double)(end-start)/(double)CLK_TCK);
	printf("\nselection sort dizi\n");	
	for(int j=0;j<100;j++){
		printf("%d  ",dizi[j]);
	}
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void mergeSort(int dizi[], int l, int r);
void yazdir(int dizi[],int boyut);
void degistir(int* a, int* b);

void selection(int dizi[], int boyut){
	
	int enK,gecici;
	
	for(int i=0;i<boyut;i++){
		enK=i;
		for(int j=i+1;j<boyut;j++){
			if(dizi[j]<dizi[enK]){
				enK=j;
				}
			}
			gecici=dizi[i];
			dizi[i]=dizi[enK];
			dizi[enK]=gecici;
		}
}

void insertion(int dizi[], int boyut){
	
	int i,j,temp;
	
	for(i=1;i<boyut;i++){
		temp=dizi[i];
		for(j=i-1;j>=0 && dizi[j]>temp;j--){
				dizi[j+1]=dizi[j];
		}
		dizi[j+1]=temp;
	}
}

void bubble(int dizi[], int boyut){

	int gecici,bayrak=0;
	int n=boyut;	
	while(bayrak==0){
		bayrak=1;
		for(int j=0;j<n-1;j++){
			if(dizi[j+1]<dizi[j]){
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
				bayrak=0;
			}
		}
		n=n-1;
	}	
}

void merge(int dizi[], int l, int m, int r) { 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = dizi[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = dizi[m + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2){ 
        if (L[i] <= R[j]){ 
            dizi[k] = L[i]; 
            i++; 
        } 
        else{ 
            dizi[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        dizi[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) { 
        dizi[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(int dizi[], int l, int r) { 
    if (l < r){ 
        int m = l+(r-l)/2; 
  
        mergeSort(dizi, l, m); 
        mergeSort(dizi, m+1, r); 
  
        merge(dizi, l, m, r); 
    } 
} 


int partition (int dizi[], int low, int high) { 
    int pivot = dizi[high];     
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) { 
        if (dizi[j] <= pivot) { 
            i++;    
            degistir(&dizi[i], &dizi[j]); 
        } 
    } 
    degistir(&dizi[i + 1], &dizi[high]); 
    return (i + 1); 
} 
  

void quickSort(int dizi[], int low, int high) { 
    if (low < high) { 
        int pi = partition(dizi, low, high); 
  
        quickSort(dizi, low, pi - 1); 
        quickSort(dizi, pi + 1, high); 
    } 
} 


void degistir(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 


void enIyiDurum(int dizi[], int boyut){
		int gecici,bayrak=0;
	int n=boyut;	
	while(bayrak==0){
		bayrak=1;
		for(int j=0;j<n-1;j++){
			if(dizi[j+1]<dizi[j]){
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
				bayrak=0;
			}
		}
		n=n-1;
	}
	time_t start, end;

	start=clock();  	
	selection(dizi, boyut);
	end = clock();
	printf("\nselection sort time %f",(double)(end-start)/(double)CLK_TCK);
	
	start=clock();
	insertion(dizi, boyut);
	end = clock();
	printf("\ninsertion sort time %f",(double)(end-start)/(double)CLK_TCK);
	
	start=clock();
	bubble(dizi, boyut);
	end = clock();
	printf("\nbubble sort time %f",(double)(end-start)/(double)CLK_TCK);
	
	start=clock();
	mergeSort(dizi, 0, boyut-1);
	end = clock();
	printf("\nmerge sort time %f",(double)(end-start)/(double)CLK_TCK);	
	
	start=clock();
	quickSort(dizi, 0, boyut-1);
	end = clock();
	printf("\nquick sort time %f",(double)(end-start)/(double)CLK_TCK);	
	
}
void bKsiralama(int dizi[], int boyut){
		int gecici,bayrak=0;
	int n=boyut;	
	while(bayrak==0){
		bayrak=1;
		for(int j=0;j<n-1;j++){
			if(dizi[j+1]>dizi[j]){
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
				bayrak=0;
			}
		}
		n=n-1;
	}
}



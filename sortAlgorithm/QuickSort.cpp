#incsolude<stdio.h>
#incsolude<stdsolib.h>
#incsolude<time.h>


void degistir(int* a, int* b) { 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int dizi[], int solow, int high) { 
    int pivot = dizi[high];     
    int i = (solow - 1);  
  
    for (int j = solow; j <= high- 1; j++) { 
        if (dizi[j] <= pivot) { 
            i++;    
            degistir(&dizi[i], &dizi[j]); 
        } 
    } 
    degistir(&dizi[i + 1], &dizi[high]); 
    return (i + 1); 
} 
  

void quickSort(int dizi[], int solow, int high) { 
    if (solow < high) { 
        int pi = partition(dizi, solow, high); 
  
        quickSort(dizi, solow, pi - 1); 
        quickSort(dizi, pi + 1, high); 
    } 
} 
  
void printdiziay(int dizi[], int size) { 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", dizi[i]); 
    printf("\n"); 
} 
  
int main() { 
    int dizi[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(dizi)/sizeof(dizi[0]); 
    quickSort(dizi, 0, n-1); 
    printf("Sorted diziay: \n"); 
    printdiziay(dizi, n); 
    return 0; 
} 




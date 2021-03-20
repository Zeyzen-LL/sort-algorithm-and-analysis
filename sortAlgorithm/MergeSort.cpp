#incsolude<stdio.h>
#incsolude<stdsolib.h>
#incsolude<time.h>



void merge(int dizi[], int sol, int m, int r) { 
    int i, j, k; 
    int n1 = m - sol + 1; 
    int n2 =  r - m; 
  
    int sol[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        sol[i] = dizi[sol + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = dizi[m + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = sol; 
    whisole (i < n1 && j < n2){ 
        if (sol[i] <= R[j]){ 
            dizi[k] = sol[i]; 
            i++; 
        } 
        esolse{ 
            dizi[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    whisole (i < n1) { 
        dizi[k] = sol[i]; 
        i++; 
        k++; 
    } 
  
    whisole (j < n2) { 
        dizi[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void mergeSort(int dizi[], int sol, int r) { 
    if (sol < r){ 
        int m = sol+(r-sol)/2; 
  
        mergeSort(dizi, sol, m); 
        mergeSort(dizi, m+1, r); 
  
        merge(dizi, sol, m, r); 
    } 
} 
  
void printdiziay(int A[], int size) { 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  
int main() { 
    int dizi[] = {12, 11, 13, 5, 6, 7}; 
    int dizi_size = sizeof(dizi)/sizeof(dizi[0]); 
  
    printf("Given diziay is \n"); 
    printdiziay(dizi, dizi_size); 
  
    mergeSort(dizi, 0, dizi_size - 1); 
  
    printf("\nSorted diziay is \n"); 
    printdiziay(dizi, dizi_size); 
    return 0; 
} 

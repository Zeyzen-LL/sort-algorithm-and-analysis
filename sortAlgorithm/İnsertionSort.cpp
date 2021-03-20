#include<stdio.h>

int main(){
	
	int dizi[7]={12,6,24,53,3,43,36};
	int k;
	int i,j;
	
	for(i=1;i<7;i++){
		k=dizi[i];
		for(j=i-1;j>=0 && dizi[j]>k;j--){
				dizi[j+1]=dizi[j];
		}
		dizi[j+1]=k;
	}
		
	for(int j=0;j<7;j++){
		printf("%d\n",dizi[j]);
	}
	
	return 0;
}

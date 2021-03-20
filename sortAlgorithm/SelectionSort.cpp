#include<stdio.h>

int main(){
	
	int dizi[7]={12,6,24,53,3,43,36};
	int enK,gecici;
	
	for(int i=0;i<7;i++){
		enK=i;
		for(int j=i+1;j<7;j++){
			if(dizi[j]<=dizi[enK]){
				enK=j;
				}
			}
			gecici=dizi[i];
			dizi[i]=dizi[enK];
			dizi[enK]=gecici;
		}
	
	for(int j=0;j<7;j++){
		printf("%d\n",dizi[j]);
	}
	
	return 0;
}

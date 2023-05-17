// tinh tong phan tu nguyen cua mang 1 chieu

#include <stdio.h>
#include <math.h>
int main(){
 int n,S=0;
 do {
 printf("Nhap so phan tu cua mang (n>0):");
 scanf("%d",&n);
 }while(n<0 || n>=1000);
 int a[n];
 for(int i=0; i<n; i++){
  printf("a[%d]=", i);
  scanf("%d", &a[i]);
  }
  printf("\nCac phan tu cua mang la:");
  for(int i=0; i<n;i++){
  printf(" %d", a[i]);
  }	
	
	for (int i=0; i<n;i++){
		S=S+ a[i];
		}
	printf("\n Tong cac phan tu cua mang= %d", S);
	
	
	
	
	
	
	
	}
	

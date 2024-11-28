#include<stdio.h>
int main(){
	int n;
	printf("moi nhap so nguyen: ");
	scanf("%d",&n);
	int a[n][n];
	int diem =1;
	printf("ma tran hinh vuong\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=diem++;
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}

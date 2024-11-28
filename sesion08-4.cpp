#include<stdio.h>
int main(){
	int a[2][3] = {
		{1,2,3},
		{5,6,7},
	};
	int max=a[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]>max){
			
				max = a[i][j];
			}
		}
	}
	printf("ptu lon nhat la: %d",max);
	
	
	
	return 0;
}

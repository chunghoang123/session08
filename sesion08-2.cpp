#include<stdio.h>

int main(){
	// khai bao va gan gia tri cho tung phan tu
	// nhap xem co phan tu trong mang ko
	// co thi neu vi tri, ko co thi ko ton tai\
	// buoc 1: khai bao mang va gia triong mang co ko
	int a[]={2,5,9,7,12};
	int size = sizeof(a)/sizeof(a[0]);
	int n, viTri = -1;
	printf(" moi nhap phan tu co trong mang: ");
	scanf("%d",&n);
	for(int i =0;i<size;i++){
		if(a[i]==n){
		viTri = i;
		break;
		}
		
	
	}
	if(viTri != -1){
		printf(" vi tri phan tu trong mang la: %d\n",viTri);
	}else{
		printf(" ptu ko ton tai\n");
	}
	
	
	
	
	return 0;
}

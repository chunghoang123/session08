#include<stdio.h>

int main(){
	// khai bao va gan gia tri cho 1 mang bat ky, tien hanh in ra mang hinh tung phan tu trong mang tu dau den cuoi
	// buoc 1: khai bao bien
	int a[]={1,2,3,4,12};	
	int size = sizeof(a)/sizeof(a[0]);
	// buoc 2: dung vong lap
	for(int i=size-1;i>=0;i--){
		printf("cac phan tu trong mang: %d\n",a[i]);
	} 
	// buoc 3: in ket qua
	// buoc 4: ket thuc chung trinh
	
	return 0;
}

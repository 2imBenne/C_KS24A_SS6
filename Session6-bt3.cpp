#include <stdio.h>

int main(){
	
	int n,pass=123;
	while (n!=pass){
		printf("=========== CHUONG TRINH KIEM TRA MAT KHAU ===========\n"); 
		printf("Moi nhap mat khau co 3 chu so: ") ;
		scanf("%d",&n); 
			if(n!=pass){
			printf("Mat khau sai roi,moi nhap lai\n"); 
		} 
	
	} 
	if(n==pass){
			printf("Mat khau chinh xac\n") ;
		}
	return 0; 
}


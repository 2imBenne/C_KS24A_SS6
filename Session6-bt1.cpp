#include <stdio.h> 

int main(){
	int n1,n2,n3,n4,n5,sum;

	printf("Moi nhap vao so nguyen thu nhat: "); scanf("%d", &n1);	if(n1 % 2 == 0)	n1 = 0;
	printf("Moi nhap vao so nguyen thu hai: ");	scanf("%d", &n2);	if(n2 % 2 == 0)	n2 = 0;
	printf("Moi nhap vao so nguyen thu ba: ");	scanf("%d", &n3);	if(n3 % 2 == 0)	n3 = 0;
	printf("Moi nhap vao so nguyen thu tu: ");	scanf("%d", &n4);	if(n4 % 2 == 0)	n4 = 0;
	printf("Moi nhap vao so nguyen thu nam: ");	scanf("%d", &n5);	if(n5 % 2 == 0)	n5 = 0;
	
	 sum= n1+n2+n3+n4+n5;
	printf("Day la tong tat ca cac so le: %d",sum);
	}
	 


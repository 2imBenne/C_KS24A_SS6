#include <stdio.h>
#include <math.h> 
int main(){
	
	float a,b,c,delta,x1,x2;
	printf("========== CHUONG TRINH GIAI PT BAC HAI ==========\n");
	printf("Moi nhap a: ");	scanf("%f",&a); 
	printf("Moi nhap b: ");	scanf("%f",&b); 
	printf("Moi nhap c: ");	scanf("%f",&c); 
	printf("PT bac hai co dang nhu sau: %.fx^2 + %.fx + %.f ",a,b,c);
	delta = pow(b,2) - (4 * a * c);
	if(delta < 0) {
		printf("\nPT vo nghiem "); 
	}
		else if(delta == 0){
		x1=x2= -b/(2*a);
		printf("\nPT co nghiem kep x1 = x2 = %.2f ",x1); 
	} 
	else{
		x1= (-b-sqrt(delta))/(2*a);
		x2 = (-b + sqrt(delta))/(2*a);
		printf("\nPT co hai nghiem phan biet x1 = %.2f va x2 = %.2f ",x1,x2) ;
	}	
} 

#include <stdio.h>
#include <math.h>

int main(){
	printf("Tat ca so Armstrong trong hang tram la: ");
	for(int i=100;i<1000;i++){
		int sum = pow((i/100),3) + pow((i/10)%10,3) + pow(i%10,3);
		if(sum == i){
		printf("%d ",sum);
	}
	}
	return 0; 
}

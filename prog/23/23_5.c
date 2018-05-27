#include<stdio.h>



int fact(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}



int main(){
	int n = 0, N, Val;
	while(n == 0){

		printf("Enter a number from 0 to 15: ");
		scanf("%d", &N);
		if(N<=15 && N != 0){
			Val = fact(N);
			printf("%d\n", Val);
			n = 1;
		}

		else
			n = 0;
	}	
	

}
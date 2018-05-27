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
	int n = 0, N, Val=0;
	while(n == 0){

		printf("Enter a number from 0 to 15: ");
		scanf("%d", &N);
		if(N<=15 && N != 0){
			for(int i = 1; i<=N; i++){
				Val += fact(i);
			}				
		}
		printf("%d\n", Val);
		Val = 0;
	}	
	

}
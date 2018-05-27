#include <stdio.h>


int NOD(int a, int b, int D){
	if(a%D == 0 && b%D == 0){
		return D;
	}
	else{
		D--;
		return NOD(a,b, D);
	}
}

int min(int a, int b){
	if(a<b)
		return a;
	else return b;
}

int main(){
	int a, b, result;
	printf("Enter A :");
	scanf("%d", &a);
	printf("Enter B :");
	scanf("%d", &b);
	
	int D = min(a,b);
	if(a != 0 && a != 0){
		result = NOD(a, b, D);
	}
	printf("%d\n", result);
	return 0;
}
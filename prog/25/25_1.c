#include <stdio.h>


int sum(int **a, int n){
	int sum = 0, i, j;
	for(i = 0; i<n; i++){
		for(j = 0; j<n; j++){
			if(i==j){
				sum += a[i][j];
			}
		}
	}
	return sum;
}

int main(){
	int n = 3;
	int i, **a, j, result;
	printf("hello\n");
	for(i = 0; i<n; i++){
		printf("Vvedite stroky: ");
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	result = sum(a, n);

	printf("summa = %d\n", result);
}



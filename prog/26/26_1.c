#include <stdio.h>


void swap(int *a, int *b){
	int c;
	c = *a; *a = *b; *b = c; 
}


int max(int **a, int m, int n){
	int max = a[0][0];
	int b[1];
	int *pB;

	for(int i=0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(a[i][j]>max){
				*pB = a[i][j];
			}
		}

	}
	return *pB;
}


int main(int argc, char const *argv[])
{
	int n = 3, m = 3;
	int a[m][n], i, j, *maxi;

	for(i=0; i<m; i++){
		for(j = 0; j<n; j++){
			printf("a[%d][%d]\n", i, j); scanf("%d", &a[i][j]);
		}
	}

	*maxi = max(a, m, n);


	return 0;
}
#include <stdio.h>


double srZnach(int arr[], int n, int index)
{
	double srZn = 1;
	double sum = 0.0, count = 0.0;
	for (int i = index; i < n; i++){
		sum += arr[i];
		count++;
	}
	if(count == n){
		return 0;
	}
	else return srZn = sum/count; 
}

//-------------------------------

int finder(int arr[], int n){
	int index;
	for (int i = 0; i < n; i++){
		if(arr[i]<0){
			index = ++i;
			return index;
		}
		else return 0;
	}
}

// ------------------------------

int main()
{
	const int n = 5;
	int i, a[n];
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);scanf("%d", &a[i]);
	}
	if(srZnach(a,n,finder(a, n)))
		printf("srednee znachenie = %lf\n", srZnach(a, n, finder(a, n)));
	else
		printf("net znachenii\n");
}
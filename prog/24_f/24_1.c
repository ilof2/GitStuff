#include <stdio.h>


void show_array(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\n", arr[i]);
	}
}


void swap(int arr[], int a, int b, int n){
	int none;
	none = arr[a]; arr[a] = arr[b]; arr[b] = none;
	show_array(arr, n);
}




int main()
{
	const int n = 5;
	int i, A, B, a[n];
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);scanf("%d", &a[i]);
	}
	printf("Enter a index A: ");scanf("%d", &A);
	printf("Enter a index B: ");scanf("%d", &B);
	swap(a, A, B, n);
}
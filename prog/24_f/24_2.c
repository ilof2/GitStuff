#include <stdio.h>
#include <math.h>


float srZnach(int arr[], int n)
{
	double srZn = 1;
	int sum = 0, count = 0;
	for (int i = 0; i < n; i++){
		sum += arr[i];
		count++;
	}
		return srZn = sum/count; 
}

//-------------------------------

int closeNumber(int arr[], int n)
{
	int srZn, result, min=999;
	int index=0;
	srZn = srZnach(arr, n);
	for (int i = 0; i < n; i++){
		if(fabs(srZn) < fabs(arr[i]))
			result = fabs(arr[i])-fabs(srZn);
		else
			result = fabs(srZn) - fabs(arr[i]);

		if(result<min && result != 0){
			min = result;
			index = i;
			// printf("%d\n", result);
		}
		result = 0;
	}
	return arr[index];
}

// ------------------------------

int main()
{
	const int n = 5;
	int i, a[n];
	for(i=0; i<n; i++){
		printf("a[%d] = ", i);scanf("%d", &a[i]);
	}
	printf("srednee znachenie = %f\n", srZnach(a, n));
	printf("Blizkaya cifra = %d\n", closeNumber(a, n));
}
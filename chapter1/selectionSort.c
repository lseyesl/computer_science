#include <stdio.h>

#define MAX 100
int A[MAX];
void SelectionSort(int A[], int n);
int main()
{
	int i,n;
	for(n=0; n<MAX && scanf("%d",&A[n]) != EOF; n++);
	SelectionSort(A,n);
	for(i =0; i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	return 0;
}
void SelectionSort(int A[], int n)
{
	int i,j,small,temp;
	for(i=0; i<n-1; i++)
	{
		small = i;
		for(j = i+1; j <n; j++)
		{
			if(A[j] < A[small])
			{
				small = j;
			}
		}
		temp = A[small];
		A[small] = A[i];
		A[i] = temp;
	}
}
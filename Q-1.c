#include<stdio.h>

/*
Q.1 Write a Program to find all the negative elements from a given 1D array.


Input:
Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5

Output:
Negative elements from an Array: -4, -3, -5

*/

void main(){
	int n;

	
	printf("Enter Array size");
	scanf("%d",&n);
	
		int a[n];
		int i;
		
		
	for(i=0; i<n; i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	
	
		printf(" nagative elements from array is:");

	for(i=0; i<n; i++){
		if(a[i]<0){
			printf("%d",a[i]);
		}
	}
	
	
	
}

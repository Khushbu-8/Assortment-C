#include<stdio.h>

/*
Q.2 Write a Program to find the largest element from a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Output:/
Output:
The largest element is: 9

*/

void main(){
	int i,j,row,column;
	int a[row][column], c[row][column];

	
	printf("Enter Arrays row :");
	scanf("%d",&row);
	
	printf("Enter Arrays column :");
	scanf("%d",&column);
	
	
	printf("Enter arrys Eliment: \n");
		
		
		
	for(i=0; i<row; i++){
		for(j=0;j<column;j++){
		
		printf(" a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);
		
}
	}
	
		printf(" largest is %d :\n");

	for(i=0; i<row;i++){
		for(j=0;j<column;j++){
		printf("%d ",c[i][j]);
	}
	printf("\n");
	}
	

	
	

	
	   
	
	
	
	
	
}

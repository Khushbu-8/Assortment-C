
#include<stdio.h>
/*
Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

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

Output:
Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10

Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11

*/

main()
{
	int i,j;
	int row,column,large;
	int a[row][column];
	
	printf("enter the row size:");
	scanf("%d",&row);
	
	printf("enter the column size:");
	scanf("%d",&column);
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){

			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int x,y;
	int add=0;
	
	printf("\n enter column number:");
	scanf("%d",&y);
	
	printf("\n elements of column:");
	
   	for(i=0;i<row;i++){
   		
		printf("%d ",a[i][y]);
		add+=a[i][y];
		
		}
	printf("\n the sum of a column is:%d",add);


	int sum=0;
	
	printf("\nenter row number:");
	scanf("%d",&x);
	
	printf("\nelements of row:");
	
   	for(j=0;j<column;j++){
   		
		printf("%d ",a[x][j]);
		sum+=a[x][j];
			
		}
		
	printf("\nthe sum of a row is:%d",sum);
}



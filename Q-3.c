#include<stdio.h>

/*

Q.3 Write a Program to find the transpose matrix of a given 2D array.
For example,
Input:
Enter the array's row & column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6


*/

 

void main()

{

     int a[10][10], b[10][10], r, c, i, j;

      

   	printf("enter the row size:");
	scanf("%d",&r);
	
	printf("enter the column size:");
	scanf("%d",&c);

     printf("\nEnter elements of 2-D array:\n");

     for(i=0; i<r; i++)

     {

              for(j=0; j<c; j++)

              {

                    	printf("Enter a[%d][%d]:",i,j);
		             	scanf("%d",&a[i][j]);
              }

     }
      
    
     for(i=0; i<r; i++)

     {
              for(j=0; j<c; j++)

              {

                       b[j][i] = a[i][j];

              }
     }

      

     printf(" Transposing Array:\n\n");

     for(i=0; i<r; i++)

     {

              for(j=0; j<c; j++)

              {

                       printf("\t%d", b[i][j]);

              }

              printf("\n");

     }

   

}


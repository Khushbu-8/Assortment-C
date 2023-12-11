#include<stdio.h>

 

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


/*
Q.1 Write a Program to find the average of a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

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

Output:/
Average of an Array: 3.88
*/
#include<stdio.h>

void main(){
	
	
	int a[1000][1000];
	int r,c,i,j,sum=0,avg;

	printf("enter row count :");
	scanf("%d",&r);
	printf("enter column count :");
	scanf("%d",&c);

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter value [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n");
	for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				printf(" %d",a[i][j]);
				sum += a[i][j];

		}
		printf("\n");
			}
		printf("\n sum = %d",sum/r*c);

}


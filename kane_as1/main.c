#include "matrix.h"

//main
int main()
{
	int *arr_A = NULL;
	int *arr_B = NULL;
	
	int row_A , col_A ;
	int row_B , col_B ;
	
	/*loop variable */
	int i; 
	
	/*Matrix A -- Input row and col*/
	printf("-----Input the information of Matrix A-----\n");
	printf("Row of matrix A : ");
	scanf("%d",&row_A );
	printf("Col of matrix A : ");
	scanf("%d",&col_A );
	
	/* dyamic allocation for matrix A */
	arr_A = (int*)malloc( row_A*col_A*sizeof(int) );
	
	
	Matrix_Input(arr_A , row_A , col_A );
	
	/*Matrix B -- Input row and col*/
	printf("-----Input the information of Matrix B-----\n");
	printf("Row of matrix B : ");
	scanf("%d",&row_B );
	printf("Col of matrix B : ");
	scanf("%d",&col_B );
	
	/* dyamic allocation for matrix B */
	arr_B = (int*)malloc( row_B*col_B*sizeof(int) );
	
	Matrix_Input(arr_B , row_B , col_B );
	 
	show_Output(arr_A , arr_B, row_A, col_A, row_B, col_B);
	
	/* Free Matrix A and Matrix B */
	free( arr_A );
	free( arr_B );
	
	return 0;
}

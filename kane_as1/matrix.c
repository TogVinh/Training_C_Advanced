#include "matrix.h"


/*FUNCTION=================================================================
*  Funtion Name : Matrix_Input
*  Description  : Input the element of matrix
==========================================================================*/
void Matrix_Input (int *a, int row , int col)
{
	/*loop variable */
	int i ,j;
	for( i = 0; i < row ; i ++ )
	{
		for ( j = 0; j < col ; j++ )
		{
			printf("a[%d][%d] =  ", i, j);
			scanf("%d", (a + i*row + j) );
		}
	}
}

/*FUNCTION=================================================================
*  Funtion Name : Matrix_Print
*  Description  : Print the matrix to the terminal
==========================================================================*/
void Matrix_Print ( int *a, int row , int col )
{
	/*loop variable */
	int i , j; 
	for (i = 0; i < row ; i++)
	{
		for ( j = 0 ; j < col ; j++ )
		{
			printf("%d   ", *(a + i*row + j) );
		}
		printf("\n");
	}
}

/*FUNCTION=================================================================
*  Funtion Name : Sum
*  Description  : Calculate the sumation/addition of two matrices
==========================================================================*/
void Sum (int *a, int *b, int row, int col)
{
    /*array to contain Sum of maxtries */
	int *arr_S = NULL;

	/*loop variable */
	int i , j;
	
	arr_S = (int*)malloc( row*col*sizeof(int) );
	
    for (i = 0; i < row ; i++)
    {
        for ( j = 0; j < col ; j++)
        {
            *(arr_S + i*row + j) = *(a + i*row + j) + *(b + i*row + j);
        }
    }
    
    Matrix_Print ( arr_S,row ,col );
    
    free(arr_S);
}

/*FUNCTION================================================================
*  Funtion Name : mul
*  Description  : Calculate the Multiple of two matrices
=========================================================================*/
void Mul (int *a, int *b, int row , int col , int general)
{
	/*array to contain Multiple of maxtries */
	int *arr_M = NULL;
	/*loop variable */
	int i , j, k;
	
	
	arr_M = (int*)malloc( row*col*sizeof(int) );
	
	for (i = 0; i < row ; i++)
	{
		for( j = 0 ; j < col ; j++ )
		{
			//value of one element in Multi matrix
			int Matrix_Element = 0 ;
			
			for (k =0 ; k < general ; k++)
			{
				Matrix_Element = Matrix_Element + *(a + i*row + k) * *(b + k*row + j);
			}
			
			// element in row i col j of arr_M
			*(arr_M + i*row + j) = Matrix_Element ;
		}
	}
	
	
	Matrix_Print ( arr_M, row , col );
	
	free( arr_M );
}

/*FUNCTION===============================================================
*  Funtion Name : check_Sum
*  Description  : check the addition condition of two matrices
*  return true/false
========================================================================*/
bool check_Sum( int row_A, int col_A, int row_B, int col_B )
{
	if ( (row_A == row_B) && (col_A == col_B) )
	{
		printf("\n matrix A and Matrix B can add together \n");
		return 1;
	}
	else
	{
		printf("\n matrix A and Matrix B can not add together \n");
		return 0;
	}
}

/*FUNCTION===============================================================
*  Funtion Name : check_AB
*  Description  : check the multiplication condition of Matrix A and B
*  return true/false
========================================================================*/
bool check_AB (int col_A, int row_B )
{
	if (col_A == row_B)
	{
		printf("Matrix A and Matrix B can multi together \n");
		return 1;
	}
	
	else
	{
		printf("Matrix A and matriX B can not multi together \n");
		return 0;
	}
}

/*FUNCTION===============================================================
*  Funtion Name : check_AB
*  Description  : check the multiplication condition of Matrix B and A
*  return true/false
========================================================================*/
bool check_BA (int row_A, int col_B)
{
	if ( row_A == col_B )
	{
		printf("Matrix B and Matrix A can multi together \n");
		return 1;
	}
	else
	{
		printf("Matrix B and Matrix A can not multi together \n ");
		return 0;
	}
}


/*======================================================================
*  Funtion Name : show_Output
*  Description  : check and show output of program
========================================================================*/
void show_Output(int *arr_A , int *arr_B, int row_A, int col_A, int row_B, int col_B)
{
	bool A_or_B , A_mul_B , B_mul_A ;
	
	/*check each calculation condition*/
	A_or_B  = check_Sum(row_A , col_A, row_B, col_B );
	A_mul_B = check_AB (col_A , row_B );
	B_mul_A = check_BA (row_A , col_B);
	
		
	/*Print the result*/
	printf("\n----- Matrix A : -----\n");
	Matrix_Print(arr_A , row_A , col_A );
	
	printf("\n----- Matrix B -----\n");
	Matrix_Print(arr_B , row_B , col_B );
	
	printf("\nMatrix A + Matrix B:\n");
	if ( A_or_B == 1 )
		Sum ( arr_A, arr_B, row_A, col_B);
	else
		printf("N/A\n");
		
	printf("\nMatrix A * Matrix B:\n");
	if ( A_mul_B == 1 )
		Mul (arr_A , arr_B, row_A , col_B , col_A );
	else
		printf("N/A\n");
	
	printf("\nMatrix B * Matrix A:\n");
	if ( B_mul_A == 1 )
		Mul (arr_B , arr_A, row_B , col_A , col_B );
	else
		printf("N/A\n");
}

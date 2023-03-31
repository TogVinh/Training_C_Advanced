#include "array.h"


/*Input the elements of array*/
/*FUNCTION=================================================================
*  Funtion Name : Input
*  Description  : Input the element of array
==========================================================================*/
void Input(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Input a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

/*printf Array*/
/*FUNCTION=================================================================
*  Funtion Name : Output_Array
*  Description  : Print the array
==========================================================================*/
void Output_Array(int a[], int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d  ", a[i]);
	}
}

/* Calculator the average of Array */
/*FUNCTION=================================================================
*  Funtion Name : Cal_Average
*  Description  : Calculator the average of array
==========================================================================*/
void Cal_Average(int a[], int n, float *avrg)
{
	int count;
	int sum = 0;
	float avr = 0; /* Calculator the average of Array */

	int i;
	for (count = 0; count < n; count++)
	{
		sum += a[count];
	}
	*avrg = sum / count;
}

/* find the the numbers of element less than average */
/*FUNCTION=================================================================
*  Funtion Name : Less_Aveg
*  Description  : count the number of elemrnt lower than 
*                 the average of array
==========================================================================*/
void Less_Aveg(int a[], int n, float *avrg, float *L)
{
	int i;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] < *avrg)
		{
			count++;
		}
	}

	*L = count;
}

/*Search the value in the Array*/
/*FUNCTION=================================================================
*  Funtion Name : Search
*  Description  : find the value and position of number in array
==========================================================================*/
void Search(int a[], int n, int num)
{
	int i;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == num)
		{
			printf("a[%d] = %d  \n", i, a[i]);
			count++;
		}
	}/* Calculator the average of Array */

	if (count == 0)/* Calculator the average of Array */
		printf("Don't have this element in Array \n");
}


/*FUNCTION=================================================================
*  Funtion Name : odd_Element
*  Description  : move all odd element to the left of array
==========================================================================*/
void odd_Element(int a[], int n)
{
	int i , j; 
	int temp;
	for (i =0; i < n; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if ((a[i] % 2 == 0) && (a[j] % 2 != 0))
			{

				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	Output_Array(a, n);
}

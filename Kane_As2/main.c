#include "array.h"

int main()
{

	int N;		// Elements of Array
	float avrg; // Average of Array
	float L;	// The number of all elements less than avrg
	int P;		// The number want to find array

	printf("Input the element of Array : ");
	scanf("%d", &N);

	int arr[N];
	printf("\n Starting input Array\n");

	Input(arr, N);

	printf("Array : \n");
	printf("\t");
	Output_Array(arr, N);
	printf("\n--------------------------");

	/*Average of all element in array*/
	avrg = Cal_Average(arr, N);
	printf("\nThe Average of Array is : %.2f", avrg);

	/*the numbers of element less than average*/
	L = Less_Aveg(arr, N);
	printf("\nThe numbers of all element less than average  : %.2f\n", L);

	/*find value in Array*/
	printf("\nInput the value of element to find : ");
	scanf("%d", &P);

	Search(arr, N, P);

	/*Array before calling function to odd value to the left */
	printf("\nmove all the even value to the left of array");
	printf("\nArray Befor : ");
	Output_Array(arr, N);

	/*Array after calling function to odd value to the left */
	printf("\nArray after : ");
	odd_Element(arr, N);
	printf("\n");
	
	return 0;
}

#ifndef _array_H_
#define _array_H_
/*======================================================================
*  include the Library
========================================================================*/
#include <stdio.h>
#include <stdlib.h>

/*!
* @brief <Create an input the element of array>
*
* @param  a[In] <the parameter of the array>
*
* @param  n[In] <the numbers of elemnt of array>
*
*return None
*/
void Input(int a[], int n);


/*!
* @brief <Print the Output of the element of array>
*
* @param  a[Out] <the parameter of the array>
*
* @param n[In] <the numbers of elemnt of array>
*
*return None
*/
void Output_Array(int a[], int n);


/*!
* @brief <calculate the average all element of array>
*
* @param  a[In] <the parameter of the array>
*
* @param n[In] <the numbers of elemnt of array>
*
* return <average variable>
*/
float Cal_Average(int a[], int n);


/*!
* @brief <count the number of elemrnt lower than the average of array>
*
* @param  a[In] <the parameter of the array>
*
* @param n[In] <the numbers of elemnt of array>
*
*<the numbers of element less than average>
*/
int Less_Aveg(int a[], int n);

/*!
* @brief <find the value and position of number in array>
*
* @param  a[In] <the parameter of the array>
*
* @param n[In] <the numbers of elemnt of array>
*
* @param num <the number want to find in array>
*
*return None
*/
void Search(int a[], int n, int num);

/*!
* @brief <move all odd element to the left of array>
*
* @param  a[In] <the parameter of the array>
*
* @param n[In] <the numbers of elemnt of array>
*
*return None
*/
void odd_Element(int a[], int n);

#endif
/*** end of file ***/
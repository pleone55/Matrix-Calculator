/**************************************************************************************
 * * Program Name: determinant.cpp
 * * Author: Paul Leone
 * * Date: 4/6/2019
 * * Description: This is the .cpp file for the int determinant() function that has
 * *		  two parameters, a 2D array and the size of the array. The function
 * *		  takes the values inside the 2D array and calculates the determinant.
 * ************************************************************************************/

#include "determinant.hpp"
#include <iostream>
using namespace std;

int determinant(int **matrix, int size)
{
	int determinant;

	//Calculate if the user chose a 2x2 matrix or 3x3 matrix using
	//the determinant formula
	if(size == 2)
	{
		determinant = (matrix[0][0] * matrix[1][1]) - 
				(matrix[0][1] * matrix[1][0]);
	}
	else 
	{
		determinant = (matrix[0][0] * ((matrix[1][1] * matrix[2][2]) -
				(matrix[1][2] * matrix[2][1]))) - (matrix[0][1] *
				((matrix[1][0] * matrix[2][2]) - (matrix[1][2] *
				matrix[2][0]))) + (matrix[0][2] * ((matrix[1][0] *
				matrix[2][1]) - (matrix[1][1] * matrix[2][0])));
	}
	return determinant;
}	

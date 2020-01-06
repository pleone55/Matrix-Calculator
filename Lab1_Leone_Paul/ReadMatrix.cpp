/**************************************************************************************
 * * Program Name: ReadMatrix.cpp
 * * Author: Paul Leone
 * * Date: 4/6/2019
 * * Description: This is the .cpp file for the readMatrix() function that takes two
 * *		  parameters, a 2D array and the size of the array. The function
 * *		  dynamically allocates the array and prompts the user for all the
 * *		  numbers within the matrix.
 * ************************************************************************************/

#include "ReadMatrix.hpp"
#include <iostream>
using namespace std;

void readMatrix(int **matrix, int size)
{
	int i, j;

	//use loop to prompt user to input values 
	//of the array depending on matrix size
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			cout << "Input values of the matrix row " << i + 1
				<< " column " << j + 1 << ":\t"; 
			cin >> matrix[i][j];
		}
		cout << "\n";
	}
}

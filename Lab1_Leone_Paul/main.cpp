/**************************************************************************************
 * * Program Name: main.cpp
 * * Author: Paul Leone
 * * Date: 6/27/2019
 * * Description: This is the main function that asks the user the size of the matrix.
 * *		  Calls the readMatrix() and determinant() functions to dynamically
 * *		  allocate the memory space of the matrix and calculate its determinant
 * ************************************************************************************/

#include <iostream>
#include "ReadMatrix.hpp"
#include "determinant.hpp"
using namespace std;

int main()
{
	//Prompt user to choose size of matrix using switch statement
	char choice;
	cout << "Please choose A or B for the size of the matrix.\n";
	cout << "\n";
	cout << "Choice A: 2x2 matrix.\n";
	cout << "Choice B: 3x3 matrix.\n";
	cout << "\n";
	cin >> choice;
	cout << "\n";

	//Use switch statements to determine user choice
	switch(choice)
	{
		case 'A':cout << "2x2 matrix was chosen\n";
			break;
		case 'a':cout << "2x2 matrix was chosen\n";
			break;
		case 'B':cout << "3x3 matrix was chosen\n";
			break;
		case 'b':cout << "3x3 matrix was chosen\n";
			break;
	}
	cout << "\n";

	//Validate size of matrix from user choice
	int size;

	if(choice == 'A' || choice == 'a')
	{
		size = 2;
	}
	if(choice == 'B' || choice == 'b')
	{
		size = 3;
	}

	//Dynamically allocate memory space for the matrix
	int **matrix = new int*[size];
	for(int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}

	//set up matrix from user input by calling readMatrix() function
	readMatrix(matrix, size);

	//Call determinant function to calculate and display determinant
	//of the matrix
	cout << "Determinant: " << determinant(matrix, size) << endl;

	//Display the matrix 
	for(int row = 0; row < size; row++)
	{
		for(int col = 0; col < size; col++)
		{
			cout << matrix[row][col] << "\t";
		}
		cout << "\n";
	}

	//Free the dynamically allocated array
	for(int i = 0; i < size; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
} 

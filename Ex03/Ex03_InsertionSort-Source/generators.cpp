#include "generators.h"
#include <bits/stdc++.h>

using namespace std;

// Generate arrays of random integers
// Usage: <number_of_arrays> <size_of_array> <output_file>
// Example: 1000 1000 data.txt
int genRandomIntArray(int nArray, int arrSize, char* fileName)
{	
	srand(time(NULL));
	ofstream outFile(fileName);
	if (!outFile.is_open())
	{
		cout << "genIntArray: Error opening output file.";
		return 0;
	}
	
	for (int i = 0; i < nArray - 1; i++)
	{
		for (int j = 0; j < arrSize - 1; j++)
		{
			outFile << rand() << ' ';
		}
		outFile << rand() << endl;
	}
	

	
	for (int j = 0; j < arrSize - 1; j++)
	{
		outFile << rand() << ' ';
	}
	outFile << rand();

	outFile.close();

	return 1;
}


int genOrderedIntArray(int nArray, int arrSize, char* fileName, bool increase){
	srand(time(NULL));

	ofstream outFile(fileName);
	if (!outFile.is_open())
	{
		cout << "genIntArray: Error opening output file.";
		return 0;
	}

	
	for (int i = 0; i < nArray - 1; i++)
	{
		vector<int> arr;
		
		for (int j = 0; j < arrSize; j++)
		{
			arr.push_back(rand());
		}

		if (increase){
			sort(arr.begin(), arr.end());
		}
		else{
			sort(arr.begin(), arr.end(), greater<int>());
		}

		for (int j = 0; j < arrSize - 1; j++)
		{
			outFile << arr[j]  << ' ';
		}
		outFile << arr[arrSize - 1] << endl;

		arr.resize(0);
	}

	vector<int> arr;
	for (int j = 0; j < arrSize; j++)
	{
		arr.push_back(rand());
	}

	if (increase){
		sort(arr.begin(), arr.end());
	}
	else{
		sort(arr.begin(), arr.end(), greater<int>());
	}

	for (int j = 0; j < arrSize - 1; j++)
	{
		outFile << arr[j] << ' ';
	}
	outFile << arr[arrSize - 1];


	outFile.close();
	return 1;
}
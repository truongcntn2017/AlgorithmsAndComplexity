#include "algorithms.h"

void insertion_sort(vector<int>& arr, int& countAssign, int& countCompare)
{
	int i, j, key, numLength;

	numLength = arr.size(); countAssign++;

	for(j = 1, countAssign++; ++countCompare && j < numLength; j = j + 1, countAssign++)
	{
		key = arr[j];
		countAssign++;
		
		for(i = j - 1, countAssign++; 
			(++countCompare && i >= 0) && (++countCompare && arr[i] < key);
			i = i - 1, countAssign++)
		{
			arr[i+1] = arr[i]; countAssign++;
		}

		arr[i+1] = key;	countAssign++;
	}
}

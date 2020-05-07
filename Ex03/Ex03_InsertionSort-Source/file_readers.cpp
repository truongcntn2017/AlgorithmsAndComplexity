#include "file_readers.h"
#include <iostream>

using namespace std;


vector<int> readIntArray(istream& inStream)
{
	vector<int> data;
	string s;
	getline(inStream, s);
	
	istringstream iss(s);
	
	int temp;

	while (iss.good())
	{
		iss >> temp;
		data.push_back(temp);
	}

	return data;
}

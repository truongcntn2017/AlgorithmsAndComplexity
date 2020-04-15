#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int FibonacciRecursive(int n, int& countAssign, int& countCompare){
    ++countCompare;
    if (n <= 1){
        return 1;
    }
    else{
        return FibonacciRecursive(n-1, countAssign, countCompare) + FibonacciRecursive(n-2,  countAssign, countCompare);
    }
}

string toString(int a, int b, int c, int d){
    stringstream ss;
    ss<<a<<","<<b<<","<<c<<","<<d<<endl;

    return ss.str();
}

int main(){
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int countAssign;
    int countCompare;

    fstream myfile; 
    // opens an existing csv file or creates a new file. 
    myfile.open("reportcard.csv", ios::out | ios::app); 
    myfile << "n,sum,countAssign,countCompare\n";

    for (int n: arr){
        countCompare = 0;
        countAssign = 0;
        int sum = FibonacciRecursive(n, countAssign, countCompare);
        myfile<<toString(n,sum, countAssign, countCompare);
    }

    myfile.close();
    // cout<<toString(3, 4, 5)<<endl;
    return 0;
}
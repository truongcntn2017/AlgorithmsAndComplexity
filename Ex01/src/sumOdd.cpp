#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int SumOdd(int n, int& countAssign, int& countCompare){
    countAssign = 0;
    countCompare = 0;

    int sum = 0;
    countAssign++;
    int i = 1;
    countAssign++;

    while (++countCompare && i<=n){
        sum += i;
        countAssign++;
        i += 2;
        countAssign++;
    }

    return sum;
}



string toString(int a, int b, int c, int d){
    stringstream ss;
    ss<<a<<","<<b<<","<<c<<","<<d<<endl;

    return ss.str();
}

int main(){
    int arr[11] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int countAssign;
    int countCompare;

    fstream myfile; 
    // opens an existing csv file or creates a new file. 
    myfile.open("reportcard.csv", ios::out | ios::app); 
    myfile << "n,sum,countAssign,countCompare\n";
    for (int n: arr){
        int sum = SumOdd(n, countAssign, countCompare);
        myfile<<toString(n,sum, countAssign, countCompare);
    }

    myfile.close();
    // cout<<toString(3, 4, 5)<<endl;
    return 0;
}
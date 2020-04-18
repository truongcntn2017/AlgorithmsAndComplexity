#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int SomeSum(int n, int& countAssign, int& countCompare){
    int sum = 0, i = 1;
    countAssign += 2;
    int j;

    while (++countCompare && i <= n){
        j = n - i;
        countAssign++;
        while (++countCompare && j < i*i){
            sum = sum + i*j;
            countAssign++;
            j = j+1;
            countAssign++;
        }
        i = i + 1;
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
    int countAssign;
    int countCompare;

    fstream myfile; 
    // opens an existing csv file or creates a new file. 
    myfile.open("reportcard.csv", ios::out | ios::app); 
    myfile << "n,sum,countAssign,countCompare\n";

    for (int n=10; n<=500 ; n +=10){
        countCompare = 0;
        countAssign = 0;
        int sum = SomeSum(n, countAssign, countCompare);
        myfile<<toString(n,sum, countAssign, countCompare);
    }

    myfile.close();
    // cout<<toString(3, 4, 5)<<endl;
    return 0;
}
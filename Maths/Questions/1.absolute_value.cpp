// You are given an interger I, find the absolute value of the interger I.

#include<iostream>
using namespace std;

int absolute(int n){
    if (n < 0)
    {
        return -1 * n;
    }
    else
    {
        return n;
    }
    
    
}

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "The absolute value of " << n << " is " << absolute(n) << endl;
    return 0;
}
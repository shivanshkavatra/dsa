#include<iostream>
using namespace std;

int countdigits(int n){
    int digits = 0;
    while (n > 0)
    {
        n /= 10;
        digits++;
    }
    cout << "The number of digits in the number are: " << digits << endl;
    return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    countdigits(n);
    return 0;
}
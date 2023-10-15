#include<iostream>
using namespace std;

bool checkPalindrome(int n){
    int b = n;
    int p = 0;
    while(n != 0){
        int lastDigit = n%10;
        p = p*10 + lastDigit;
        n /= 10;
    }
    if (b == p)
    {
        return 1;
    }else{
        return 0;
    }
    
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(checkPalindrome(n))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
// Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.
#include<iostream>
using namespace std;

int printDivisors(int n){
    int i , res = 0;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << i << " ";
            res++;
        }
    }

    if (i * i == n)
    {
        res++;
    }
    i--;
    
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            // cout << n/i << " ";
            res++;
        }
        
    }
    return res;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers having exactly 3 divisors before " << n << " are ";
    for (int i = 1; i <= n; i++)
    {
        if (printDivisors(i) == 3)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
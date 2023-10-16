// Given two numbers a and b, find the sum of a and b. Since the sum can be very large, find the sum modulo 10^9+7.
#include<iostream>
using namespace std;

long long sumUnderModulo(long long a,long long b)
    {   
        long long M = 1000000007; 
        //sum modulo with M
        int answer=((a%M)+(b%M))%M;  //this helps in not calculating the sum of two big numbers and bypass the overflow condition.
        return answer;
    }

int main(){
    long long unsigned a , b;
    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the number b: ";
    cin >> b;
    // long long unsigned sum = a + b;
    // long long unsigned sum_under_modulo = (sum % ((int)pow(10 , 9) + 7));
    // cout << sum_under_modulo << endl;

    cout << sumUnderModulo(a , b) << endl;
    return 0;
}
// Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers

#include<iostream>
using namespace std;

int different_bit(int a, int b){
    int count = 1;
    do
    {
        if ((a & 1) != (b & 1))
        {
            return count;
        }
        count++;
        a >>= 1;
        b >>= 1;
    } while (max(a,b) != 0);
    return -1;
}

int main(){
    int a , b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The rightmost different bit in the binary representation of these numbers is: " << different_bit( a , b) << endl;
    return 0;
}
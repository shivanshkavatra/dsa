// You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.
#include<iostream>
using namespace std;

int countBitsFlipped(int a , int b){
    int count = 0;
    do
    {
        if ((a & 1) != (b & 1))
        {
            count++;
        }
        a >>= 1;
        b >>= 1;
    } while (max(a,b) != 0);

    return count;
}

int main(){
    int a , b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The numbers of bit needs to be flipped from a to b are: " << countBitsFlipped(a ,b) << endl;
    return 0;
}
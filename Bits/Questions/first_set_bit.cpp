// Given an integer N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
// Note: If there is no set bit in the integer N, then return 0 from the function.  

#include<iostream>
using namespace std;

// unsigned int getFirstSetBit(int n)
//     {
//         //doing AND operation of n and -n. n and -n will have similar
//         //bits only till the first set bit starting from the right  
//         //and differnt bits after the first set bit.Then we take 
//         //log2 of the result to find the position.
        
//         //we add 1 to obtained value so that count starts from 1 instead of 0.
//         return log2(n&-n)+1; 
//     }



int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 1;
    do{
        if((n & 1) != 0)
            break;
        count++;
        n >>= 1;
    }while(n > 0);

    cout << count << endl;
    return 0;
}
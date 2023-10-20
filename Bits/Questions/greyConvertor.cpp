// How to convert gray code to binary code :
// 1) The Most Significant Bit (MSB) of the gray code is always equal to the MSB of the given binary code.
// 2) Other bits of the output gray code can be obtained by XORing binary code bit at that index and previous index.

#include<iostream>
using namespace std;

int greyConvertor(int n){
    int q = n >> 1;
    return (n ^ q);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The grey code value of the given integer will be: " << greyConvertor(n) << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n , k;
    cout << "Enter a number and the bit you want to check: ";
    cin >> n >> k;
    // int x = 1;
    // for (int i = 0; i < k - 1; i++)
    // {
    //     x = x * 2;
    // }

    int x = (1 << (k - 1));
    if ((n & x) != 0)
    {
        cout << "Bit is set." << endl;
    }
    else
    {
        cout << "Bit is not set." << endl;
    }
    
    // OR

    int n = (n >> (k - 1));
    if ((n & 1) != 0)
    {
        cout << "bit is set." << endl;
    }
    else
    {
        cout << "bit is not set." << endl;
    }
    
    
       
    return 0;
}
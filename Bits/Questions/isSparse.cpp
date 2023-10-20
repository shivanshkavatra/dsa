#include<iostream>
using namespace std;

bool isSparse(int n){
    if ((n & (n << 1)) == 0)
    {
        return 1;
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isSparse(n))
    {
        cout << "The number is Sparse." << endl;
    }
    else
    {
        cout << "The number is not Sparse." << endl;
    }
    
    
    return 0;
}
// check if the given number is power of 2.
#include<iostream>
using namespace std;

bool power_of_2(int n){
    // if (n == 0)
    // {
    //     return 0;
    // }
    return ((n != 0) && ((n & (n - 1)) == 0));
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin  >> n;
    cout << power_of_2(n) << endl;
    return 0;
}
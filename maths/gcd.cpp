#include<iostream>
using namespace std;

int GCD(int a, int b){
    int res = min(a, b);
    while(res > 0){
        if (a%res == 0 && b%res == 0)
        {
            break;
        }
        res--;  
    }
    return res;
}

// C++ program to find GCD of two numbers
// #include <iostream>
// using namespace std;
// // Recursive function to return gcd of a and b in single line
// int GCD(int a, int b)
// {
// 	return b == 0 ? a : GCD(b, a % b);	
// }

// int main(){
//     int a , b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << GCD(a,b) << endl;   
//     return 0;
// }
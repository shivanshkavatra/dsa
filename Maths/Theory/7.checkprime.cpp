// #include<iostream>
// using namespace std;

// bool checkPrime(int n){
//     if (n == 1)
//     {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
    
//     if(checkPrime(n))
//     {
//         cout << "The given number is Prime." << endl;
//     }
//     else{
//         cout << "The given number is non Prime." << endl;
//     }
//     return 0;
// }

// -->Efficient Solution.
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if(isPrime(n))
    {
        cout << "The given number is Prime." << endl;
    }
    else{
        cout << "The given number is non Prime." << endl;
    }
    return 0;
}
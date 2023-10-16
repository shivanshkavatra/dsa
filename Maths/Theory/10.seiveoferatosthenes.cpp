
// #include<iostream>
// using namespace std;

// void sieve(int n){
//     vector <bool> isPrime(n + 1 , true);
//     for (int i = 2; i*i <=n; i++)
//     {
//         if (isPrime[i])
//         {
//             for (int j = i*i; j <= n; j += i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (isPrime[i])
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// -->shorter implementation.

#include<iostream>
using namespace std;

void sieve(int n){
    vector <bool> isPrime(n + 1 , true);
    for (int i = 2; i <= n; i++)
    {
        if(isPrime[i]){
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The prime numbers before " << n << " are ";
    sieve(n);
    cout << endl;

    return 0;
}
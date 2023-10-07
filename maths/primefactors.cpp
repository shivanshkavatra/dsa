// --> Naive approach

// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     if (n == 1)
//     {
//         return false;
//     }
//     if (n == 2 || n == 3)
//     {
//         return true;
//     }
//     if (n % 2 == 0 || n % 3 == 0)
//     {
//         return false;
//     }
//     for (int i = 5; i*i <= n; i += 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// void primefactors(int n){
//     for (int i = 2; i < n; i++)
//     {
//         if (isPrime(i))
//         {
//             int x = i;
//             while (n%x == 0)
//             {
//                 cout << i << " ";
//                 x *= i;
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "The prime factors of the given no. are: ";
//     primefactors(n);
//     cout << endl;
//     return 0;
// }

// -->Efficient solution.

// #include<iostream>
// using namespace std;

// void primefactors(int n){
//     if(n <= 1)
//         return;
//     for (int  i = 2; i * i <= n; i++)
//     {
//         while (n % i == 0)
//         {
//             cout << i <<" ";
//             n /= i;
//         }   
//     }
//     if (n > 1)
//     {
//         cout << n << endl;
//     }
    
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "The prime factors of the given no. are: ";
//     primefactors(n);
//     cout << endl;
//     return 0;
// }

// --> More Efficient Method.

#include<iostream>
using namespace std;

void primefactors(int n){
    if (n <= 1)
    {
        return;
    }
    while (n % 2 == 0)
    {
        cout << "2 ";
        n /= 2;
    }
    while (n % 3 == 0)
    {
        cout << "3 ";
        n /= 3;
    }
    for (int i = 5; i*i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n /= i + 2;
        }
    }
    if (n > 3)
    {
        cout << n << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The prime factors of the given no. are: ";
    primefactors(n);
    cout << endl;
    return 0;
}
#include<iostream>
using namespace std;

void sieve(int n){
    vector <bool> isPrime(n + 1 , true);
    for (int i = 2; i*i <=n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2*i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The prime numbers before " << n << " are ";
    sieve(n);

    return 0;
}
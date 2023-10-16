// Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.
#include<iostream>
using namespace std;

// int exactly3Divisors(int n){
//         vector <bool> isPrime(n + 1 , true);
//         int res = 0;
//         for(int i = 2 ; i <= n ; i++){
//             if(isPrime[i]){
//                 if(1LL *i * i < n){
//                     res++;
//                 }
//                 for(int j = i * i ; j <=n ; j += i){
//                     isPrime[j] = false;
//                 }
//             }
//         }
//         return res;
//     }

#include <vector>

int exactly3Divisors(int n) {
    // Sieve of Eratosthenes to find primes up to n
    std::vector<bool> isPrime(n + 1, true);
    // isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i * i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Count perfect squares of primes
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    return count;
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << exactly3Divisors(n) << endl;
    
    return 0;
}
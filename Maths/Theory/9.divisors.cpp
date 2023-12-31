// -->Efficient solution which prints in unsorted order.

// #include<iostream>
// using namespace std;

// void printDivisors(int n){
//     for (int i = 1; i*i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//             if (i != n/i)
//             {
//                 cout << n/i << " ";
//             } 
//         }   
//     }
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "The divisors of " << n << " are ";
//     printDivisors(n);
//     cout << endl;
//     return 0;
// }

// -->Efficient solution which prints in sorted order.
#include<iostream>
using namespace std;

void printDivisors(int n){
    int i;
    int count = 0;
    for (i = 1; i*i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            count++;
        }
    }
    
    if (i - (n / i) == 1) {
		i--;
        count++;
	}
    
    for (; i >=1; i--)
    {
        if (n % i == 0)
        {
            cout << n/i << " ";
            count++;
        }
    }
    cout << endl;
    cout << count;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The divisors of " << n << " are ";
    printDivisors(n);
    cout << endl;
    return 0;
}


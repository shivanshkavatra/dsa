// Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series.

#include<iostream>
#include<cmath>
using namespace std;

double nth_term(int A,int B,int N)
    {
        // common ratio is given by r=b/a
        double r=((double)B)/A; 
        // Nth term is given by a(r^(N-1))
        return (A*pow(r,N-1)); 
    }

int main(){
    int a , b , n;
    cout << "Enter the first two terms of the Geometric Progression: ";
    cin >> a >> b;
    cout << "Enter the term you want to find out: ";
    cin >> n;

    cout << "The " << n << "th term of the G.P is: " << nth_term(a , b , n) << endl;
    return 0;
}
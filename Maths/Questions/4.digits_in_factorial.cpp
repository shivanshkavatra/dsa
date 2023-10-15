#include<iostream>
using namespace std;

int digitsInFactorial(int N)
    {
        double sum=0.0; 
        for(int j=1;j<=N;j++)
        {
            //sum stores log(j) + log(j+1) + ... + log(N) 
            sum+=log10(j); 
        }
        return(1+floor(sum));
    }

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The number of digits in factorial of " << n << " are " << digitsInFactorial(n) << endl;
    return 0;
}
// Given a quadratic equation in the form ax2 + bx + c. Find its roots.
// Note: Return the maximum root followed by the minimum root.

#include<iostream>
using namespace std;

void roots(int a , int b, int c){
    int D = pow(b , 2) - 4 * a * c;
    int root1,root2;
    if (D >= 0)
    {
        root1 = (-b + sqrt(D))/2 * a;
        root2 = (-b - sqrt(D))/2 * a;
    }
    else
    {
        cout << "imaginary";
        return;
    }
    cout << max(root1,root2) << " and " << min(root1 , root2);
    
     
}

int main(){
    int a , b , c;
    cout << "The quadratic equation is ax^2 + bx + c." << endl;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    cout << "The roots of the quadratic equation are "; 
    roots(a,b,c);
    cout << endl;
    return 0;
}
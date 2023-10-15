// Given a temperature in celsius C. You need to convert the given temperature to Fahrenheit.

#include<iostream>
using namespace std;

float c_to_f(int C){
    float f = 0;
    f = (1.8 * C) + 32;
    return f;
}

int main(){
    int n;
    cout << "Enter the temperature in degree Celsius: ";
    cin >> n;
    cout << "The given temperature in Fahrenheit will be: " << c_to_f(n) << endl;
    return 0;
}
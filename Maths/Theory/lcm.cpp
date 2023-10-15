// #include<iostream>
// using namespace std;

// int LCM(int a ,int b){
//     int res = max(a , b);
//     while (true)
//     {
//         if (res%a == 0 && res%b == 0)
//         {
//             return res;
//         }
//         res++;
//     }
    
// }

// int main(){
//     int a , b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << LCM(a,b) << endl;   
//     return 0;
// }

// -->Efficient solution.
#include<iostream>
using namespace std;
 
int GCD(int a , int b){
    if (b == 0)
    {
        return a;
    }
    return GCD( b , a % b);
}

int LCM(int a, int b){
    return (a * b)/GCD(a , b);
}

int main(){
    int a , b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << LCM(a,b) << endl;   
    return 0;
}
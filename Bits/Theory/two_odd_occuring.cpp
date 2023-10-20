#include<iostream>
using namespace std;

void oddApperance(int arr[] , int n){
    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        x = x ^ arr[i];
    }
    int k = (x & (~(x - 1)));
    int res1 = 0;
    int res2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & k) != 0)
        {
            res1 = res1 ^ arr[i];
        }
        else{
            res2 = res2 ^ arr[i];
        }
    }
    cout << "The numbers that are occuring odd no. of times are: " << res1 << " and " << res2;
    
}

int main(){
    int arr[] = {1 , 5 , 6 , 1 , 6 , 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    oddApperance(arr , n);
    cout << endl;
    return 0;
}
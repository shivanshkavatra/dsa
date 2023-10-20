#include<iostream>
using namespace std;

unsigned int swapBits(unsigned int n)
    {
        //0xAAAAAAAA means 10101010101010101010101010101010 in binary.
        //we get all even bits of n.
    	unsigned int ev=n & 0xAAAAAAAA; 
    	//0x55555555 means 01010101010101010101010101010101 in binary.
    	//we get all odd bits of n.
    	unsigned int od=n & 0x55555555; 
    	
    	//right Shifting the even bits obtained previously.
    	ev>>=1;
    	//left Shifting the odd bits obtained previously.
    	od<<=1;
    	
    	//doing bitwise OR of even and odd bits obtained and
    	//returning the final result.
    	return (ev | od);
    }

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << swapBits(n) << endl;
    return 0;
}
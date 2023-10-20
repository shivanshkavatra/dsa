// naive method.

// #include<iostream>
// using namespace std;

// int countSetBits(int n){
//     int count = 0;
//     while (n > 0)
//     {
//         if ((n & 1) != 0) // OR (n % 2 == 1)
//         {
//             count++;
//         }
//         n >>= 1;
        
//     }
//     return count;
// }


// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << countSetBits(n) << endl;
//     return 0;
// }

// Brian Kernighan’s Algorithm:

// C++ program to Count set
// bits in an integer
// #include <iostream>
// using namespace std;
// class gfg {
// 	/* Function to get no of set bits in binary
// representation of passed binary no. */
// public:
// 	unsigned int countSetBits(int n)
// 	{
// 		unsigned int count = 0;
// 		while (n) {
			
// 		}
// 		return count;
// 	}
// };
// /* Program to test function countSetBits */
// int main()
// {
// 	gfg g;
// 	int i = 9;
// 	cout << g.countSetBits(i);
// 	return 0;
// }


// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

int BitsSetTable256[256];

// Function to initialise the lookup table
void initialize()
{

	// To initially generate the
	// table algorithmically
	BitsSetTable256[0] = 0;
	for (int i = 0; i < 256; i++)
	{
		BitsSetTable256[i] = (i & 1) +
		BitsSetTable256[i / 2];
	}
}

// Function to return the count
// of set bits in n
int countSetBits(int n)
{
	return (BitsSetTable256[n & 0xff] +
			BitsSetTable256[(n >> 8) & 0xff] +
			BitsSetTable256[(n >> 16) & 0xff] +
			BitsSetTable256[n >> 24]);
}

// Driver code
int main()
{
	// Initialise the lookup table
	initialize();
	int n = 730;
	cout << countSetBits(n) << endl;
}

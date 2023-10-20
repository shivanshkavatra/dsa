// Given a number N. Find the length of the longest consecutive 1s in its binary representation.
#include <iostream>
using namespace std;

int maxConsecutiveOnes(int n)
{
    int res, count = 0;
    while (n > 0)
    {
        if ((n & 1) != 0)
        {
            count++;
            res = max(res, count);
        }
        else
        {
            count = 0;
        }
        n >>= 1;
    }
    return res;
}

// OR

// int maxConsecutiveOnes(int N)
// {

//     int count = 0;

//     // We use a loop to perform AND operation on N and N<<1 and everytime the
//     // trailing 1 from every sequence of consecutive 1s is removed.
//     // Loop continues till N is reduced to 0.
//     while (N != 0)
//     {
//         // Assigning result of AND operation to N
//         N = (N & (N << 1));
//         // increement of counter variable.
//         count++;
//     }
//     // returning the answer.
//     return count;
// }

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The maximum number of consecutive ones are: " << maxConsecutiveOnes(n) << endl;
    return 0;
}
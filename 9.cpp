#include <iostream>
using namespace std;

/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

int main()
{
    
    for (int i=0; i<1000; ++i)
    {
        for (int j=0; j<i; ++j)
        {
            for (int k=0; k<j; ++k)
            {
                if(k*k + j*j == i*i && i+j+k == 1000 )
                {
                    cout<<i * j * k<<endl;
                    return 0;
                
                }
            }
        }
    }
    
    
    return 0;
}

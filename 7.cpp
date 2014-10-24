#include <iostream>

using namespace std;

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

int main()
{
    const int nthPrime = 10001;
    
    int count = 0;
    int prime;
    bool isPrime;
    
    
    for(prime = 2 ; count < nthPrime ; prime++)
    {
        isPrime = true; 
        for(int factor = 2 ; isPrime == true && factor < prime ; ++factor )
        {
            if(prime % factor == 0)
            isPrime = false;
        }
        if (isPrime == true)
            count++;
        
    }
    
   cout << prime-1 << endl; 
   
   return 0;
}

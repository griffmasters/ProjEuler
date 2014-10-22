#include "iostream"

using namespace std;
/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/


int main()
{
 long int theNumber =  600851475143;
 
 //initializing i to 0 or 1 makes an infinite loop, don't do that
 for (int i = 2; i < theNumber; ++i)
    {
        while(theNumber%i == 0)
            theNumber = theNumber / i;
            
    }
    
    
 cout << theNumber << endl; 
   
 return 0;
}

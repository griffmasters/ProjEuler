#include <iostream>

using namespace std;

/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


int main()
{
  int multiple = 20;   
    
    while(multiple % 20 != 0 ||
            multiple % 19 != 0 ||
            multiple % 18 != 0 ||
            multiple % 17 != 0 ||
            multiple % 16  != 0 ||
            multiple % 15 != 0 ||
            multiple % 14 != 0 ||
            multiple % 13 != 0 ||
            multiple % 12 != 0 ||
            multiple % 11 != 0)
            
        multiple = multiple + 20;
    
   cout << multiple << endl; 
   
   return 0;
}

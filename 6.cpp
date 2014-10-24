#include <iostream>

using namespace std;

/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/


int main()
{
    int squareOfSum = 0;
    int sumOfSquare = 0;
    int dif;
    
for (int i = 1 ; i<=100 ; ++i)    
    {
        squareOfSum = squareOfSum + i;
        sumOfSquare = sumOfSquare + i * i;
    }
    
    dif = squareOfSum * squareOfSum - sumOfSquare;
    
   cout << dif << endl; 
   
   return 0;
}

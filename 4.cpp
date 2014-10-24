#include <iostream>

using namespace std;

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/


//recursive int-reversing function
int reverse(int i);

int main()
{

int inner = 0;
int pal = 0;
int outer = 0;
int temp;
    for (outer = 100 ; outer < 1000; ++outer)
    {
        for(inner = 100 ; inner < 1000; ++inner)
        {
            temp = inner * outer;
            cout << temp << endl << reverse(temp) << endl << endl; 
            if(temp == reverse(temp) && temp > pal)
//                cout << inner << endl << outer << endl << endl;
                pal=temp;
        }
    }
    
   cout << pal << endl << outer << endl << inner << endl; 
   
   return 0;
}


//recursive int-reversing function
int reverse(int i)
{

    if(i<10)
        return i;
        
    else
        return 10*((i%10) + reverse(i/10));
}

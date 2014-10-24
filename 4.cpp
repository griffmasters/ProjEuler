#include <iostream>

using namespace std;

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/



int reverse(int i);

int main()
{

int inner = 0;
int pal = 0;
int outer = 0;
int temp;
    for (outer = 999 ; outer > 99; outer=outer-1)
    {
        for(inner = 999 ; inner > 99; inner=inner-1)
        {
            temp = inner * outer;
//           cout << temp << endl << reverse(temp) << endl << endl; 
            if(temp == reverse(temp) && temp > pal)
                {
                    cout << inner << endl << outer << endl << endl;
                    pal=temp;
                }
        }
    }
    
   cout << pal << endl; 
   
   return 0;
}


// int-reversing function
int reverse(int i)
{
    int rev = 0;
    
    while(i>0)
    {
        rev = rev * 10;
        rev = rev + i%10;
        i=i/10;
    }

    return rev;
}

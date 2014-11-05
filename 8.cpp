#include <iostream>
using namespace std;
int main()
{
int buffer[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
int digits[1000];

//long ints for 2B+, idiot
long int product = 1;
long int largestProduct = 0;
char digitChars[1001] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

for (int n = 0; n<1000; ++n)
    {
    digits[n]=(digitChars[n]-48);
    }


    
//inefficient, but functional brute force method:
for(int i = 0; i<988; ++i) //1000-12
    {
        
//fill buffer with 13 consecutive digits
    for(int j=0; j<13; ++j)
        {
        buffer[j] = digits[i+j];    
        }

//initialize product and multiply buffer
    product = 1;
    for(int k=0; k<13; ++k)
        {
        product = product * buffer[k];
        }
//cout<<product<<endl;


//check product and save if larger than largestProduct
    if(product > largestProduct)
        {
        largestProduct = product;
        }
    }


/* this is a mess, maybe untangle it later
//scan through digits
for(int i = 13; i<1000; ++i)
    {
    if(buffer[(i)%13]!=0)
        {
        product = product / buffer[(i)%13];
        buffer[i%13] = digits[i];
        product = product * buffer[i%13];
        }
    else
        {
        product = 1;
        buffer[i%13]=digits[i];
        for(int j=0; j<13; ++j)
            {
            product=product * buffer[j];
            }
        }        
    if(product > largestProduct)
        {
        largestProduct = product;
        }
    }
*/

cout<<largestProduct;
return 0;
}

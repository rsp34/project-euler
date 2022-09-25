#include <iostream>
#include <cmath>
using namespace std; 

// A function to print all prime  
// factors of a given number n  
void primeFactors(long N)
{
    // User defines prime factor
    while (N % 2 == 0)  
    {  
        cout << 2 << " ";  
        N = N/2;  
    }

    int p = 3;
    while(N >= pow(p,2)){
        // I don't understand this..
        if(N%p==0){
            N = N/p;
            cout << p << " ";
        }else{
            // Can skip even numbers after 2
            p += 2;
        }
    }
    /*Repeatedly dividing by prime factors means we are
    left with a prime factoir*/
    if(N>1){cout << N << endl;}else{cout << endl;}
}
  
/* Driver code */
int main()  
{  
    long N;
    cout << "Input number to be factorised: ";
    cin  >> N;
    primeFactors(N);  
    return 0;  
}


#include <iostream>
using namespace std;

int main()
{
    // Programme to determine the even Fibonacci numbers up to 4000000
    int i=0, prev1=1, prev2=1, sum=0;
    while(i < 4000000){
        i = prev1+prev2;
        if(i%2 == 0){
            sum += i;
        }
        prev2 = prev1;
        prev1 = i;
    }
    cout << sum << endl;
    return 0;
}
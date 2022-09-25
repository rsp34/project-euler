#include <iostream>
using namespace std;

int main()
{   
    int a, b, limit;

    // Optain inputs from the user
    cout << "Input limit:";
    cin  >> limit;
    cout << "Input first number:";
    cin  >> a;
    cout << "Input second number:";
    cin  >> b;

    int sum = 0, i = 1;
    while (a*i<limit){
        sum += a*i;
        i++;
    }
    i = 1;
    while (b*i<limit){
        if (b*i%a!=0){
            // Check required here to prevent double counting
            sum += b*i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}
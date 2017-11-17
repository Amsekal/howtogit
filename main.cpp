#include <iostream>

using namespace std;

int main()
{
   int a=0;
    while(a<=99)
    {
        a++;if(a%3==0) cout<<"Fizz "; else cout<<a<<" ";
    }
    return 0;
}

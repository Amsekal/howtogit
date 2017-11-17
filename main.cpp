#include <iostream>

using namespace std;
void buzz()
{int a=0;
	while(a<=99)
	{if(a%4==0)
		cout<<"Buzz ";
		else cout<<a<<" ";}}
int main()
{
   int a=0;
    while(a<=99)
    {
        a++;if(a%3==0) cout<<"Fizz "; else cout<<a<<" ";
    }
    return 0;
}

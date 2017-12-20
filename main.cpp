
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int betu(int a)
{
    while(a){
        switch(a%10){
            case 1:cout<<"egy ";break;
            case 2:cout<<"ketto ";break;
            case 3:cout<<"harom ";break;
            case 4:cout<<"negy ";break;
            case 5:cout<<"ot ";break;
            case 6:cout<<"hat ";break;
            case 7:cout<<"het ";break;
            case 8:cout<<"nyolc ";break;
            case 9:cout<<"kilenc ";break;
                }a=a/10;
                }}

int main()
{

    for(int i=1;i<=1000000;i++)
	{

if (i%7==0){
        int Number = i;
        string String = static_cast<ostringstream*>( &(ostringstream() << Number) )->str();
        if(String== string( String.rbegin(), String.rend())){
            betu(i);cout<<endl;}}

	}
    return 0;
}


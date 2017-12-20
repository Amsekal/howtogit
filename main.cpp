
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int betu(int a)
{
    while(a){
        switch(a%10){
            case 1:cout<<"egy ";break;
            case 2:cout<<"kettö ";break;
            case 3:cout<<"három ";break;
            case 4:cout<<"négy ";break;
            case 5:cout<<"öt ";break;
            case 6:cout<<"hat ";break;
            case 7:cout<<"hét ";break;
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

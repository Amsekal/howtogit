#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    for(int i=1;i<=1000;i++){
        int Number = i;
        string String = static_cast<ostringstream*>( &(ostringstream() << Number) )->str();
        if(String== string( String.rbegin(), String.rend())){
            cout<<i<<endl;
        }
    }

    return 0;
}

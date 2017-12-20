#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
<<<<<<< HEAD
    for(int i=1;i<=1000;i++){
        int Number = i;
        string String = static_cast<ostringstream*>( &(ostringstream() << Number) )->str();
        if(String== string( String.rbegin(), String.rend())){
            cout<<i<<endl;
        }
    }

=======
    for(int i=1;i<=1000000;i++)
	{
		if (i%7 == 0)
		{
        cout<<i<<"\n";
		}
	}
>>>>>>> 303a0c6fa8f21508093b46a9502668b141a99b06
    return 0;
}

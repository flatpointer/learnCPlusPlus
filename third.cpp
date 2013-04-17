#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

    char message[] = "hello world";
    cout <<  setiosflags(ios::left);
    for (int k = 0; k < 4 ; k++) 
    {
        for (int j = 0; j < 6 ; j++) 
        {
            //really surprised std::right isn't doing this as per http://www.cplusplus.com/reference/ios/right/
            //cout.setwidth(7*17+20); //I guess this does nothing as I'm calling setw below? 
            cout <<  setfill('.') <<  setw(17) << message;
        }
        cout << endl;
    }

    return 0;
    
}

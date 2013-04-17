#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

    char message[] = "hello world";
    for (int k = 0; k < 4 ; k++) 
    {
        for (int j = 0; j < 6 ; j++) 
        {
            cout << setfill('.') << setw(17) << message;
        }
        cout << endl;
    }

    return 0;
    
}

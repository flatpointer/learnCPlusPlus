#include <iostream>
using namespace std;

int main() 
{
    char message[] = "hello world";
    int size = sizeof(message) / sizeof(char);
    int remainder = 17 - size; 
    
    for (int j = 0; j < 6 ; j++) 
    {
        cout << message;
        for (int i = 0; i <= remainder ; i++)
        {
            cout << ".";
        }
        cout << endl;
    }

    return 0;
    
}

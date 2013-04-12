#include <iostream>

using namespace std;

int main() 
{

    char message[] = "hello world";
    int size = sizeof(message) / sizeof(char);
    int remainder = 17 - size; 
    for (int k = 0; k < 4 ; k++) 
    {
        for (int j = 0; j < 6 ; j++) 
        {
            cout << std::right << message;
            for (int i = 0; i <= remainder ; i++)
            {
                cout << std::right << ".";
            }
        }
        cout <<std::right<< endl;
    }

    return 0;
    
}

#include <iostream>
 
using namespace std;
const int SIZE = 4;
 
int main()
{
    int array[SIZE];
    cout << "Enter: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> array[i];
    }
    cout << "Answer:" << endl;
    for (int i = SIZE - 1; i >= 0 ; i--)
    {
        cout << array[i];
    }
 
    return 0;
}


#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int arr[100], size;
    int testCases = 0;
    cin >> testCases;
    while (testCases > 0)
    {
        int size = 0;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = size - 1; i >= 0; i--)
        {
            cout << arr[i]<<" ";
        }
        cout<<endl;
        testCases--;
    }
    return 0;
}
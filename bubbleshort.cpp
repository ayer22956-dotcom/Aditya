#include <iostream>
using namespace std;
int main()
{

    int n = 5;
    int arr[5] = {2, 4, 5, 2, 6};

    for (int i = 1; i < n; i++) // its st at indexe 0 from index 4.
    {
        // int maxindex = i;
        for (int j = 0; j < n - i; j++) //
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
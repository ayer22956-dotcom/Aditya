// #include <iostream>
// using namespace std;

// bool isPalindrome(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;

//     while (start < end)
//     {
//         if (arr[start] != arr[end])
//             return false;

//         start++;
//         end--;
//     }

//     return true;
// }

// void printResult(bool result)
// {
//     if (result)
//         cout << "Array is Palindrome";
//     else
//         cout << "Array is NOT Palindrome";

//     cout << endl;
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 2, 1};
//     int n = 5;

//     bool result = isPalindrome(arr, n);

//     printResult(result);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int secondLargest(int arr[], int n)
// {
//     int largest = arr[0];
//     int second = arr[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             second = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > second)
//         {
//             second = arr[i];
//         }
//     }
//     return second;
// }
// int main()
// {
//     int arr[5] = {5, 5, 5, 5, 5};
//     int n = 5;
//     cout << "Second Largest = " << secondLargest(arr, n);
//     return 0;
// }


#include <iostream>
using namespace std;

int maxWater(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    int maxArea = 0;

    while(left < right)
    {
        int height = min(arr[left], arr[right]);
        int width = right - left;
        int area = height * width;

        if(area > maxArea)
            maxArea = area;

        if(arr[left] < arr[right])
            left++;
        else
            right--;
    }

    return maxArea;
}

int main()
{
    int arr[9] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    cout << "Maximum Water = " << maxWater(arr, n);

    return 0;
}
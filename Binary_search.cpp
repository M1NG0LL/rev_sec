#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {5, 3, 8, 9, 10};

    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);

    // for (int i : arr)
    //     cout << i << " ";

    int num = 1;

    int left = 0, right = size - 1, mid = 0;

    while (left < right)
    {
        mid = (left + right) / 2;

        if (arr[mid] == num)
        {
            cout << "The number is found in element " << mid << "." << endl;
            return 0;
        }
        else if (arr[mid] > num)
        {
            right = mid;
        }
        else if (arr[mid] < num)
        {
            left = mid;
        }
    }

    cout << "the number not found.";
}
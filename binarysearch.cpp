#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements (sorted):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> value;

    int st = 0, end = n - 1;
    bool found = false;

    while (st <= end)
    {
        int mid = (st + end) / 2;

        if (arr[mid] == value)
        {
            cout << "Element found : " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < value)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Element not found.\n";
    }

    return 0;
}

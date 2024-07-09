#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : " << endl;
    cin>>n;
    int arr[n];
    cout << "Enter the elements in the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if (arr[mid] == arr[mid - 1] || arr[mid] == arr[mid + 1])
        {
            ans = arr[mid];
            break;
        }
        else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1] )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (ans == -1)
    {
        cout << "There is no any duplicate value in the array: " << endl;
    }
    else
    {
        cout << "The duplicate value in the array is : " << ans;
    }
    return 0;
}
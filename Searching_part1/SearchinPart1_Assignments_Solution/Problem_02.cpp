#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target=1;
    // Binary Search operation
    int low = 0;
    int high = n - 1;
    bool flag = false;
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            if (arr[mid - 1] != target)
            {
                flag = true;
                // cout << mid;
                ans = mid;
                break;
            }
            else
            {
                high = mid - 1;
            }
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (flag == false)
        cout << "There is no any 1's is present : " << endl;
    else
        cout << "The total number of 1's is : " << (n-ans);
}
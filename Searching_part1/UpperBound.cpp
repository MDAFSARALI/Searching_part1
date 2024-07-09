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
    int target;
    cout << "Enter the target element :" << endl;
    cin >> target;
    // Binary Search operation
    int low = 0;
    int high = n - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            flag = true;
            cout << arr[mid - 1];
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (flag==false)
    cout<<"The lower bound is : "<<arr[low]<<endl;
    
}
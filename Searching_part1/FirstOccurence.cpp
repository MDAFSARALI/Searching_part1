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
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            /* //Either:
            if (arr[mid-1]==target) high=mid-1;
            else {
                flag=true;
                ans =mid;
                break;
            }
            */
            //    or
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
        cout << "The target element is not present in the array : " << endl;
    else
        cout << "The element is present at index : " << ans;
}

/*
for(int i=0;i<n;i++){
if(index!=arr[index]){
return index;
}
}
*/
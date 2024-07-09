#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    int low = 0;
    int high = n;
    bool flag = false;
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid == n)
        {
            flag = true;
            ans = mid;
            break;
        }
        else if (mid * mid < n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (flag == false)
    {
        cout << "The given number is not a perfect square: " << endl;
    }
    else
    {
        cout << "The given number is a perfect square of " << ans << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of coins : " << endl;
    cin >> n;
    int count = 0;
    for (int i = 1; i <n; i++)
    {
        count += i;
        if (count <= n)
        {
            continue;
        }
        else
        {
            cout << "The number of completed rows are : " << (i - 1) << endl;
            break;
        }
    }
    return 0;
}
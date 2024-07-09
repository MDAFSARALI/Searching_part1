#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of coins : " << endl;
    cin >> n;
    int low=0;
    int high=n;
    bool flag=-1;
    while (low<=high)
    {
        long mid=low+(high-low)/2;
        long CoinUsed=mid+(mid+1)/2;
        if (CoinUsed==n)
        {
            cout<<"The answer is : "<<mid-1<<endl;
            flag=mid;
            break;
        }
        else if (CoinUsed>n)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }   
    }
    if (flag==-1)
    {
        cout<<"I am printing"<<endl;
        cout<<"The answer is : "<<(int)(high-1)<<endl;
    }
    
    
}
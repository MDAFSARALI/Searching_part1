#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int ans;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid]==mid)
        {
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
        
    }
    cout<<"The smallest missing number is :"<<ans;
    
    
    










    return 0;
}
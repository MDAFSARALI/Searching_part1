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
    int ans=arr[0];
    int final_answer;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==ans)
        {
            ans++;
            continue;
        }
        else{
            final_answer=ans;
            break;
        }
        
    }
    cout<<"The smallest missing number is : "<<final_answer<<endl;
    
    










    return 0;
}
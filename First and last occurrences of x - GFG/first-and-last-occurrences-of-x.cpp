// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
  vector<int>ans;
   int first = -1;
   int low=0,high=n-1;
   
   while(low <= high){
       int mid = low + (high-low)/2;
       
       if(arr[mid] == x){
           first = mid;
           high = mid - 1;
       }
       else if(x < arr[mid]){
           high=mid-1;
       }
       else
           low = mid + 1;
   }
   ans.push_back(first);
   
   int last = -1;
   int start=0,end = n-1;
   
   while(start <= end){
       
       int mid=start + (end-start)/2;
       if(arr[mid] == x){
           last = mid;
           start = mid + 1;
       }
       else if(x > arr[mid]){
           start=mid+1;
       }
       else
           end = mid - 1;
   }
   ans.push_back(last);
   return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends
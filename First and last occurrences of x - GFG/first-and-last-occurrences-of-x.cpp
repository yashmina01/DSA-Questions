// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    
  int start = 0,end = n-1;
  int first = -1;
  int mid = start+(end-start)/2;
  
  while(start<=end){
      
      mid = start+(end-start)/2;
      
      if(arr[mid] == x){
          first = mid;
      end = mid-1;
      }
      else if(x > arr[mid])
      start = mid+1;
      
      else end = mid-1;
  }
  if(first == -1)
      ans.push_back(-1);
  else
      ans.push_back(first);
  
  int low = 0,high=n-1;
  int last = -1;
  mid = low+(high-low)/2;
  
  while(low<=high){
      
      mid = low+(high-low)/2;
      
      if(arr[mid] == x){
      last = mid;
      low = mid + 1;
      }
      else if(x > arr[mid])
      low = mid+1;
      
      else high = mid-1;
  }
  if(last == -1)
      ans.push_back(-1);
  else
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
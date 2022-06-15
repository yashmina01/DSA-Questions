// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
void quickSort(int arr[], int low, int high)
{
      // Your code here
    if(low >= high)
    return ;
    int p = partition(arr,low,high);
    
    //Applying Quick Sort For LEFT Part
    quickSort(arr,low,p-1);                   
    
    //Applying Quick Sort For Right Part
    quickSort(arr,p+1,high);    
}
    
int partition (int arr[], int low, int high)
{
        // code here
    int pivot = arr[low];
    int count = 0;                          //counting element less than pivot
    for(int i=low+1;i<=high;i++){
        if(arr[i] <= pivot)
        count++;
    }
    
    int pivotIndex = low + count;
    swap(arr[pivotIndex] , arr[low]);    

    int i = low,j = high;
    while(i < pivotIndex && j > pivotIndex){

        while(pivot >= arr[i]){
        i++;
}        
        while(pivot < arr[j]){
        j--;
}        
        if(i < pivotIndex && j > pivotIndex){  //here we will again check the codition
            swap(arr[i++] , arr[j--]);
        }
    }
    return pivotIndex;
}
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
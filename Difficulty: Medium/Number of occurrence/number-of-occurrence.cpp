//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
// 	    // code here
// 	    int left=findleftbound(arr,n,x);
// 	    int right=findrightbound(arr,n,x);
	    
// 	    if (left == -1) {return 0;}
// 	    else{return right - left + 1;}
// 	}
// private:
//     int findleftbound(int arr[],int n,int x){
//         int index=-1,low=0,right=n-1;
        
//         while(low<=right){
//             int mid=low+(right-low)/2;
            
//             if(arr[mid]==x){
//                 index=mid;
//                 right=mid-1;
//             }
//             else if(arr[mid]<x)low=mid-1;
//             else right=mid+1;
//         }
//         return index;
//     }
    
//     int findrightbound(int arr[],int n,int x){
//         int index=-1,low=0,right=n-1;
        
//         while(low<=right){
//             int mid=low+(right-low)/2;
            
//             if(arr[mid]==x){
//                 index=mid;
//                 low=mid+1;
//             }
//           else if (arr[mid] <x)
//                 low = mid + 1;
//             else
//                 right = mid - 1;
//         }
//         return index;
//     }

int first=lower_bound(arr,arr+n,x)-arr;
if(first==n||arr[first]!=x)return 0;
int last=upper_bound(arr,arr+n,x)-arr-1;
return last-first+1;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
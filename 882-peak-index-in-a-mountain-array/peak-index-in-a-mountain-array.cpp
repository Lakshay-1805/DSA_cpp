class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=0;int end=arr.size()-1;
        int mid;
        while(st<end){
             mid =st+(end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if (arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
                st= mid;
            }
            else{//(arr[mid-1]>arr[mid] && arr[mid]<arr[mid+1])
                end=mid;
            }
        }
        return mid;
    }
};
// Runtime: 0 ms
// Memory: 31.3 MB

class Solution {
public:
    int binSearch(vector<int>& arr, int target,int start,int end){
        if (start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target) {
                return mid;
            }else if(arr[mid]<=target){
                return binSearch(arr,target,mid+1,end);
            }else{
                return binSearch(arr,target,start,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1;
        return binSearch(arr,target,start,end);   
    }
};
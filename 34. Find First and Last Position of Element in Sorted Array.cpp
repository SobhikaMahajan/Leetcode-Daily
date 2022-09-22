class Solution {
public:
    
//      int firstOcc(vector<int>& arr, int n, int key){
//          int s=0,e=n-1;
//          int mid = s + (e-s)/2;
//          int ans = -1;
         
//          while(s<=e){
//              if(arr[mid]==key){
//                  ans=mid;
//                  e = mid-1;
//              }
             
//              else if(arr[mid]<key){
//                   e = mid-1;
//              }
             
//              else if(arr[mid]>key){
//                  s=mid+1;
//              }
            
//             mid = s + (e-s)/2;
//          }
//        return mid; 
//     }
                         
//      int secOcc(vector<int>& arr, int n, int key){
//          int s=0,e=n-1;
//          int mid = s + (e-s)/2;
//          int ans = -1;
         
//          while(s<=e){
//              if(arr[mid]==key){
//                  ans=mid;
//                  s=mid+1;
//              }
             
//              else if(arr[mid]<key){
//                   e = mid-1;
//              }
             
//              else if(arr[mid]>key){
//                  s=mid+1;
//              }
            
//             mid = s + (e-s)/2;
//          }
//        return mid; 
//     }
                         
                         
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
         int s=0,e=n-1;
         vector<int> ans = {-1,-1};
         
         while(s<=e){

            int mid = s + (e-s)/2;
             
             if(nums[mid]==target){
                 ans[0]=mid;
                 e = mid-1;
             }
             
             else if(nums[mid]<target){
                 
                 s=mid+1;
             }
             
             else if(nums[mid]>target){
                  e = mid-1;
             }
            
         }
        
        s=0,e=n-1;
        
         while(s<=e){
             int mid = s + (e-s)/2;
             
             if(nums[mid]==target){
                 ans[1]=mid;
                 s=mid+1;
             }
             
             else if(nums[mid]<target){
                 s=mid+1;
             }
             
             else if(nums[mid]>target){
                  e = mid-1;
             }
         }
       return ans; 
    }
    
};

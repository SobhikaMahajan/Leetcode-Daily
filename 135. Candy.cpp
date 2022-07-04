// There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

// You are giving candies to these children subjected to the following requirements:

// Each child must have at least one candy.
// Children with a higher rating get more candies than their neighbors.
// Return the minimum number of candies you need to have to distribute the candies to the children.


// **Solution**



class Solution {
public:
    int candy(vector<int>& ratings) {
        // Size of vector
        int n = ratings.size();
        
        // making two vectors of sie n and assign each element value one to satisfy first condition
        vector<int>leftPart(n,1);
        vector<int>rightPart(n,1);
        
        // going left to right and incrementing value at every upscale
        for(int i=1 ; i<n ; i++){
            if(ratings[i]>ratings[i-1]){
                leftPart[i] = leftPart[i-1]+1;
            }
            else{
                leftPart[i]= 1;
                }
        }
        
        // going right to left and incrementing value at every upscale
        for(int i=n-2 ; i>=0 ; i--){
            if(ratings[i]>ratings[i+1]){
                rightPart[i] = rightPart[i+1]+1;
            }
            else{
                rightPart[i]= 1;
                }
        }
        
        // Making ans vector
        vector<int>ans(n);
        for(int i=0 ; i<n ; i++){
            ans[i]= max(leftPart[i],rightPart[i]);
        }
        
        // Count to return
        int count=0;
        for(int i=0 ; i<n ; i++){
            count+=ans[i];
        }
        return count;
    }
};

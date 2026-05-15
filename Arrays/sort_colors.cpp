//problem name: Sort Colors
//platform: LeetCode
//time complexity: O(n)
//space complexity: O(1)


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n =nums.size();
        int blue = 0, white = 0, red = 0;
        for (int i = 0; i < n; i++){
            if(nums[i]==2){
                blue++;
            }
            else if (nums[i]==1) white++;
            else red++;
        }
        int i=0;

        while(i<n){
            if(i<red) nums[i]=0;
            else if(i<red+white) nums[i]=1;
            else nums[i]=2;  
            i++;
        }
    }
};
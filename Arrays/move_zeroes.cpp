//1.
//problem name: Move Zeroes
//platform: LeetCode
//time complexity: O(n)
//space complexity: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    
     int pos = 0;
     for(int j = 0; j<nums.size(); j++){
        if(nums[j]!=0){
            nums[pos++]=nums[j];
        }
     }   
     for (int j =pos; j<nums.size();j++){
        nums[j]=0;
     }
    }
};


//problem name: Rearrange Array Element by Sign
//platform: LeetCode
//time complexity: O(n)
//space complexity: O(n)



class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1 , arr2;

        for (int num: nums){
            if(num >= 0) arr1.push_back(num);
            else arr2.push_back(num);
        }

        int left = 0, right = 0, i = 0;
        while(i < n){
            if (i%2==1) nums[i] = arr2[right++];
            else nums[i] = arr1[left++];
            i++;
        }

        return nums;


        
    }
};
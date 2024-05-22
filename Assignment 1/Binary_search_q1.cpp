class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (nums[mid] == nums[mid+1]){
                if (mid%2!=0){
                    r = mid-1;
                }
                else{
                    l = mid+2;
                }
            }
            else if (nums[mid] == nums[mid-1]){
                if ((mid-1)%2!=0){
                    r = mid-2;
                }
                else{
                    l = mid+1;
                }
            }
            else{
                return nums[mid];
            }
        }
        return nums[l];
    }
};
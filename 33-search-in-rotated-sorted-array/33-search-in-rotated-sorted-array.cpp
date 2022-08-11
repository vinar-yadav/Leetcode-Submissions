class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0, h=n-1;
        
        while(l<=h){
            if(nums[l]==target) return l;
            if(nums[h]==target) return h;
            
            int mid=l+(h-l)/2;

            if(nums[mid]==target) return mid;
            else if(nums[l]<nums[mid]){ // if left half sorted
                if(target >= nums[l] and target < nums[mid]) h=mid-1;
                else l=mid+1;
            }
            else{ // if right half sorted
                if(target > nums[mid] and target <= nums[h]) l=mid+1;
                else h=mid-1;
            }
        }
        
        return -1;
    }
};
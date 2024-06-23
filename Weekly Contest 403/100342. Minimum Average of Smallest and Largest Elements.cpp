class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        if (nums.empty()) return 0; // Handle empty array case
        
        double ans = DBL_MAX; // Use DBL_MAX for double max value
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int st = 0;
        int ed = n-1;
        
        while(st <= ed){
            double avg = (nums[st] + nums[ed])/2.0;
            if(avg < ans){
              ans = avg;
            }
            st++;
            ed--;
        }
        return ans;
    }
};
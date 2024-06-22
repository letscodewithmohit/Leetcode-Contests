class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int n = nums.size();
        
       
        int count0 = 0 , count1 = 0 , count2 = 0;
        
        for(int num : nums){
            int r = num % 3;
            
            if(r==0){
                count0++;
            }
            else if(r == 1){
                count1++;
            }
            else{
                count2++;
            }
        }
        return count1 + count2;
    }
};
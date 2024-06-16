class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
    
        int n = hours.size();
       unordered_map<int,int>mp;
        
        long long count = 0;
        
        for(auto num : hours){
        
            int r = num % 24;
            
            int c = (24 - r) % 24;
            
            if(mp.find(c) != mp.end()){
                count+=mp[c];
            }
            
            mp[r]++;   
        }
        
        return count;   
    }
};
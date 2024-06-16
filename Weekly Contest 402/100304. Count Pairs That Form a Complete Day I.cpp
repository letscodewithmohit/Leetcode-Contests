class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
       int n = hours.size();
       
        // int count = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //     if((hours[i] + hours[j]) % 24 == 0){
        //        count++; 
        //     }
        //     }
        // }
        // return count;
        
        unordered_map<int,int>mp;
        
        int count = 0;
        
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
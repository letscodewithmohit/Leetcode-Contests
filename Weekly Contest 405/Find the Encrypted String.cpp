class Solution {
public:
    string getEncryptedString(string s, int k) {
        
        int n = s.size();
//         if (k < 0 || k >= n) {
//             return s; // Return original string if k is out of bounds
//         }
//         string str = "";
        
       
//         str+= s[k];
  
       
//         for(int i=0; i<n; i++){
//          if(i != k){
//           str += s[i];
//          }
//         }
//         return str;
        
        string str = s;
        for(int i=0; i<n; i++){
       str[i] = s[(i+k)%n];
        }
        return str;
    }
};
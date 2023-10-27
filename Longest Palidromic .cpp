class Solution {
    private:
    bool check(string &s, int i , int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
       int n = s.size();
       int count = 0;
       int size = 0;
       for(int  i =0; i<n; i++){
           for(int j =i; j<n; j++){
               if(check(s,i,j)){
                   if(j-i+1 >size){
                       size = j-i+1;
                       count = i;
                   }
               }
           }
          
       } 
        return s.substr(count,size);
    }
};
class Solution {
public:
static bool compare(int a , int b){

    int bitcounty = __builtin_popcount(a);

    int bitcountx = __builtin_popcount(b);

    if(bitcounty == bitcountx){
        return a<b;
    }

    return bitcounty < bitcountx;
}
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);

        return arr;
  
    }
};
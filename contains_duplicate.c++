//BRUTE FORCE
// Make a nested loop, generate all possible pairs
//Put a condition if both of the numbers generated in a pair are same 
//In this approach only the unique pair will be  formed because outer loop is running from 0 to n-1, 
//   and the inner loop will start from one value extra from the previous loop value (which makes it run n*(n+1)/2).
//If we are matching each and every pair of vectors, then possibly we can compare if any of them have the same value then
// return true. else at end of nested form loop return false

class Solution{
public:
        bool containDuplicate(vector<int> &num){
        bool flag = false;
        for(int i=0;i<num.size();i++){
          for(nt j=i+1;j<num.size();j++){
            if(num[i] == num[j]) return true;
          }
        }
      return flag;
        }
};

//time complexity is o((n*(n+1))/2) == 0(n2 ) n square





//using HASH MAP
// traverse vector and count frequency using any data structure.
// Iterate through data structure to find if the frequency is beyond 1.
// Contains Duplicate
  class Solution {
  public:
      bool containsDuplicate(vector<int>& nums) {
          unordered_map<int,int> mp;
          for(auto i : nums) mp[i]++;
          bool flag = false;
          for(auto i : mp){
              if(i.second >= 2) return true;
          }
          return flag;
      }
  };
  

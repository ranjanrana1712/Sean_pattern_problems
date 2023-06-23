missing_number.c++

// Brute force approach

// we can for loop from 0 to size(num) 
// and compare each element with the num
// time complexity for loop is n and for number of time the for loop will run is n+1
// so total time complexity is 0(n2)


// slightly optimized code

// we can sort the array 
// and iterate the array ,if next expected number is missing then return the missing number

// time complexity for sorting is o(nlogn) and for loop is o(n) so total time complexity o(nlogn);
// optimized code
// s1: find sum of array and n .
// s2: use missing = (n*(n+1))/ - 2sum of array
// T(E) = o(n)  and S(E)  = 0(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumArr =0;
        for(int i=0;i<nums.size();i++)sumArr += nums[i];
            
            int n = nums.size();
            int expectedSum = (n*(n+1))/2;
            int reqNum = expectedSum-sumArr;
            return reqNum;
        
     
    }
};
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) 
        {
            return 0;
        }
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1]) //Two pointer method
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
int main()
{
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    Solution s1;
    int res=s1.removeDuplicates(nums);
    cout<<"Array size:"<<res;
}
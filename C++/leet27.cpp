#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        cout<<"Final array element:";
        for(int i=0;i<k;i++)
        {
            
            cout<<nums[i]<<" ";
        }

        cout<<endl;
        return k;

    }
};

int main()
{
    vector<int> nums={1,1,2,2,2};
    int val=2;
    Solution s1;
    int res=s1.removeElement(nums,val);
    cout<<"Array size:"<<res;


}
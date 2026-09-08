#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    int x;
    
    while(cin>>x)
    {
        nums.push_back(x);
    }
    
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size()-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            i++;
        }
        else
        {
            cout<<nums[i]<<endl;
            break;
        }
    }
    
    
    
}

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    int x;
    
    while(cin>>x)
    {
        vec.push_back(x);
    }
    int n=vec.size();
    
    int max_sum=INT_MIN;
    for(int st=0; st<n;st++)
    {
        int currSum=0;
        for(int end=st;end<n;end++){
            
           currSum+=vec[end];
           max_sum=max(max_sum,currSum);
            
        }
       
    }
    cout<<max_sum<<endl;
}

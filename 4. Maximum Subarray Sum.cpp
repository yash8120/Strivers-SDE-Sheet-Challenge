#include <bits/stdc++.h> 
#define ll long long 
long long maxSubarraySum(int arr[], int n)
{
    ll c_sum=0,m_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        c_sum=c_sum+arr[i];
        if(c_sum<0) c_sum=0;
        m_sum=max(m_sum,c_sum);
    }
    return m_sum;
    
}
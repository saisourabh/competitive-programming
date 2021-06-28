#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int b[n];
        int l=0;
        int r=n-1;
        for(int i=0;i<n;i++)
        {
            int temp;
            if(a[i]==0)
            {
                b[l]=0;
                l++;
            }
            if(a[i]==2)
            {
                b[r]=2;
                r--;
            }
        }
        for(int i=0;i<n;i++)
            a[i]=b[i];
            
        
        for(int i=l;i<=r;i++)
            a[i]=1;
            
    }
    
};

int main()
{
    int arr[] = {0,2,0,1,1,0,2,0,1,2,1,0,0,1,2,0,1,2,1,0,1};
     
    int r = sizeof(arr) / sizeof(arr[0]);
    

    int k = 9;

    Solution obj;
    obj.sort012(arr,r);
    for(int i=0;i<r;i++)
        cout<<arr[i]<<"  ";
    return 0;

}
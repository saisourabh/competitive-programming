
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:

    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr, arr + r+1);
 
    
        return arr[k - 1];
        
    }
};
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 9 ,21 ,6 ,9 ,8 ,22 ,25 ,98 ,52 ,32 ,59 ,12 ,6 ,21 ,53 ,12 ,45 ,12 ,28 ,99 ,91 ,11231315 ,5 ,-100 ,12311,-999};
     
    int r = sizeof(arr) / sizeof(arr[0]);
    

    int k = 9;

    Solution obj;
    cout<<obj.kthSmallest(arr,0,r-1,k);
    
    return 0;

}

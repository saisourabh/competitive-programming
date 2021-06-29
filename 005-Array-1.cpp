#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
 
    void sortNegative(int arr[], int n)
    {int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
            
    }
    
};

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
     
    int r = sizeof(arr) / sizeof(arr[0]);
    

    int k = 9;

    Solution obj;
    obj.sortNegative(arr,r);
    for(int i=0;i<r;i++)
        cout<<arr[i]<<"  ";
    return 0;

}
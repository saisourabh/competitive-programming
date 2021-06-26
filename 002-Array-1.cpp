#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;

};
struct Pair minMaxArray(int arr[],int n)
{
    struct Pair minmax;
    if (n==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
    }
    else if(n==2)
    {
        if(arr[0]>arr[1])
        {
            minmax.min=arr[1];
            minmax.max=arr[0];
        }
        else
        {
            minmax.min=arr[0];
            minmax.max=arr[1];
        }
    }
    else
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>minmax.max)
                minmax.max=arr[i];
            if(arr[i]<minmax.min)
                minmax.min=arr[i];

        }
    }

    return minmax;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 9 ,2 ,6 ,1 ,8 ,2 ,1 ,98 ,1 ,32 ,5 ,12 ,6 ,21 ,53 ,12 ,45 ,1 ,2 ,99 ,1 ,11231315 ,5 ,-100 };
     
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Pair minmax=minMaxArray(arr,n); 
    cout<<"Maximum : "<<minmax.max;
    cout<<"\nMinimum : "<<minmax.min;
    
    return 0;

}
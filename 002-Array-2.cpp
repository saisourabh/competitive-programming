#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;

};
struct Pair minMaxArray(int arr[],int low,int high)
{
    struct Pair minmax,mml,mmr;
    if (high==low)
    {
        minmax.min=arr[low];
        minmax.max=arr[low];
        return minmax;
    }
    
    if(high==low+1)
    {
        if(arr[low]>arr[high])
        {
            minmax.min=arr[high];
            minmax.max=arr[low];
        }
        else
        {
            minmax.min=arr[low];
            minmax.max=arr[high];
        }
        
        return minmax;
    }


        int mid=(high+low)/2;
        mml=minMaxArray(arr,low,mid);
        mmr=minMaxArray(arr,mid+1,high);
        if(mml.max>mmr.max)
            minmax.max=mml.max;
        else
            minmax.max=mmr.max;
        
        if(mml.min<mmr.min)
            minmax.min=mml.min;
        else
            minmax.min=mmr.min;

        return minmax;

}



int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 9 ,2 ,6 ,1 ,8 ,2 ,1 ,98 ,1 ,32 ,5 ,12 ,6 ,21 ,53 ,12 ,45 ,1 ,2 ,99 ,1 ,11231315 ,5 ,-100 };
     
    int high = sizeof(arr) / sizeof(arr[0]);
    int low=0;
    
    struct Pair minmax=minMaxArray(arr,low,high-1); 
    cout<<"Maximum : "<<minmax.max;
    cout<<"\nMinimum : "<<minmax.min;
    
    return 0;

}
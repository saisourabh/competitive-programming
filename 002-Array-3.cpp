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
    int i;
    if(n%2==0)
    {
        minmax.min=arr[0];
        minmax.max=arr[1];
        i=2;
    }
    else if(n%2==1)
    {
        minmax.min=arr[0];
        minmax.max=arr[0];
        i=1;
    }
    while(i<n)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>minmax.max)
                minmax.max=arr[i];
            if(arr[i + 1] < minmax.min)        
                minmax.min = arr[i + 1];    
        }
        else
            if(arr[i]<minmax.min)
                minmax.min=arr[i];
            if(arr[i+1]>minmax.max)
                minmax.max=arr[i+1];

    i=i+2;
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
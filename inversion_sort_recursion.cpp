#include <iostream>
using namespace std;


int count=0;
void sorting(int arr[],int n,int c)
{

    if(n==1)
    {
        
        for(int i=0;i<c;i++)
        {
            cout<<arr[i]<<" ";
        }
            
    }
    
    else
    { 
        if(arr[n-1]<arr[n-2])
        {
            
            int temp=arr[n-1];
            arr[n-1]=arr[n-2];
            arr[n-2]=temp;
            n=c;
            sorting(arr,n,c);
        }
        else
        {
            
             --n;
             sorting(arr,n,c);
        }
     }
}


int main()
{
    int temp=0;
    int num,i,check,count=0;
    num=5;
    check=num;
    int a[5]={5,4,3,2,1};
    sorting(a,num,check);
}



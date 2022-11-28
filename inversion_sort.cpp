#include <iostream>
using namespace std;

int main()
{
    int temp=0;
    int n,i,c,count=0;
    n=6;
    c=n;
    int arr[5]={64,25,13,22,11};
      
    while(n!=1){
    count++;
    cout<<"count"<<count<<endl;
        if(arr[n-1]<arr[n-2])
        {
            
            temp=arr[n-1];
            arr[n-1]=arr[n-2];
            arr[n-2]=temp;
            n=c;
            
        }
        else{
            
            --n;
          
        }}

    for(int i=0;i<c;i++)
    {
        cout<<arr[i]<<" ";
    }
 

    
    

}

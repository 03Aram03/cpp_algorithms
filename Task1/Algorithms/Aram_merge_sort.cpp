//merge sort
#include <iostream>
#include<climits>
const int size=8;

void merge(int A[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    
    int *L=new int[n1+1];
    int *R=new int[n2+1];
    
    for(int i=0;i<n1;i++)
    {
        L[i]=A[p+i];
    }
    
    for(int i=0;i<n2;i++)
    {
        R[i]=A[q+1+i];
    }
     
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;
    
int i=0,j=0;

for(int k=p;k<=r;k++)
{
    if(L[i]<=R[j])
    {
        A[k]=L[i];
        i++;
    }
    else
    {
        A[k]=R[j];
        j++;
    }
}

delete []L;
delete []R;
}


void mergesort(int A[],int p,int r)
{
    if(p<r)
    {
       int q=(p+r)/2;
       mergesort(A,p,q);
       mergesort(A,q+1,r);
       merge(A,p,q,r);
    }
    
}



int main() {

 int arr[size]={2,4,7,9,1,5,12,15};
 int n=sizeof(arr)/sizeof(arr[0]);
 
std::cout<<"unsorted array"<<std::endl;
for(int i=0;i<n;i++)
{
    std::cout<<arr[i]<<"  ";
}
std::cout<<"\n";


mergesort(arr,0,n-1);

std::cout<<"sorted array"<<std::endl;
for(int i=0;i<n;i++)
{
    std::cout<<arr[i]<<"  ";
}
std::cout<<"\n";


    return 0;
}

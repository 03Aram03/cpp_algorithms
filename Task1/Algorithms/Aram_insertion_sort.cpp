//insertion sort
#include <iostream>
const int size=10;

int main() {

int arr[size]={2,4,1,3,6,7,5,10,15,9};
int i=1,j=0,key;

std::cout<<"unsorted array"<<std::endl;


for(i=0;i<size;i++)
{
    std::cout<<arr[i]<<"  ";
}
std::cout<<std::endl<<std::endl;


for(i=1;i<size;i++)
{
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>=key)
    {
        arr[j+1]=arr[j];
        j-=1;
    }
    arr[j+1]=key;
}
std::cout<<"sorted array"<<std::endl;

for(i=0;i<size;i++)
{
    std::cout<<arr[i]<<"  ";
}


    return 0;
}

//C++ XOR unique number code
#include<iostream>
#include<vector>

int findUnique(const std::vector<int>& nums)
{
  int unique=0;
  for(int num:nums)
    {
     unique^=num;
    }
    return unique;
}

int main()
{
  std::vector<int> arr = {1,4,7,1,4,9,9};
  int result=findUnique(arr);
  std::cout<<"Unique number is: "<<result<<std::endl;
  
}

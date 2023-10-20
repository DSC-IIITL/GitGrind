#include <iostream>
using namespace std;

//the function we are going to use 
bool strictlyincreasingarray(int nums[], int length);


//main function start here
int main(){
  //getting the length of array
  int length;

  cout<<"Enter the length of array : "<<endl;
  cin>>length;

  int nums[length];

  //getting the value for array
  cout<<"Start entering the value here :"<<endl;

  for (int i = 0; i < length; i++)
  {
    cin>>nums[i];
  }
  
  //calling hte function here
  bool work=strictlyincreasingarray(nums, length);

  //using the condition as per given question
  if(work==true)
  {
    cout<<"true"<<endl;
  }else{
    cout<<"false"<<endl;
  }
}



//function to check the weather the array is strictly increasing or not.
bool strictlyincreasingarray(int nums[], int length)
{
  //iinitialization of value that we use

  //check is used to get the bool value
  bool check=false;

  //prev contain the first value of array and then changes accordingly
  int prev=nums[0];

  int count=0;

  //using loop for check for every value in array
  for(int i=1;i<length;i++)
  {
    if(prev>=nums[i])
    {
      if(check){
        return false;   //ending the function and giving false value as output
      }else{
        check=true;  //changing the bool value
        count++;
        for(int j=i; j>0;j--)
        {
          if (j > 1 && nums[j - 2] >= nums[j]) 
          {
            nums[i] = nums[i - 1];  // Adjust the current element
          }
        }
        prev=nums[i];  //changing the value of prev
      }
    }else{
      prev=nums[i];  //changing the value of prev
    }
  }
  return count<=1;  //ending the function and giving true value as output
}
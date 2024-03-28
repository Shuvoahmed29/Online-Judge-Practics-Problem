#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Number of Student :  ";
  cin>>n;
  int A[n],sum=0;
  cout<<"Enter All Student marks."<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<"Enter the Marks of student-"<<i+1 <<"= ";
      cin>>A[i];
      sum = sum + A[i];
  }
  cout<<"Total students Marks =  "<<sum<<endl;
  float avg = (float)sum/n;
  cout<<"Avarage Mark         =  "<<avg<<endl;
  int max = A[0];
  for(int i=1;i<n;i++)
  {
      if(max<A[i])
      {
          max = A[i];
      }
  }
  cout<<"Maximum Mark = "<<max<<endl;
}

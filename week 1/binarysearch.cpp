#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
    A: int s;
    cin>>s;
    int arr[20];
    for(int i=0;i<s;i++)
      cin>>arr[i];
    int k,c=0,m=0,z=0;
    cin>>k;
    for(int i=0,j=s-1;i<=j;)
    {
      m=i+(j-i)/2;
      c++;
      if(k==arr[m])
      {
        z=1;
        cout<<"present "<<c;
        break;
      }
      else if(arr[m]<k)
        i=m+1;
      else
        j=m-1;
    }
    if(z==0)
      cout<<"not present "<<c;
    n--;
    if(n!=0)
      goto A;
      return 0;
}
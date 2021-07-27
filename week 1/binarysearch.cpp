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
    int k,c=0,m=0;
    cin>>k;
    if(k<arr[s/2])
    {
      for(int i=0;i<s/2;i++)
      {
        c++;
        if(k==arr[i])
        {
          m++;
          cout<<"present "<<c;
        }
      }
      if(m==0)
        cout<<"not present "<<c;
    }
    else if(k>=arr[s/2])
    {
      for(int i=s/2;i<s;i++)
      {
        c++;
        if(k==arr[i])
        {
          m++;
          cout<<"present "<<c;
        }
      }
      if(m==0)
        cout<<"not present "<<c;
    }
    n--;
    if(n!=0)
      goto A;
      return 0;
}
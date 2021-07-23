#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of test cases"<<endl;
    cin>>n;
        A: int a[50],s;
        cout<<"enter the size of the array"<<endl;
        cin>>s;
        cout<<"enter the elements of the array"<<endl;
        for(int i=0;i<s;i++)
        {
            cin>>a[i];
        }
        int k;
        cout<<"enter the no. you want to search"<<endl;
        cin>>k;
        int c=0,z=0;
        for(int i=0;i<s;i++)
        {
            if(k==a[i])
            {
                c++;
                z++;
                break;
            }
            else 
                c++;
        }
        cout<<"no. of comparisons\t"<<c<<endl;
        if(z==0)
            cout<<"element is not present in the array"<<endl;
        else
            cout<<"element is present in the array"<<endl;
        n--;
    if(n!=0)
        goto A;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int first=0,second=1,next;
    int n;
    cout<<"Enter the number of terms:";
    cin>>n;
    cout<<first<<" "<<second;
    for(int i=0;i<n-2;i++)
    {
        next=first+second;
        cout<<" "<<next;
        first=second;
        second=next;
    }
    return 0;
}

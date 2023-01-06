#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int key;
    key=50;
    int ans=-1;

    for (int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            ans=i;
        }
    }

    cout<<"key is found at "<<ans <<" index"<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int array[n];

    cout<<"Eneter the elements: "<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    cout<<"ARRAY: "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";

    }
    cout<<" "<<endl;
    //sum of all elements in array
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=array[i];
    }
    cout<<"\nSum of "<<n<<" elements is : "<<sum<<endl;

    //to find max element in an array
    int max=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"\nmax element is: "<<max<<endl;
    return 0;
}
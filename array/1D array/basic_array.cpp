/*ARRAY: Data structure which can store elements of same data type.

SYNTAX: datatype array_name[size];

int array[5]={1,2,3,4,5};

we can access elements of array through index and index is tarts from 0

in above example index of 1 is 0,  2 is 1,.........

type:- 1.single dimensional or one dimensional array
       2. multi dimensional array.
*/

#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,3,4,5};

    //calculate size of array
    int size = sizeof(array);
    cout<<"SIZE IS: "<<size<<endl;

    //to know how many elements are present in array
    int length = sizeof(array)/sizeof(array[0]);
    cout<<"total elements in array: "<<length<<endl;

    //traversing in array
    for (int i=0;i<length;i++)
    {
        cout<<"Element at "<<i<<" is "<<array[i]<<endl;
    }

    return 0;

}

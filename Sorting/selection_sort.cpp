#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1,3,2,4,6,5};
    int minIndex;

    for(int i=0;i<5;i++)
    {
        minIndex = i;
         for(int j=i+1;j<6;j++)
         {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
         }
         swap(arr[i],arr[minIndex]);


    }

    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
    }
}
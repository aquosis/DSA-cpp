#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    cout<<"Enter the element u want to search - ";
    int n;
    cin>> n;
    bool found = false;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] == n)
        {
            cout<<"found the element in index"<<" "<<i;
            found = true;
            break;
        }

        
    }
    if(found==false)
    {
        cout<<"The element is not present in array";
    }
    return 0;
    
}
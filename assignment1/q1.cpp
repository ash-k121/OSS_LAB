#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of elements ";
    cin>>n;
    int arr[n];
    double avg=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Element ";
        cin>>arr[i];
        avg+=arr[i];

    }
    cout<<"Average "<<avg/n<<endl;
}
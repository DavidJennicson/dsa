#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter number of rows";
    cin>>a;
    cout<<"Enter number of stars per row";
    cin>>b;
    for (int i=1;i<=a;i++)
    {
        for (int j=1;j<=b;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    """
    Enter number of rows10
Enter number of stars per row5
*****
*****
*****
*****
*****
*****
*****
*****
*****
*****
    """
}
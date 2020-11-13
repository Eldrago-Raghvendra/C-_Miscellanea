#include <iostream>

using namespace std;

int main()
{
//Rectangle pattern
    int ro, co, i, j;
    cin>>ro;
    cin>>co;
    // Hollow Rectangle
    for(i=1; i<=ro; i++){
        for(j=1; j<=co; j++){
            if(i==1 || j==1 || i==ro || j==co){
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{//Rectangle pattern
    int ro, co, i, j;
    cin>>ro;
    cin>>co;

     for(i=0; i<=ro; i++){
        for(j=0; j<=co; j++){
            cout<<"*";

        }
        cout<<endl;
    }

    return 0;
}


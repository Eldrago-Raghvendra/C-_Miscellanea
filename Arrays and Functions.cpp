#include <iostream>

using namespace std;
void sayhi(string name, int age);
double cube(double num){

return num*num*num;
}


int main()
{   //Arrays & Functions
    int luckynums[20] ={4, 8, 15, 16, 23, 42};
    luckynums[10]=109;
    cout << luckynums[10] << endl;
    sayhi("ram", 60);
      sayhi("shyam", 30);
        sayhi("aam", 10);

        cout << cube(5.0);
    return 0;
}

void sayhi(string name, int age){
    cout<<"hello "<<name<<" you are "<<age<<endl;
}

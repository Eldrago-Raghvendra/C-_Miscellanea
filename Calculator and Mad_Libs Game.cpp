#include <iostream>

using namespace std;

int main()
{ int num1, num2, n, m;
string color, plural, celebrity;
cout<<"choose m as 1 for calculator"<<endl;
cout<<"choose m as 2 for Word game"<<endl;
cin >> m;
if (m==1){

cout<< "enter first num:";
cin>> num1;
cout<< "enter sec num:";
cin>> num2;
cout<< "enter the value of n"<<endl;
cin>>n;
switch (n)
{case 1:
cout<< num1 +num2;
break;
case 2:
cout<< num1 -num2;
break;
case 3:
cout<< num1 /num2;
break;
case 4:
cout<< num1 *num2;
}
}
else{
   cout<<" Welcome to Mad Libs game "<<endl;
    cout<<"Enter a color: plural and celebrity"<<endl;
    getline(cin, color);
    getline(cin, plural);
    getline(cin, celebrity);
    cout<<"Roses are "<< color <<endl;
    cout<< plural <<"are blue "<<endl;
    cout<<"I love "<< celebrity <<endl;

}
return 0;
}

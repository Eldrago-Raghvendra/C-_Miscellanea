#include <iostream>

using namespace std;

int main()
{ int i, j, temp;
    int arr[5]={5,6,7,8,2};
  for(i=0; i<5;i++){
      for(j=5;j>0; j--){
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      cout<<arr[i]<<" ";
      }
}

    return 0;
}

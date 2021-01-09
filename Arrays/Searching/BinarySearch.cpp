#include <iostream>

using namespace std;

int binsearch(int arr[], int n, int key){
int s=0;
int e=n;


while(s<e){
    int mid=(s+e)/2;
    if(arr[mid]<key){
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else{
        return mid;
    }    
}

}

int main(){
int n, i;
    cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    for(i=0; i<n;i++){
        cin>>arr[i];
    }

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
int key;
cout<<"Enter the key:";
cin>>key;
cout<<binsearch(arr, n, key)<<endl;

return 0;
}

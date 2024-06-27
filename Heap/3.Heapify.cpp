#include <iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int largest=i;
    int leftindex= 2*i;
    int rightindex= 2*i +1;
    if(leftindex<=n && arr[largest]<arr[leftindex]){
        largest= leftindex;
    }
    if(rightindex <=n && arr[largest]<arr[rightindex]){
        largest= rightindex;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
int main()
{
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i= n/2;i>=1;i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}

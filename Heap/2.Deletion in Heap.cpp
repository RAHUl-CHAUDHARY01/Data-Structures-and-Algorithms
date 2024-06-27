//deleting the root node of the heap
void deletefromHeap(){
  if(size==0){
    cout<<"there is nothing to delete"<<endl;
    return ;
  }
  //putting the value of last node in first node
  arr[1]=a[size];
  size--;
  // taking the root node to its correct position
  int i=1;
  while(i<size){
    int leftindex=2*i;
    int rightindex= 2*i +1;
    if(leftindex <size && arr[i]<arr[leftindex]){
      swap(arr[i],arr[leftindex]);
      i=leftindex;
    }
    else if(rightindex<size && arr[i]<arr[rightindex]){
      swap(arr[i],arr[rightindex]);
      i=rightindex;
    }
    else{
      return ;
    }
  }  
}

#include <iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
           int parent=index/2;
           if(arr[parent] <arr[index]) {
            swap(arr[parent],arr[index]);
            index=parent;
           }
           else {
            return;
           }
        }
    }

        void deleteFromHeap(){
            if(size==0){
                cout<<"nothing to delete"<<endl;
                return;
            }
                arr[1]=arr[size];
                size--;
                //take rooot node to its correct position

                int i=1;
                while(i<size){
                    int left=2*i;
                    int right=2*i+1;
                    if(left<size && arr[i]<arr[left]){
                        swap(arr[i],arr[left]);
                        i=left;
                    }

                    else if(right<size && arr[i]<arr[right]){
                        swap(arr[i],arr[right]);
                        i=right;
                    }

                    else{
                        return;
                    }
                }
        }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void heapify(int arr[],int n, int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;

        if(left<=n && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<=n && arr[right]>arr[largest]){
            largest=right;
        }

        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr, n, largest);
        }
    }

    void heapSort(int arr[] ,int n){
        int size=n;
        while(size>1){
            swap(arr[1], arr[size]);
            size--;
            heapify(arr, size, 1);
        }
    }

}; 

int main () {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print(); 
    h.deleteFromHeap();

    int arr[]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        h.heapify(arr, n, i);
    }
    cout<<"After heapify: ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    h.print();

    h.heapSort(arr, n);

    cout<<"After heap sort: ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    h.print();

    return 0; 
}

#include <iostream>
#include<queue>

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


    cout<<"using priority queue here "<<endl;

    priority_queue<int>pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"The top element is: "<<pq.top()<<endl;
    pq.pop();
    cout<<"The top element after pop is: "<<pq.top()<<endl;
    cout<<"The size of the priority queue is: "<<pq.size()<<endl;
    cout<<"Is the priority queue empty? "<<pq.empty()<<endl;
    cout<<"Elements in the priority queue: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    // Using a min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);
    cout<<"The top element of min-heap is: "<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"The top element of min-heap after pop is: "<<minHeap.top()<<
endl;
    cout<<"The size of the min-heap is: "<<minHeap.size()<<endl;
    cout<<"Is the min-heap empty? "<<minHeap.empty()<<endl;
    cout<<"Elements in the min-heap: ";
    while(!minHeap.empty()){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;

    return 0; 
}

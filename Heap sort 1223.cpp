#include<bits/stdc++.h>

using namespace std;

int heap_size,heap[100];

int left( int i ){

    return 2*i;

}

int right( int i ){

    return 2*i+1;

}

int parent( int i ){

    return i/2;

}

void max_heapify(int heap[], int heap_size,int i){

    int l,r,largest,t;

    l=left(i);

    r=right(i);

    if(l<=heap_size && heap[l]>heap[i]){

        largest=l;
    }
    else{

        largest=i;

    }
    if(r<=heap_size && heap[r]>heap[largest]){

        largest=r;
    }

    if(largest!=i){

        swap(heap[i],heap[largest]);

        max_heapify(heap,heap_size,largest);

    }
}

void build_max_heap(int heap[], int heap_size){

    int i;

    for(i=heap_size/2; i>=1;i--){

        max_heapify(heap,heap_size,i);
    }

}

void heap_sort(int heap[], int heap_size){

    int i, t;

    for(i=heap_size;i>1;i--){

        swap(heap[i],heap[1]);

        heap_size--;

        max_heapify(heap,heap_size,1);


        }
}

int main(){

    cout<<"Enter number of elements: ";

    cin>>heap_size;

    for(int i=1;i<=heap_size;i++){

        cin>>heap[i];

    }

    build_max_heap(heap,heap_size);

    heap_sort(heap,heap_size);

    cout<<"\nSorted array: \n";

    for(int i=1;i<=heap_size;i++)

        cout<<heap[i]<<" ";



    }

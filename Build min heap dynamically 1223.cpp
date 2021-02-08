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

void min_heapify(int heap[], int heap_size,int i){

    int l,r,smallest,t;

    l=left(i);

    r=right(i);

    if(l<=heap_size && heap[l]<heap[i]){

        smallest=l;
    }
    else{

        smallest=i;

    }
    if(r<=heap_size && heap[r]<heap[smallest]){

        smallest=r;
    }

    if(smallest!=i){

        swap(heap[i],heap[smallest]);

        min_heapify(heap,heap_size,smallest);

    }
}

void build_min_heap(int heap[], int heap_size){

    int i;

    for(i=heap_size/2; i>=1;i--){

        min_heapify(heap,heap_size,i);
    }

}



int main(){

    heap_size=0;
    int i=1,k;

    while(cin>>k){

        heap[i++]=k;

        heap_size++;

        build_min_heap(heap,heap_size);

    }

    //build_min_heap(heap,heap_size);


    for(i=1;i<=heap_size;i++)

        cout<<heap[i]<<" ";



    }

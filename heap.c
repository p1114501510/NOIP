#include<stdio.h>

#define PARENT(i) i>>=1;
#define LEFT(i) i<<=1;
#define RIGHT(i) i<<=1;i++;
#define __INF -9999999
int heap_size = 0;

void exchange(int *a,int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void max_heapify(int a[],int i){
    int l = LEFT(i);    //left son
    int r = RIGHT(i);   //right son
    int largest = 0;
    if(l<=heap_size&&a[l]>a[i])
        largest = l;    //Attenton!largest stores the index!
    else
        largest = i;
    if (r<=heap_size&&a[r]>a[i]){
        largest = r;
    }
    if(largest != i){ //if the largest is not i the exchange a[i] a[largest]
        exchange(&a[i], &a[largest]);
        max_heapify(a, largest);
    }
}

int main(){
    int a[14] = {__INF,27,17,3,16,13,10,1,5,7,12,4,8,9};
    heap_size = 14;
    max_heapify(a, 4);
    for(int i=0;i<14;i++)
        printf("%d ",a[i]);
    return 0;
}
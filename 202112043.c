#include <stdio.h>
#include <stdlib.h>

#define Max_ELEMENTS 200

int n =0;
typedef struct{
    int key;
}element;

int arr[]={7,10,8,4,6,2,5,3,9,1};

element heap[Max_ELEMENTS];

void push(element item, int *n);
element pop(int *n);

int main(void){
    int i=0; 
    element item;

    for(i=0; i<10;i++)
    {
        item.key = arr[i];
        push(item,&n);
    }

    for(i=1; i<=10; i++)
    {
        printf("%2d ",heap[i]);
    }
    printf("\n");
    for(i=0;i<10;i++){
		item=pop(&n);
		printf("%2d ",item.key);
	}
    

   

    return 0;
}

void push(element item, int *n){ 
    int i = ++(*n);
    while ((i != 1) && (item.key > heap[i/2].key)){
    heap[i] = heap[i/2];
    i /= 2;}
    heap[i] = item;
}

element pop(int *n) {
    element item = heap[1], temp = heap[(*n)--];
    int parent = 1, child = 2;

    while(child<= *n){
    if ((child< *n) && (heap[child].key < heap[child+1].key))
    child++;

    if(temp.key >= heap[child].key) break;
    
    heap[parent] = heap[child];
    parent = child, child *= 2;
    }
    heap[parent] = temp;
    return item;
}
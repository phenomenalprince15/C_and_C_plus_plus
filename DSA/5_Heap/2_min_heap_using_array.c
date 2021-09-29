#include <stdio.h>

int size = 0;

void swap(int *a, int *b)
{
    int temp = *b;
    *b =  *a;
    *a = temp;
}

void heapify(int array[], int size, int i)
{
    if (size == 1){
        printf("Single element in array.\n");
    }else{
        int largest = i;
        int l = 2*i+1;
        int r = 2*i+2;
        if(l<size && array[l]<array[largest])
        {
            largest = l;
            //printf("largest is set to l.\n");
        }
        if(r<size && array[r]<array[largest])
        {
            largest = r;
            //printf("largest is set to r.\n");
        }
        if(largest != i){
            swap(&array[i],&array[largest]);
            heapify(array,size,largest);
        }
    }
}

void insert(int array[], int new_num)
{
    if(size == 0){
        array[0] = new_num;
        size++;
    }else{
        array[size] = new_num;
        size++;
        for(int i=size/2-1; i>=0;i--)
            heapify(array,size,i);
    }
}

void delete(int array[], int num)
{
    int i=0;
    for (i=0;i<size;i++)
    {
        if(num == array[i])
            break;
    }
    swap(&array[i],&array[size-1]);
    size--;
    for (int i=size/2-1;i>=0;i--)
        heapify(array,size,i);
}

void print(int array[], int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",array[i]);
    printf("\n");
}

int main()
{
    int array[10];
    insert(array,3);
    insert(array,1);
    insert(array,6);
    insert(array,5);
    insert(array,2);
    insert(array,4);

    printf("Min-Heap array :: ");
    print(array, size);
}
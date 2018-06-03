//
// Created by pawciow on 20.03.18.
//

#include "heapsort.h"

heap::heap(int* data, int dataSize)
{
    _size = dataSize;
    _data = data;
    for (int i = _size / 2; i >= 0; --i)
        restoreHeap(i);
}
void heap::showTop()
{
    std::cout<<"THE BIGGEST IS: "<< _data[0]<<std::endl;
}
int heap::popTop()
{
    int toReturn = _data[0];
    _data[0] = _data[--_size];
    restoreHeap(0);
    return toReturn;
}

int heap::left(int iterator)
{
    return (iterator*2+1);
}
int heap::right(int iterator)
{
    return (iterator*2 +2);
}
void heap::restoreHeap(int parent)  //przywracam kopiec
{
    int largest = parent;
    // Porządkuję i szukam największego
    if(left(parent) < _size && _data[left(parent)] > _data[largest])
        largest = left(parent);
    if(right(parent) < _size && _data[right(parent)] > _data[largest])
        largest = right(parent);
    if (largest != parent)
    {
       std::swap(_data[parent], _data[largest]);
       restoreHeap(largest);
    }
}



void heapSort::sort(int* data, int dataSize)
{
    heap myHeap(data,dataSize);
    //       myHeap.showTop();
    for(int i = 0; i < dataSize;++i )
    {
        data[dataSize-1-i] = myHeap.popTop();
    }

    /* std::cout << std::endl;
     for(int i = 0; i < dataSize;++i )
     {
         std::cout << data[i] <<" " << std::endl;
     }*/
}
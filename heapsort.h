//
// Created by pawciow on 20.03.18.
//

#ifndef PROJEKT_1_HEAPSORT_H
#define PROJEKT_1_HEAPSORT_H

#include "constants.h"
class heap
{
public:
    heap(int* data, int dataSize);
    void showTop();
    int popTop();

private:
    void restoreHeap(int parent);
    int _size;
    int* _data;
    int left(int iterator);
    int right(int iterator);

};

class heapSort
{
public:
    void sort(int* data, int dataSize);
};


#endif //PROJEKT_1_HEAPSORT_H

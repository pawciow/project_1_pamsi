//
// Created by pawciow on 22.03.18.
//

#include "hybridSort.h"

void hybridSort::bubbleSort(int* data, int p, int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0;j < r - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                std::swap(data[j], data[j + 1]);
            }
        }
    }
}

void hybridSort::sort(int* table, int p, int r)
{

    if(r-p > 30)
    {
        int tmp = 0;
        if (p < r) {
            tmp = partition(table, p, r);
            sort(table, p, tmp - 1); // od poczatku do punktu podzialu
            sort(table, (tmp + 1), r);// od pkt podzialu do konca
        }
    }
    else
    {
     bubbleSort(table, p, r);
    }
}
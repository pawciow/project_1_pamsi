//
// Created by pawciow on 22.03.18.
//

#ifndef PROJEKT_1_HYBRIDSORT_H
#define PROJEKT_1_HYBRIDSORT_H

#include "constants.h"
#include "wrappers.h"

class hybridSort: public Quicksort
{
public:
    void sort(int* data, int p, int r);
    hybridSort&  getInstance()  {return *this;}

    void bubbleSort(int* data, int p, int r);
};


#endif //PROJEKT_1_HYBRIDSORT_H

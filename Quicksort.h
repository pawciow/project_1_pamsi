//
// Created by pawciow on 20.03.18.
//

#ifndef PROJEKT_1_QSORT_H
#define PROJEKT_1_QSORT_H

#include "constants.h"

class Quicksort
{
public:
    void sort(int* table, int p, int r);
protected:
    int partition(int* table, int p, int r);
    int randPivot(int* table, int p, int r);

};
#endif //PROJEKT_1_QSORT_H

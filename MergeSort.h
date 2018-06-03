//
// Created by pawciow on 21.03.18.
//

#ifndef PROJEKT_1_MERGESORT_H
#define PROJEKT_1_MERGESORT_H


class MergeSort {
public:
    void sort(int* data, long long int DataSize, int begin, int end);
private:
    void merge(int* data, long long int DataSize, int begin, int middle, int end);
};


#endif //PROJEKT_1_MERGESORT_H

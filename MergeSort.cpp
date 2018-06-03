//
// Created by pawciow on 21.03.18.
//

#include "MergeSort.h"

void MergeSort::sort(int* data,long long int DataSize,int begin, int end)
{
    int middle = (begin+end)/2;
    if(begin != end)
    {
        sort(data,DataSize, begin, middle);
        sort(data,DataSize, middle+1, end);
        merge(data,DataSize,begin,middle,end);
    }
}
void MergeSort::merge(int* data, long long int DataSize, int begin, int middle, int end)
{
    /* utworzenie chwilowej tablicy i indeksów do iterowania po niej*/
/*
    int tmpTab[DataSize];
    int i = 0;
    while(begin < middle && (middle+1) < end)
    {
        if(data[middle + 1] > data[begin])
        {
            tmpTab[i] = data[begin];
            begin++;
        }
        else
        {
            tmpTab[i] = data[middle + 1];
            (middle + 1) +1 ;
        }
        i++;
    }
    // Teraz wypełnienie tymczasowej tablicy pozostałymi elementami
    if(begin <= middle)
    {
        while(begin <= middle)
        {
            tmpTab[i] = data[begin];
            i++;
            begin++;
        }
    }
    else
        while((middle+1) <= end)
        {
            tmpTab[i] = data[middle+1];
            i++;
            middle++;
        }
    // Teraz wypełnienie tablicy wejściowej tablicą posortowaną
    for(int e = 0; e < DataSize; ++e )
        data[e] = tmpTab[e];*/

    int tmpTable[DataSize];
    int k;
    int B = begin;
    int i = begin;
    int M = middle+1;

    while((B<=middle)&&(M<=end))
    {
        if(data[B]<=data[M])
        {
            tmpTable[i]=data[B];
            B++;
        }
        else
        {
            tmpTable[i]=data[M];
            M++;
        }
        i++;
    }
    if(B>middle)
    {
        for(k=M;k<=end;k++)
        {
            tmpTable[i]=data[k];
            i++;
        }
    }
    else
    {
        for(k=B;k<=middle;k++)
        {
            tmpTable[i]=data[k];
            i++;
        }
    }
    for(k=begin;k<=end;k++)
        data[k]=tmpTable[k];
}


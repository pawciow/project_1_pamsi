//
// Created by pawciow on 20.03.18.
//

#include "Quicksort.h"

int Quicksort::partition(int* table, int p, int r)
{
    int divEl = table[r];       //randPivot(table, p, r); <-- To nie działa
    int i = (p - 1);

    for(int j = p; j <= r-1; j++)
    {
        if(divEl >= table[j])
        {
            i++;
            std::swap(table[i],table[j]);
        }
    }

    std::swap(table[i+1], table[r]);
    return (i+1);
}
void Quicksort::sort(int* table, int p, int r)
{
    int tmp = 0;
    if(p < r)
    {
        tmp = partition(table, p, r);
        sort(table, p       , tmp-1); // od poczatku do punktu podzialu
        sort(table, (tmp+1) , r  );// od pkt podzialu do konca
    }
}
int Quicksort::randPivot(int* table, int p, int r)
{
    // I tak nie używam, nie działa dobrze
    int median = (table[p] + table[(p+r)/2] + table[r])/3;

    return median;
}
//
// Created by pawciow on 20._QUICKSORT03.18.
//
#include "interfaces.h"

void IPreparable::prepareRandom(int size)
{
    dataSize = size;
    data = new int[size];
    std::generate_n(data, size, []() {return (rand() %  100000) + 1;} );
}


void IResults::saveResults(const char* s, const long long int dataSize, const long long int _time)
{
    std::fstream plik;
    plik.open(s, std::ios::out|std::ios::app);
    if(plik.good()!=true)
    {
        std::cout << "Can't save results" << std::endl;
        return;
    }

    std::cout << dataSize << ";" << _time << std::endl;

    plik << dataSize << ";" << _time << std::endl;
    plik.close();
}

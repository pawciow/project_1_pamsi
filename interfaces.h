//
// Created by pawciow on 20.03.18.
//

#ifndef PROJEKT_1_INTERFACES_H
#define PROJEKT_1_INTERFACES_H

#include "constants.h"
class IRunable
{
public:
    virtual void run() = 0;
};
class IPreparable
{
public:
    virtual void prepareRandom(int size);
    virtual void prepareSorted(int size) = 0;
    virtual void prepareOppositeSorted(int size) = 0;
    int* data;
    int dataSize;

};
class IResults
{
public:
    virtual void saveResults(const char* s, const long long int dataSize, const long long int _time);
};

#endif //PROJEKT_1_INTERFACES_H

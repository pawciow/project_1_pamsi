//
// Created by pawciow on 20.03.18.
//

#ifndef PROJEKT_1_WRAPPERS_H
#define PROJEKT_1_WRAPPERS_H

#include "constants.h"
#include "heapsort.h"
#include "Quicksort.h"
#include "MergeSort.h"
#include "hybridSort.h"

class Wrapper: public IRunable,
               public IPreparable,
               public IResults
{
protected:
    // int dataSize;
    int* copiedData;
    long long int time = 0;
public:

  //  virtual void prepareRandom(int size);

    virtual void run() = 0;

    virtual void prepareSorted(int size) = 0;

    virtual void prepareOppositeSorted(int size) = 0;

    virtual void cpyData();

    //virtual void harmonizeData(int* Done, int* toDo, int* toDo_2);

    virtual void showData();

    virtual int* getData();

    virtual int getDataSize();

    virtual int getTime();
};

class ExampleHeapsort : public Wrapper
{
public:
    void run();
    virtual void prepareSorted(int size);
    virtual void prepareOppositeSorted(int size);

};
class ExampleQuicksort : public Wrapper
{
public:
    void run();
    virtual void prepareSorted(int size);
    virtual void prepareOppositeSorted(int size);

};
class ExampleMergesort: public Wrapper
{
public:
    void run();
    virtual void prepareSorted(int size);
    virtual void prepareOppositeSorted(int size);

};
class ExampleHybridsort: public Wrapper
{
public:
    void run();
    virtual void prepareSorted(int size);
    virtual void prepareOppositeSorted(int size);
    ExampleHybridsort& getInstance(){return *this;}

};
#endif //PROJEKT_1_WRAPPERS_H

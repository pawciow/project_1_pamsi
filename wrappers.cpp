//
// Created by pawciow on 20.03.18.
//

#include "wrappers.h"





void Wrapper::showData()
{
        std::cout << "I'm showing data: \n ";
        for(int i = 0; i < dataSize; ++i)
        {
            std::cout << copiedData[i] << " ";
        }
        std::cout<<"\n";
}

    // FUNKCJE DOSTĘPOWE
int* Wrapper::getData()
{
    return data;
}
int Wrapper::getDataSize()
{
    return dataSize;
}
int Wrapper::getTime()
{
    return time;
}

void Wrapper::cpyData()
{
    copiedData = new int[dataSize];
    for(int i = 0; i < dataSize; ++i)
        copiedData[i] = data[i];
}

/***************************************************************************************************************/
void ExampleHeapsort::run()
{
    auto beginTime = std::chrono::high_resolution_clock::now();
    heapSort algorytm;
    algorytm.sort(copiedData, dataSize);
    auto endTime = std::chrono::high_resolution_clock::now();
    long long int _time = std::chrono::duration_cast<std::chrono::microseconds>(endTime - beginTime).count();
    time += _time;
}
void ExampleHeapsort::prepareSorted(int size)
{
    heapSort algorytm;
    prepareRandom(size);
    algorytm.sort(data, size);
}
void ExampleHeapsort::prepareOppositeSorted(int size)
{
    heapSort algorytm;
    prepareRandom(size);
    algorytm.sort(data, size);
    int tmp[size];
    for(int i = 0; i < size; ++i)
       tmp[i] = data[i];
    for(int i = 0; i < size; ++i)
        data[i] = tmp[size-i];

}
/***************************************************************************************************************/
void ExampleQuicksort::run()
{
    auto beginTime = std::chrono::high_resolution_clock::now();
    Quicksort algo;
    algo.sort(copiedData, 0, dataSize-1);
    auto endTime = std::chrono::high_resolution_clock::now();
    long long int _time = std::chrono::duration_cast<std::chrono::microseconds>(endTime - beginTime).count();
    time += _time;
}
void ExampleQuicksort::prepareSorted(int size)
{
    Quicksort algo;
    prepareRandom(size);
    algo.sort(data, 0, size);
}
void ExampleQuicksort::prepareOppositeSorted(int size)
{
    Quicksort algorytm;
    prepareRandom(size);
    algorytm.sort(data, 0, size);
    int tmp[size];
    for(int i = 0; i < size; ++i)
        tmp[i] = data[i];
    for(int i = 0; i < size; ++i)
        data[i] = tmp[size-i];
}
/********************************************************************************************************************/
void ExampleMergesort::run()
{
    auto beginTime = std::chrono::high_resolution_clock::now();
    MergeSort algory;
    algory.sort(copiedData, dataSize, 0, dataSize);
    auto endTime = std::chrono::high_resolution_clock::now();
    long long int _time = std::chrono::duration_cast<std::chrono::microseconds>(endTime - beginTime).count();
    time += _time;
}
void ExampleMergesort::prepareSorted(int size)
{

    MergeSort algory;
    prepareRandom(size);
    algory.sort(data, size, 0, size);
}
void ExampleMergesort::prepareOppositeSorted(int size)
{
    MergeSort algorytm;
    prepareRandom(size);
    algorytm.sort(data, size, 0, size);

    int tmp[size];
    for(int i = 0; i < size; ++i)
        tmp[i] = data[i];
    for(int i = 0; i < size; ++i)
        data[i] = tmp[size-i];
}

void ExampleHybridsort::run()
{
    auto beginTime = std::chrono::high_resolution_clock::now();
    hybridSort algory;
    //algory.bubbleSort(copiedData, 0, dataSize);
    algory.sort(copiedData,0,dataSize-1);

    auto endTime = std::chrono::high_resolution_clock::now();
    long long int _time = std::chrono::duration_cast<std::chrono::microseconds>(endTime - beginTime).count();
    time += _time;
}

void ExampleHybridsort::prepareSorted(int size)
{

    hybridSort algory;
    prepareRandom(size);
    algory.sort(data, 0, size);
}
void ExampleHybridsort::prepareOppositeSorted(int size)
{
    hybridSort algorytm;
    prepareRandom(size);
    algorytm.sort(data, 0, size);

    int tmp[size];
    for(int i = 0; i < size; ++i)
        tmp[i] = data[i];
    for(int i = 0; i < size; ++i)
        data[i] = tmp[size-i];
}

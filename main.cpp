#include "constants.h"
#include "wrappers.h"
#include "hybridSort.h"



void harmonizeData(int* Done, int* toDo)
{
    for(int e; e < sizes[0]; e++)
    toDo[e] =  Done[e] ;
}


//const long long int sizes[] = {1000,10000,100000,1000000,10000000,100000000};
int main()
{
    const char* names[] = {"/home/pawciow/CLionProjects/Projekt_1/przyklad.txt"};

    srand( time( NULL ) );


 /*   for (auto& e: sizes)
    {
        ExampleHeapsort HEAPSORT;
        ExampleQuicksort QUICKSORT;
        ExampleMergesort MERGESORT;
       // ExampleHybridsort HYBRIDSORT;

        HEAPSORT.prepareOppositeSorted(sizes[e]);
        QUICKSORT.prepareOppositeSorted(sizes[e]);
        MERGESORT.prepareOppositeSorted(sizes[e]);
       // HYBRIDSORT.prepareRandom(sizes[e]);

        harmonizeData(HEAPSORT.getData(),QUICKSORT.getData());
        harmonizeData(HEAPSORT.getData(),MERGESORT.getData());
       // harmonizeData(HEAPSORT.getData(),HYBRIDSORT.getData());

        for(int j = 0; j < MULTIPLE; j++)
        {
            HEAPSORT.cpyData();
            QUICKSORT.cpyData();
            MERGESORT.cpyData();
         //   HYBRIDSORT.cpyData();

            HEAPSORT.run();
            QUICKSORT.run();
            MERGESORT.run();
           // HYBRIDSORT.run();

        }*/
/*
        std::cout << "Medium time for heapsort is: " << HEAPSORT.getTime() << "\n";
        std::cout << "Medium time for quicksort is: " << QUICKSORT.getTime() << "\n";
        std::cout << "Medium time for mergesort is: " << MERGESORT.getTime() << "\n";
        //MERGESORT.saveResults(names[0], sizes[e], MERGESORT.getTime());
        //std::cout << "Medium time for hybridsort is: " << HYBRIDSORT.getTime() << "\n";

        HEAPSORT.saveResults(names[0], sizes[e], HEAPSORT.getTime());
        QUICKSORT.saveResults(names[0], sizes[e], QUICKSORT.getTime());
        MERGESORT.saveResults(names[0], sizes[e], MERGESORT.getTime());
        //HYBRIDSORT.saveResults(names[0],sizes[e], HYBRIDSORT.getTime());

        //HYBRIDSORT.showData();
        //QUICKSORT.showData();

*/
    ExampleHybridsort example;

    for(int j = 0; j < MULTIPLE; j++)
    {
        example.prepareOppositeSorted(sizes[j]);
        example.cpyData();
        example.run();


    }
    example.saveResults(names[0],sizes[0],example.getTime());


    return 0;
}



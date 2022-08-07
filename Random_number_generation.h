#include<iostream>
#include<ctime>
#include<cassert>
// "swap" function in the old version C++  before C++11. NOW Already embeded in  "std" Function;
using namespace std;
namespace SortTestHelper
{    /* this a standard  random number generator*/
	int* generateRandomArray(int n, int rangeL, int rangeR)//we use pointer to point the first postion in the dataset;
	{
		assert(rangeL <= rangeR); //make sure L<=R in the data range;
		int* arr = new int[n];  // create a new data group to store random numbers;
		srand(time(nullptr));  // use 'time' lib as reference to import random numbers;also needto import timelib;
		for (int i = 0; i < n; i++)
			arr[i] = rand() % (rangeR - rangeL + 1) + rangeL; //generate int numbers from ‘0’ to (rangeR - rangeL + 1); ++ 1 ,for new pointer;
		return arr;
		/* to make sure the rangeR should larger than rangeL, 
		*should obey assert functions in the begingings,
		* such as include<cassert> lib  and advanced written 
		*/
    }
	// now we can define the 'print function which can directly obey in main function'
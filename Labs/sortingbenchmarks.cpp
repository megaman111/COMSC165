///****************************************************************************
/// Description: This is a template!
/// Author: Joseph Gertler
/// COMSC 165 Section 3020
/// Date: ___DATE___
/// Status : Incomplete 
///****************************************************************************
#include <iostream>
#include <string>
//Function prototypes
void bubbleSortArray(int array[], int size);
void showArray(const int [], int);
void selectionSortArray(int [], int);
using namespace std;
int main() {
    int tensortone[10] = {39,72,46,96,59,7,47,33,2,69};
    int tensorttwo [10] = {39,72,46,96,59,7,47,33,2,69};
    int hundredsortone[100] = {32,70,75,73,23,48,43,12,11,64,16,66,3,98,73,20,10,80,25,3,44,31,73,82,81,25,9,22,97,27,12,66,68,47,91,77,84,2,90,66,26,25,24,33,22,43,40,72,8,60,55,88,78,35,47,64,38,7,79,98,85,7,73,68,32,62,87,10,89,17,83,75,25,10,68,46,73,31,69,72,25,11,6,63,18,10,76,36,4,66,15,30,88,52,80,3,2,30,38,89};
    int hundredsorttwo[100] = {32,70,75,73,23,48,43,12,11,64,16,66,3,98,73,20,10,80,25,3,44,31,73,82,81,25,9,22,97,27,12,66,68,47,91,77,84,2,90,66,26,25,24,33,22,43,40,72,8,60,55,88,78,35,47,64,38,7,79,98,85,7,73,68,32,62,87,10,89,17,83,75,25,10,68,46,73,31,69,72,25,11,6,63,18,10,76,36,4,66,15,30,88,52,80,3,2,30,38,89};
    bubbleSortArray(tensortone,10);
    selectionSortArray(tensorttwo,10);
    bubbleSortArray(hundredsortone, 100);
    selectionSortArray(hundredsorttwo, 100);
    cout << "Bubble Sorted Array of 10: ";
    showArray(tensortone,10);
    cout << "Selection Sorted Array of 10: ";
    showArray(tensorttwo, 10);
    cout << "Bubble Sorted Array of 100: ";
    showArray(hundredsortone, 100);
    cout << "Selection Sorted Array of 100: ";
    showArray(hundredsorttwo, 100);
    
    
}   
//Sorts the ar  ray with the amount of elements named size
void bubbleSortArray(int array[], int size)
{
    bool swap;
    int temp;
    int swapCount = 0;
    int compareCount = 0;
    for(int x =0; x < (size-1) ; x++)
    {
        for (int count = 0; count < (size - 1); count++)
        {
          compareCount++;
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swapCount++;
            }
        }
    }
  cout << "Bubble Sort Swap Count: " << swapCount << endl;
  cout <<"Bubble Sort Compare Count: " << compareCount << endl;
}
//Shows the array with the amount of elements named size
void showArray(const int array[], int size)
{
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;

    
}

void selectionSortArray(int array[], int size)
{
   int startScan, minIndex, minValue;
    int swapCount = 0;
    int compareCount = 0;
 
   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minValue = array[startScan];
      for(int index = startScan + 1; index < size; index++)
      {
          compareCount++;
         if (array[index] < minValue)
         {
            minValue = array[index];
            minIndex = index;
         }
      }
      array[minIndex] = array[startScan];
      array[startScan] = minValue;
        swapCount++;
  }
  cout << "Selection Sort Swap Count: " << swapCount << endl;
  cout <<"Selection Sort Compare Count: " << compareCount << endl;
}   
#include <iostream>
#include <fstream>
using namespace std;

// constant variables
const int ARRAY_SIZE = 10;
const int NAME_SIZE = 20;

// function prototypes
void arrayToFile(char[], int[], int);
void fileToArray(char[], int[], int);



int main()
{

        int arrayContents[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int arrayContents2[ARRAY_SIZE];
        int* intPointer2;
        int* intPointer;
        intPointer = arrayContents;
        intPointer2 = arrayContents2;
        char fileName[NAME_SIZE];
        cout << "Enter name of file." << endl << endl;
        cin.getline(fileName, NAME_SIZE);
        arrayToFile(fileName, intPointer, ARRAY_SIZE);
        fileToArray(fileName, intPointer2, ARRAY_SIZE);

        //dislplay contents of arrayContents2
        for (int count = 0; count < ARRAY_SIZE; count++)
        {
                cout << intPointer[count] << " ";
        }


        return 0;
}

void arrayToFile( char file[], int pointer[], int arr_size)
{
        fstream dataFile;
        dataFile.open(file, ios::in | ios::binary);
        for (int count = 0; count < arr_size; count++)
        {
                dataFile.write(reinterpret_cast<char *>(pointer), sizeof(pointer));
        }

        dataFile.close();

}

void fileToArray( char file[], int pointer[], int arr_size)
{
        fstream dataFile;
        dataFile.open(file, ios::out | ios::binary);
        for (int count = 0; count < arr_size; count++)
        {
                dataFile.read(reinterpret_cast<char *>(pointer), sizeof(pointer));
        }

        dataFile.close();
}
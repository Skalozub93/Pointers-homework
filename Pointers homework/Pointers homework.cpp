#include <iostream>
using namespace std;

int main()
{
    // TASK 1

   
   ///* const int SIZE = 5;

   // int arr1[SIZE] = { 1,2,3,4,5 };
   // int arr2[SIZE];

   // int* pa = arr1;
   // int* pb = arr2;

   // for (int i = 0; i < SIZE; i++)
   // {
   //     pb = pa;
   //     //cout << *pb << "\n";
   //     arr2[i] = *pb;
   //     pa++;
   //     pb++;
   //     
   // }
   // 
   // for (int i = 0; i < SIZE; i++)
   // {
   //     cout << arr2[i] << "\n";
   // }*/


    // TASK 2

    /*const int SIZE = 5;
    int arr[SIZE] = { 10,9,8,7,6};

    int* a = arr + 4;

    for (int i = 0; i < SIZE; i++)
    {
        cout << *(a - i) << "\n";
    }*/

    // TASK 3

    /*const int SIZE = 5;
    int arr[SIZE] = { 1,2,3,4,5 };
    int arr1[SIZE];

    int* ptr = arr + 4;
    int* ptr1 = arr1;
    
    for (int i = 0; i < SIZE; i++)
    {
        ptr1 = ptr;
        arr1[i] = *ptr1;
        cout << *(ptr1 - i) << "\n";
    }  */






   
}

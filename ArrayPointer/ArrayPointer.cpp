#include <iostream>

void arrayFiller(int* arr, int size)
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << "Write el #" << i << std::endl;
        std::cin >> arr[i];
    }
}

void arrayShow(const int* arr, int size)
{
    for (size_t i = 1; i < size; ++i)
    {
        std::cout << "Element #" << i << " is " << arr[i] << std::endl;
    }
}

void minElem(const int* arr, int size)
{
    int min = arr[0];
    int index = 0;

    for (size_t i = 1; i < size; ++i) 
        if (min > arr[i]) 
        {
            min = arr[i];
            index = i;
        }

    std::cout << "Min el is " << min << std::endl;
    std::cout << "Position " << index << std::endl;
}

void maxElem(int* arr, int size)
{
    int max = arr[0];
    int index = 0;

    for (size_t i = 1; i < size; ++i)
        if (max < arr[i]) 
        {
            max = arr[i];
            index = i;
        }

    std::cout << "Max el is " << max << std::endl;
    std::cout << "Position " << index << std::endl;
 }

int main()
{
    int size;
    std::cout << "How many elements?" << std::endl;
    std::cin >> size; 

    if (size <= 0) 
    {
        std::cout << "Error";
        return 0;
    }

    int* arr = new int[size];
    
    arrayFiller(arr, size);
    arrayShow(arr, size);

    minElem(arr, size);
    maxElem(arr, size);

    delete[] arr;

    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;

// function to find the maximum element in the matrix
int findMax(int A[][MAX_SIZE], int size)
{
    int maxElement = A[0][0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (A[i][j] > maxElement)
            {
                maxElement = A[i][j];
            }
        }
    }
    return maxElement;
}

// function to find the highest digit in the maximum element
int findHighDigit(int maxElement)
{
    int highestDigit = 0;
    while (maxElement > 0)
    {
        int digit = maxElement % 10;
        if (digit > highestDigit)
        {
            highestDigit = digit;
        }
        maxElement /= 10;
    }
    return highestDigit;
}

int main()
{
    int A[][MAX_SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int size = 3;
    int maxElement = findMax(A, size);
    int highestDigit = findHighDigit(maxElement);
    cout << "The maximum element of the matrix is: " << maxElement << endl;
    cout << "The highest digit in the maximum element is: " << highestDigit << endl;
    return 0;
}

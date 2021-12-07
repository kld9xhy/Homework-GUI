#include <iostream>
#include "funtion.h"

using namespace std;

void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

bool unique_check(int a[], int n, int k) {
    for (int i = 0; i < n; ++i)
    {
        if (a[k] == a[i] && i != k) return false;
    }
    return true;
}

bool is_b_contain_a(int a[], int n, int b[], int m)
{
    int i, j, k;
    if (m < n)
    {
        return false;
    }
    for (i = 0; i < m; ++i)
    {
        if (a[0] == b[i] && m - i >= n)
        {
            k = i + 1;
            j = 1;
            while (j < n)
            {
                while (a[j] != b[k])
                {
                    ++k;
                    if (k >= m) break;
                }
                if ((j == n - 1) && a[j] == b[k]) return true;
                ++j;
                ++k;
                if ((m - k) < (n - j)) return false;
            }
        }
    }
    return false;
}

void ShuffleArray(int* arr, int n)
{
    srand(time(NULL));

    int minPosition;
    int maxPosition = n - 1;
    int swapPosition;

    int i = 0;
    while (i < n - 1)
    {
        minPosition = i + 1;
        swapPosition = rand() % (maxPosition - minPosition + 1) + minPosition;

        Swap(&arr[i], &arr[swapPosition]);
        i++;
    }
}

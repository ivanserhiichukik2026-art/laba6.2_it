#include <iostream>
#include <iomanip>

using namespace std;

void readArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void printArray(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << a[i];
    }

    cout << endl;
}

void findMinMax(const int a[], int n, int& iMin, int& iMax)
{
    iMin = 0;
    iMax = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[iMin])
        {
            iMin = i;
        }

        if (a[i] > a[iMax])
        {
            iMax = i;
        }
    }
}

int main()
{
    const int MAX = 100;
    int a[MAX];
    int n;

    cout << "Enter n (1..100): ";
    cin >> n;

    if (!cin || n < 1 || n > MAX)
    {
        return 1;
    }

    cout << "Enter array elements:" << endl;
    readArray(a, n);

    cout << "Array:" << endl;
    printArray(a, n);

    int iMin;
    int iMax;

    findMinMax(a, n, iMin, iMax);

    cout << "Minimum index = " << iMin << endl;
    cout << "Maximum index = " << iMax << endl;

    return 0;
}
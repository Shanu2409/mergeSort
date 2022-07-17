#include <iostream>
using namespace std;

void merge(int ar1[], int n, int ar2[], int m, int ar3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (ar1[i] < ar2[j])
        {
            ar3[k++] = ar1[i++];
        }
        else
        {
            ar3[k++] = ar2[j++];
        }
    }

    while (i < n)
    {
        ar3[k++] = ar1[i++];
    }

    while (j < m)
    {
        ar3[k++] = ar2[j++];
    }
}

void print(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main()
{
    int ar1[] = {1, 3, 5, 7, 9};
    int ar2[] = {2, 4, 6, 8, 10};
    int ar3[10] = {0};

    merge(ar1, 5, ar2, 5, ar3);

    print(ar3, 10);

    return 0;
}

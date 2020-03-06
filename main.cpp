#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void BubbleSort(int n,int *arr)
{
    cout << "sorted by bubblesort:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i] < arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}

void InsertSort(int n,int *arr)
{
    cout << "sorted by insertion:\n";
    for (int i = 1; i < n; ++i) {
        for (int j = i; j > 0 && arr[j-1] > arr[j]; --j) {
            swap(arr[j-1],arr[j]);
        }
    }

}

void FillArr(int *arr, int n)
{
    for (int i = 0; i < n; ++i) {
        arr[i] = rand()%20;
    }
}

void ShowArr(int *arr,int n)
{
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectSort(int n,int *arr)
{
    cout << "sorted by insertion:\n";
    for (int i = 0; i < n-1; ++i) {
        int min = i;
        for (int j = i+1; j < n; ++j) {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }
}

int main() {
    srand(time(NULL));

    int n = 40;
    int *arr = new int(n);
    FillArr(arr,n);
    ShowArr(arr,n);

    BubbleSort(n,arr);
    ShowArr(arr,n);

    FillArr(arr,n);
    ShowArr(arr,n);

    InsertSort(n,arr);
    ShowArr(arr,n);

    FillArr(arr,n);
    ShowArr(arr,n);

    SelectSort(n,arr);
    ShowArr(arr,n);

    return 0;
}

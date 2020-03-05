#include <iostream>
#include <ctime>

using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Bubble(int n,int *arr)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i] < arr[j])
            {
                swap(arr[i],arr[j]);
            }
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


int main() {
    srand(time(0));

    int n = 10;
    int *arr = new int(n);
    FillArr(arr,n);
    ShowArr(arr,n);

    Bubble(n,arr);
    ShowArr(arr,n);

    return 0;
}

/*冒泡排序*/
#include <iostream>

using namespace  std;

void print(int arr[], int count);
void bubble(int arr[], int count);

int main()
{
    int a[] = {1, 6, 7, 3, 43, 9, 22, 11};
    bubble(a, 8);


    return 0;
}


void print(int arr[], int count)
{
    for (int i=0; i<count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*冒泡排序*/
void bubble(int arr[], int count)
{
    int n = count;
    //int n = sizeof(arr)/sizeof(arr[0]);
    //cout << n << endl;
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    print(arr, count);
    //int sizeof(arr)/sizeof(arr[0])
}

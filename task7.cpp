#include <iostream>
using namespace std;

void findAllIndices(int arr[], int size, int key, int indices[], int &count)
{
    count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            indices[count] = i;
            count++;
        }
    }
}

int main()
{
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[100];
    int indices[100];
    int key;
    int count;

    if (size > 0)
    {
        cout << "Enter array elements: ";

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    cout << "Enter key: ";
    cin >> key;

    findAllIndices(arr, size, key, indices, count);

    if (count == 0)
    {
        cout << "Key not present." << endl;
    }
    else
    {
        cout << "Indices: ";

        for (int i = 0; i < count; i++)
        {
            cout << indices[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
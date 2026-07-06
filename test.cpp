#include <iostream>
#include <string>
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

int findPattern(string text, string pattern)
{
    if (pattern.length() == 0)
        return 0;

    for (int i = 0; i <= text.length() - pattern.length(); i++)
    {
        int j;

        for (j = 0; j < pattern.length(); j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == pattern.length())
            return i;
    }

    return -1;
}

int main()
{
    cout << "Task 7 Tests" << endl << endl;

    int arr1[] = {4, 7, 2, 7, 9, 7, 5};
    int indices[100];
    int count;

    findAllIndices(arr1, 7, 7, indices, count);

    cout << "Test 1 Multiple Occurrences" << endl;
    cout << "Indices: ";

    for (int i = 0; i < count; i++)
    {
        cout << indices[i] << " ";
    }

    cout << endl << endl;

    int arr2[] = {1, 2, 3, 4, 5};

    findAllIndices(arr2, 5, 10, indices, count);

    cout << "Test 2 Key Not Present" << endl;

    if (count == 0)
        cout << "Passed";
    else
        cout << "Failed";

    cout << endl << endl;

    int arr3[1];

    findAllIndices(arr3, 0, 5, indices, count);

    cout << "Test 3 Empty Array" << endl;

    if (count == 0)
        cout << "Passed";
    else
        cout << "Failed";

    cout << endl << endl;

    cout << "Task 8 Tests" << endl << endl;

    cout << "Pattern at Beginning: ";
    cout << findPattern("programming", "pro") << endl;

    cout << "Pattern at End: ";
    cout << findPattern("programming", "ing") << endl;

    cout << "Pattern Not Present: ";
    cout << findPattern("programming", "xyz") << endl;

    cout << "Empty Pattern: ";
    cout << findPattern("programming", "") << endl;

    return 0;
}
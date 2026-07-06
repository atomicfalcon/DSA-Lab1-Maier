#include <iostream>
#include <string>
using namespace std;

int findPattern(string text, string pattern)
{
    if(pattern.length() == 0)
        return 0;

    for(int i = 0; i <= text.length() - pattern.length(); i++)
    {
        int j;

        for(j = 0; j < pattern.length(); j++)
        {
            if(text[i + j] != pattern[j])
                break;
        }

        if(j == pattern.length())
            return i;
    }

    return -1;
}

int main()
{
    string text;
    string pattern;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern: ";
    getline(cin, pattern);

    int index = findPattern(text, pattern);

    if(index == -1)
        cout << "Pattern not found." << endl;
    else
        cout << "Pattern found at index " << index << endl;

    return 0;
}
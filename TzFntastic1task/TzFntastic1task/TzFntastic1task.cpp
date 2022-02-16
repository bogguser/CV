
#include <iostream>
#include <string>

using namespace std;

string LowerString(const string& string)
{
    std::string L;
    L.reserve(string.size());
    for (int i = 0; i <= string.length() - 1; i++)
    {
        if (isupper(string[i]))
        {
            L.push_back(tolower(string[i]));
        }
        else
        {
            L.push_back(string[i]);
        }

    }
    return L;
}

int main()
{
    string str, word;
    char g = ')';
    char h = '(';
    cout << "Enter a word\n";
    getline(cin, str);
    word = LowerString(str);
    string cycleWord = word;
    for (int i = 0; i <= cycleWord.length() - 1; i++)
    {
        for (int j = 0; j <= cycleWord.length() - 1; j++)
        {
            
            if (i != j && cycleWord[i] == word[j])
            {
                word[i] = g;
                word[j] = g;
            }
           
        }

        if (word[i] != g)
        {
            word[i] = h;
        }

    }
    cout << word;
}




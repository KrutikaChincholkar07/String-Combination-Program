#include <iostream>
#include <string>
using namespace std;

// Function to generate combinations
void combination(string str, string result, int index)
{
    if(index == str.length())
    {
        if(result != "")
            cout << result << endl;
        return;
    }

    // Include character
    combination(str, result + str[index], index + 1);

    // Exclude character
    combination(str, result, index + 1);
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "String combinations are:\n";

    combination(str, "", 0);

    return 0;
}

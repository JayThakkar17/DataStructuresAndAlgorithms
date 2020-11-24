#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    // char arr[] = "JAY";

    // ASCCI Code
    // for (auto s : arr)
    //     cout << s << " " << (int)s << endl;

    // Finding the length of String
    // int i;
    // for (i = 0; arr[i] != '\0'; i++)
    // {
    // }

    // cout << i << endl;

    // changing to lowerCase
    // for (int i = 0; i < strlen(arr); i++)
    //     putchar(tolower(arr[i]));

    // cout << endl;

    // char arr1[] = "thakkar";
    // changing to upper case

    // for (int i = 0; i < strlen(arr1); i++)
    //     putchar(toupper(arr1[i]));

    // char arr[] = "wElCome";

    // for (int i = 0; i <= '\0'; i++)
    // {
    //     if (arr[i] >= 65 && arr[i] <= 90)
    //         arr[i] += 32;
    //     else if (arr[i] >= 97 && arr[i] <= 122)
    //         arr[i] -= 32;
    // }

    // for (int i = 0; i <= '\0'; i++)
    // cout << arr;

    //Counting Wovels and consonents

    // char arr[] = "Hello How are You";

    // int vCount = 0, count = 0, sCount = 1;
    // for (int i = 0; arr[i] != '\0'; i++)
    // {
    //     if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
    //         vCount++;
    //     else if (arr[i] == ' ' && arr[i - 1] != ' ')
    //         sCount++;
    //     else
    //         count++;
    // }

    // cout << "Wovels are " << vCount << endl;
    // cout << "Consonents are " << count << endl;
    // cout << "Total " << sCount << " Words." << endl;

    //reversing a string using reverse function

    // string name = "Python";

    // reverse(name.begin(), name.end());
    // cout << name;

    //reversing a string using swap function

    // string name = "CPlusPlus";

    // int n = name.length();
    // for (int i = 0; i < n / 2; i++)
    //     swap(name[i], name[n - i - 1]);

    // cout << name;

    // string name = "aba";
    // string temp[];
    // temp = reverse(name.begin(), name.end());

    // if (temp == name)
    //     cout << "String is Palindrome" << endl;
    // else
    //     cout << "String is not Palindrome" << endl;

    string str = "aaa";
    int flag;
    int n = str.length() - 1;

    for (int i = 0; i < n; i++)
        if (str[i] != str[n - i])
            flag = 1;

    if (flag == 1)
        cout << str << " String is Not Palindrome" << endl;
    else
        cout << str << " String is Palindrome" << endl;

    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;
#define NO_OF_CHARS 256

class stringOperation
{
public:
    void fillCharCount(char *str, int *count);
    void printDuplicate(char *str);
};

void stringOperation::fillCharCount(char *str, int *count)
{
    //using hashTable we initialize all value with increment
    for (int i = 0; *(str + i); i++)
        count[*(str + i)]++;
}

void stringOperation::printDuplicate(char *str)
{
    //
    int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
    fillCharCount(str, count);

    for (int i = 0; i < NO_OF_CHARS; i++)
        if (count[i] > 1)
            cout << (char)i << " Repeated " << count[i] << " Times " << endl;
}

int main()
{
    stringOperation s;

    char str[] = "CPlusPlus";
    s.printDuplicate(str);

    return 0;
}
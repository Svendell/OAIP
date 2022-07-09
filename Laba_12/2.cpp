 //#include <iostream>
  //#include <cstring>
  //#include <string.h>
  //
  //using namespace std;
  //
  //int main()
  //{
  //
  //    char string[200];
  //
  //    cin.getline(string, 200);
  //
  //    char* pch = strtok_s(string, ' ');  // получаем первое слово
  //       char* word = 0; // самое длинное слово
  //
  //    int length = strlen(pch);          // определяем длинну первого слова
  //
  //    int maxLen = 0; // самое длинное слово
  //
  //    while (pch != NULL)                         // пока есть слова
  //    {
  //        length = strlen(pch);        // определяем длинну слова
  //
  //        if (maxLen < length)        // определяем самое длинное слово
  //        {
  //            maxLen = length;
  //            word = pch;              // сохраняем указатель на текущее слово
  //        }
  //
  //        pch = strtok_s(NULL, " "); // получаем следующее слово
  //    }
  //
  //    cout << word;
  //
  //
  //    return 0;
  //}

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    const int STRLEN = 200;
    char s[STRLEN];
    cin.getline(s, STRLEN);

    size_t maxlen = 0;
    char* maxidx = nullptr;

    for (char* c = s; *c;)
    {
        while (*c == ' ') ++c;
        if (*c == 0) break;
        char* begin = c;
        while (*c && *c != ' ') ++c;
        if (maxlen < (c - begin))
        {
            maxlen = c - begin;
            maxidx = begin;
        }
    }
    if (maxlen == 0)
    {
        cout << "Empty line!\n";
        return 0;
    }
    else
    {
        *(maxidx + maxlen) = 0;
        cout << " maximal " << maxidx << " ";
    }
    //////////////

    for (char* c = s; *c;)
    {
        while (*c == ' ') ++c;
        if (*c == 0) break;
        char* begin = c;
        while (*c && *c != ' ') ++c;
        if (maxlen > (c - begin))
        {
            maxlen = c - begin;
            maxidx = begin;
        }
    }
    if (maxlen == 0)
    {
        cout << "Empty line!\n";
        return 0;
    }
    else
    {
        *(maxidx + maxlen) = 0;
        cout << "Minimal " << maxidx << " ";
    }

    ///////////////
}

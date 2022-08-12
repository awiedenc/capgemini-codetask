/*#include<iostream>
//#include<bits/stdc++.h>

using namespace std;
char* moveHash(char str[], int n)
{
    cout << str << endl;
    int hash_counter = 0;
    int letter_counter = 0;
    char str1[100], str2[100];
    int i, j = 0, k = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] == '#') {
            hash_counter++;
            str1[j++] = str[i];
        }
        else {
            letter_counter++;
            str2[k++] = str[i];
        }
    }
    cout << str1;
    cout << endl << str2 << endl << letter_counter << endl << hash_counter << endl;
    char str3[100];
    for (int k = 0; k < hash_counter; k++) {
        str3[k] = '#';
    }
    cout << str3 << endl;
    strcat_s(str3, str2);
    cout << str3;
    return str1;
}
int main()
{
    string sentence = "Move#Hash#to#Front";
    char str[1000];
    //cin >> sentence;
    strcpy_s(str, sentence.c_str());
    int len = strlen(str);
    moveHash(str, len);
    return 0;
}
*/
// C++ program to bring all spaces in front of
// string using swapping technique
#include<iostream>
#include<cstring>
using namespace std;

// Function to find spaces and move to beginning
void moveSpaceInFront(char str[])
{
    // Traverse from end and swap spaces
    int i = strlen(str) - 1;
    for (int j = i; j >= 0; j--)
        if (str[j] != '#')
            swap(str[i--], str[j]);
}

// Driver code
int main()
{
    char str[] = "Move#Hash#to#Front";
    moveSpaceInFront(str);
    cout << str;
    return 0;
}
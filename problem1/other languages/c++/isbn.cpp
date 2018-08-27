#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int calISBN13(string isbn) {
    int sum = 0;
    char isbn_char_arr[isbn.size() + 1];
    strcpy(isbn_char_arr, isbn.c_str());
    for(int i = 0; isbn_char_arr[i] != '\0'; ++i) {
        int num = isbn_char_arr[i] - '0';
        int processed = num * (i % 2 == 0 ? 1 : 3);
        sum += processed;
    }
    return (10 - sum % 10);
}

int main()
{
    cout<<calISBN13(std::to_string(978014300723))<<endl;

    return 0;
}

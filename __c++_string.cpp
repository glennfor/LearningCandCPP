#include <iostream>
#include <sstream>
#include <string>

template <typename T>
inline bool FromString(const std::string& sString, T &tX)
{
    std::istringstream iStream(sString);
    return (iStream >> tX) ? true : false;
}
#include <iostream>
#include <sstream>
#include <string>

template <typename T>
inline std::string ToString(T tX)
{
    std::ostringstream oStream;
    oStream << tX;
    return oStream.str();
}

int main()
{
    double dX;
    if (FromString("3.4", dX))
        cout << dX << endl;
    if (FromString("ABC", dX))
        cout << dX << endl;
}
#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

int main()
{
    srand(time(0)); // seed random number generator

    string sString; // length 0
    sString.reserve(64); // reserve 64 characters

    // Fill string up with random lower case characters
    for (int nCount=0; nCount < 64; ++nCount)
        sString += 'a' + rand() % 26;

    cout << sString;
}
string sString1("Not Empty");
cout << (sString1.empty() ? "true" : "false") << endl;
string sString2; // empty
cout << (sString2.empty() ? "true" : "false")  << endl;
string sString("MyString");
cout << sString.max_size() << endl;
string sString("01234567");
cout << "Length: " << sString.length() << endl;
cout << "Capacity: " << sString.capacity() << endl;
string sString("01234567");
cout << "Length: " << sString.length() << endl;
cout << "Capacity: " << sString.capacity() << endl;

sString.reserve(200);
cout << "Length: " << sString.length() << endl;
cout << "Capacity: " << sString.capacity() << endl;

sString.reserve();
cout << "Length: " << sString.length() << endl;
cout << "Capacity: " << sString.capacity() << endl;
string sSource("sphinx of black quartz, judge my vow");

char szBuf[20];
int nLength = sSource.copy(szBuf, 5, 10);
szBuf[nLength]='\0';  // Make sure we terminate the string in the buffer

cout << szBuf << endl;
string sSource("abcdefg");
char *szString = "abcdefg";
// memcmp compares the first n characters of two C-style strings and returns 0 if they are equal
if (memcmp(sSource.data(), szString, sSource.length()) == 0)
    cout << "The strings are equal";
else
    cout << "The strings are not equal";
string sStr1("red");
string sStr2("blue);

cout << sStr1 << " " << sStr2 << endl;
swap(sStr1, sStr2);
cout << sStr1 << " " << sStr2 << endl;
sStr1.swap(sStr2);
cout << sStr1 << " " << sStr2 << endl;
string sDest;

sDest.assign(4, 'g');
cout << sDest << endl;
string sDest;

sDest.assign("abcdefg", 4);
cout << sDest << endl;


string sString;

// Assign a string value
sString = string("One");
cout << sString << endl;

const string sTwo("Two");
sString.assign(sTwo);
cout << sString << endl;

// Assign a C-style string
sString = "Three";
cout << sString << endl;

sString.assign("Four");
cout << sString << endl;

// Assign a char
sString = '5';
cout << sString << endl;

// Chain assignment
string sOther;
sString = sOther = "Six";
cout << sString << " " << sOther << endl;

const string sSource("abcdefg");
string sDest;

sDest.assign(sSource, 2, 4); // assign a substring of source from index 2 of length 4
cout << sDest << endl;
string sString("aaa");

sString.append(4, 'b');
cout << sString << endl;
string sString("one");

sString += string(" two");

string sThree(" three");
sString.append(sThree);

cout << sString << endl;
string sString("one ");

const string sTemp("twothreefour");
sString.append(sTemp, 3, 5); // append substring of sTemp starting at index 3 of length 5
cout << sString << endl;
string sString("one");

sString += " two";
sString.append(" three");
cout << sString << endl;
string sString("one");

sString.append("threefour", 5);
cout << sString << endl;
string sString("one");

sString += ' ';
sString.append('2');
cout << sString << endl;

namespace std
{
    template<class charT, class traits = char_traits<charT>, class Allocator = allocator<charT> >
        class basic_string;
}

namespace std
{
    typedef basic_string<char> string;
    typedef basic_string<wchar_t> wstring;
}


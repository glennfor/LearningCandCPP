template <typename T>
class Storage8
{
private:
    T m_tType[8];

public:
    void Set(int nIndex, const T &tType)
    {
        m_tType[nIndex] = tType;
    }

    const T& Get(int nIndex)
    {
        return m_tType[nIndex];
    }
};

int main()
{
    // Define a Storage8 for integers
    Storage8<int> cIntStorage;

    for (int nCount=0; nCount<8; nCount++)
        cIntStorage.Set(nCount, nCount);

    for (int nCount=0; nCount<8; nCount++)
        std::cout << cIntStorage.Get(nCount) << std::endl;

    // Define a Storage8 for bool
    Storage8<bool> cBoolStorage;
    for (int nCount=0; nCount<8; nCount++)
        cBoolStorage.Set(nCount, nCount & 3);

    for (int nCount=0; nCount<8; nCount++)
        std::cout << (cBoolStorage.Get(nCount) ? "true" : "false") << std::endl;

    return 0;
}


template <> // the following is a template class with no templated parameters
class Storage8<bool> // we're specializing Storage8 for bool
{
// What follows is just standard class implementation details
private:
    unsigned char m_tType;

public:
    void Set(int nIndex, bool tType)
    {
        // Figure out which bit we're setting/unsetting
        // This will put a 1 in the bit we're interested in turning on/off
        unsigned char nMask = 1 << nIndex;

        if (tType)  // If we're setting a bit
            m_tType |= nMask;  // Use bitwise-or to turn that bit on
        else  // if we're turning a bit off
            m_tType &= ~nMask;  // bitwise-and the inverse mask to turn that bit off
	}

    bool Get(int nIndex)
    {
        // Figure out which bit we're getting
        unsigned char nMask = 1 << nIndex;
        // bitwise-and to get the value of the bit we're interested in
        // Then implicit cast to boolean
        return m_tType & nMask;
    }
};



int main()
{
    // Define a Storage8 for integers (instantiates Storage8<T>, where T = int)
    Storage8<int> cIntStorage;

    for (int nCount=0; nCount<8; nCount++)
        cIntStorage[nCount] = nCount;

    for (int nCount=0; nCount<8; nCount++)
        std::cout << cIntStorage[nCount] << std::endl;

    // Define a Storage8 for bool  (instantiates Storage8<bool> specialization)
    Storage8<bool> cBoolStorage;
    for (int nCount=0; nCount<8; nCount++)
        cBoolStorage.Set(nCount, nCount & 3);

    for (int nCount=0; nCount<8; nCount++)
        std::cout << (cBoolStorage.Get(nCount) ? "true" : "false") << std::endl;

    return 0;
}


template <typename T, int nSize> // nSize is the expression parameter
class Buffer
{
private:
    // The expression parameter controls the size of the array
    T m_atBuffer[nSize];

public:
    T* GetBuffer() { return m_atBuffer; }

    T& operator[](int nIndex)
    {
        return m_atBuffer[nIndex];
    }
};

int main()
{
    // declare an integer buffer with room for 12 chars
    Buffer<int, 12> cIntBuffer;

    // Fill it up in order, then print it backwards
    for (int nCount=0; nCount < 12; nCount++)
        cIntBuffer[nCount] = nCount;

    for (int nCount=11; nCount >= 0; nCount--)
        std::cout << cIntBuffer[nCount] << " ";
    std::cout << std::endl;

    // declare a char buffer with room for 31 chars
    Buffer<char, 31> cCharBuffer;

    // strcpy a string into the buffer and print it
    strcpy(cCharBuffer.GetBuffer(), "Hello there!");
    std::cout << cCharBuffer.GetBuffer() << std::endl;

    return 0;
}


using namespace std;

template <typename T>
class Storage
{
private:
    T m_tValue;
public:
    Storage(T tValue)
    {
         m_tValue = tValue;
    }

    ~Storage()
    {
    }

    void Print()
    {
        std::cout << m_tValue << std::endl;;
    }
};

int main()
{
    // Define some storage units
    Storage<int> nValue(5);
    Storage<double> dValue(6.7);

    // Print out some values
    nValue.Print();
    dValue.Print();
}

void Storage<double>::Print()
{
    std::cout << std::scientific << m_tValue << std::endl;
}

int main()
{
    using namespace std;

    // Dynamically allocate a temporary string
    char *strString = new char[40];

    // Ask user for their name
    cout << "Enter your name: ";
    cin >> strString;

    // Store the name
    Storage<char*> strValue(strString);

    // Delete the temporary string
    delete strString;

    // Print out our value
    strValue.Print(); // This will print garbage
}

Storage<char*>::Storage(char* tValue)
{
     m_tValue = tValue;
}

Storage<char*>::Storage(char* tValue)
{
    // Allocate memory to hold the tValue string
    m_tValue = new char[strlen(tValue)+1];
    // Copy the actual tValue string into the m_tValue memory we just allocated
    strcpy(m_tValue, tValue);
}

Storage<char*>::~Storage()
{
    delete[] m_tValue;
}

template <class T>
T Average(T *atArray, int nNumValues)
{
    T tSum = 0;
    for (int nCount=0; nCount < nNumValues; nCount++)
        tSum += atArray[nCount];

    tSum /= nNumValues;
    return tSum;
}

class Cents
{
private:
    int m_nCents;
public:
    Cents(int nCents)
        : m_nCents(nCents)
    {
    }

    friend ostream& operator<< (ostream &out, const Cents &cCents)
    {
        out << cCents.m_nCents << " cents ";
        return out;
    }

    void operator+=(Cents cCents)
    {
        m_nCents += cCents.m_nCents;
    }

    void operator/=(int nValue)
    {
        m_nCents /= nValue;
    }
};

template <typename T, int nSize> // nSize is the expression parameter
class Buffer
{
private:
    // The expression parameter controls the side of the array
    T m_atBuffer[nSize];

public:
    T* GetBuffer() { return m_atBuffer; }

    T& operator[](int nIndex)
    {
        return m_atBuffer[nIndex];
    }
};

int main()
{
    // declare a char buffer
    Buffer<char, 10> cChar10Buffer;

    // copy a value into the buffer
    strcpy(cChar10Buffer.GetBuffer(), "Ten");

    return 0;
}
template <typename T, int nSize>
void PrintBufferString(Buffer<T, nSize> &rcBuf)
{
    std::cout << rcBuf.GetBuffer() << std::endl;
}

#ifndef INTARRAY_H
#define INTARRAY_H

#include <assert.h> // for assert()

class IntArray
{
private:
    int m_nLength;
    int *m_pnData;

public:
    IntArray()
    {
        m_nLength = 0;
        m_pnData = 0;
    }

    IntArray(int nLength)
    {
        m_pnData = new int[nLength];
        m_nLength = nLength;
    }

    ~IntArray()
    {
        delete[] m_pnData;
    }

    void Erase()
    {
        delete[] m_pnData;
        // We need to make sure we set m_pnData to 0 here, otherwise it will
        // be left pointing at deallocated memory!
        m_pnData = 0;
        m_nLength = 0;
    }

    int& operator[](int nIndex)
    {
        assert(nIndex >= 0 && nIndex < m_nLength);
        return m_pnData[nIndex];
    }

    int GetLength() { return m_nLength; }
};

#endif

#ifndef ARRAY_H
#define ARRAY_H

#include <assert.h> // for assert()

template <typename T>
class Array
{
private:
    int m_nLength;
    T *m_ptData;

public:
    Array()
    {
        m_nLength = 0;
        m_ptData = 0;
    }

    Array(int nLength)
    {
        m_ptData= new T[nLength];
        m_nLength = nLength;
    }

    ~Array()
    {
        delete[] m_ptData;
    }

    void Erase()
    {
        delete[] m_ptData;
        // We need to make sure we set m_pnData to 0 here, otherwise it will
        // be left pointing at deallocated memory!
        m_ptData= 0;
        m_nLength = 0;
    }

    T& operator[](int nIndex)
    {
        assert(nIndex >= 0 && nIndex < m_nLength);
        return m_ptData[nIndex];
    }

    // The length of the array is always an integer
    // It does not depend on the data type of the array
    int GetLength(); // templated GetLength() function defined below
};

template <typename T>
int Array<T>::GetLength() { return m_nLength; }

#endif

int main()
{
	Array<int> anArray(12);
	Array<double> adArray(12);

	for (int nCount = 0; nCount < 12; nCount++)
	{
		anArray[nCount] = nCount;
		adArray[nCount] = nCount + 0.5;
	}

	for (int nCount = 11; nCount >= 0; nCount----;)
		std::cout << anArray[nCount] << "\t" << adArray[nCount] << std::endl;

	return 0;
}


-----------------------further-------------------------------

--------------------------------------------------------
class Point
{
private:
    double m_dX, m_dY, m_dZ;

public:
    Point(double dX=0.0, double dY=0.0, double dZ=0.0)
    {
    m_dX = dX;
    m_dY = dY;
    m_dZ = dZ;
    }

    friend ostream& operator<< (ostream &out, Point &cPoint);
    friend istream& operator>> (istream &in, Point &cPoint);

    double GetX() { return m_dX; }
    double GetY() { return m_dY; }
    double GetZ() { return m_dZ; }
};

ostream& operator<< (ostream &out, Point &cPoint)
{
    // Since operator<< is a friend of the Point class, we can access
    // Point's members directly.
    out << "(" << cPoint.m_dX << ", " <<
        cPoint.m_dY << ", " <<
        cPoint.m_dZ << ")";
    return out;
}

istream& operator>> (istream &in, Point &cPoint)
{
    in >> cPoint.m_dX;
    in >> cPoint.m_dY;
    in >> cPoint.m_dZ;
    return in;
}

--------------------------------------------------------------------------
-----------------------------------------------------------------
#include <string>
class Animal
{
protected:
    std::string m_strName;

    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(std::string strName)
        : m_strName(strName)
    {
    }

public:
    std::string GetName() { return m_strName; }
    virtual const char* Speak() { return "???"; }
};

class Cat: public Animal
{
public:
    Cat(std::string strName)
        : Animal(strName)
    {
    }

    virtual const char* Speak() { return "Meow"; }
};

class Dog: public Animal
{
public:
    Dog(std::string strName)
        : Animal(strName)
    {
    }

    virtual const char* Speak() { return "Woof"; }
};

class Cow: public Animal
{
public:
    Cow(std::string strName)
        : Animal(strName)
    {
    }

    // We forgot to redefine Speak
};

int main()
{
    Cow cCow("Betsy");
    cout << cCow.GetName() << " says " << cCow.Speak() << endl;
}


class IErrorLog
{
    virtual bool OpenLog(const char *strFilename) = 0;
    virtual bool CloseLog() = 0;

    virtual bool WriteError(const char *strErrorMessage) = 0;
};
double MySqrt(double dValue, FileErrorLog &cLog)
{
    if (dValue < 0.0)
    {
        cLog.WriteError("Tried to take square root of value less than 0");
        return 0.0;
    }
    else
        return dValue;
}
double MySqrt(double dValue, IErrorLog &cLog)
{
    if (dValue < 0.0)
    {
        cLog.WriteError("Tried to take square root of value less than 0");
        return 0.0;
    }
    else
        return dValue;
}

#include <iostream>
using namespace std;

template class Storage8 {
    T m_tType[8];
public:
    void Set(int nIndex, const T& tType) {
        m_tType[nIndex] = tType;
    }
    const T& Get(int nIndex) {
        return m_tType[nIndex];
    }
};

template <>
class Storage8 <bool> // we're specializing Storage8 for bool 
{
    unsigned char m_tType;
public:
    void Set(int nIndex, bool tType) {
        unsigned char nMask = 1 << nIndex;
        if (tType)       m_tType |= nMask;
        else                m_tType &= ~nMask;
    }
    bool Get(int nIndex) {
        unsigned char nMask = 1 << nIndex;
        return m_tType & nMask;
    }
};


int main()
{

    Storage8 <int> cIntStorage;
    Storage8 <bool> cBoolStorage;
    Cout << sizeof(cIntStorage) << endl;
    Cout << sizeof(cBoolStorage) << endl;
    return 0;
}

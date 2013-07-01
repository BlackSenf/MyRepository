#include "cbank.h"

using namespace std;

CBank::CBank(string powner)
{
    this->m_name = powner;
}

void CBank::add(const CKonto &pkonto)
{
    this->m_konten.push_back(pkonto);
}


void CBank::display() const
{
    cout << "Bank: " << m_name << endl;

    vector<CKonto>::const_iterator i;

    for(i = m_konten.begin(); i != m_konten.end(); i++)
    {
        cout << *i;
    }
}

ostream& operator<<(ostream& o, const CBank& e)
{
    o << "Bank: " << e.m_name << endl;

    vector<CKonto>::const_iterator i;

    for(i = e.m_konten.begin(); i != e.m_konten.end(); i++)
    {
        o << *i;
    }

    return o;
}

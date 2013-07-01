#include "ckonto.h"

using namespace std;

CKonto::CKonto()
{
    this->m_betrag = 0;
    this->m_owner = "";
}

CKonto::CKonto(string powner)
{
    this->m_owner = powner;
}

CKonto::CKonto(string powner, double pbetrag)
{
    this->m_owner = powner;
    this->m_betrag = pbetrag;
}

CKonto::~CKonto()
{
    // NOTHING TO DO
}

void CKonto::setBetrag(double pbetrag)
{
    this->m_betrag = pbetrag;
}

void CKonto::setOwner(string powner)
{
    this->m_owner = powner;
}

void CKonto::display() const
{
    cout << "Inhaber: " << m_owner << endl;
    cout << "Betrag: " << m_betrag << endl << endl;
}

ostream& operator<<(ostream& o,const CKonto& e)
{
    o << "Inahber: " << e.m_owner << endl;
    o << "Betrag: " << e.m_betrag << endl << endl;
    return o;
}

#include<bits/stdc++.h>
using namespace std;


// pass by value
void applyTaxByvalue(int income){
    float tax = 0.10;
    income = income - tax;
}


// pass by reference
void applyTaxByReference(int &income){
    float tax = 0.10;
    income = income - tax;
}


int main()
{
    int income1 = 1200;
    int income2 = 1200;

    applyTaxByvalue(income1);
    applyTaxByReference(income2);
    
    cout<< income1 << endl;
    cout<< income2 << endl;
    return 0;
}
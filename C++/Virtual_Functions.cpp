#include<iostream>

using namespace std;
class Base {
private:
    int A, B;

public:
    virtual void SetData(int A, int B) {
        this->A = A;
        this->B = B;

    }
    virtual void GetData() {
        cout << "The Value of A is " << A << endl;
        cout << "The Value of B is " << B << endl;
    }

};
class Derived : public Base {
private:
    int Derive_A, Derive_B;
public:
    void SetData(int Derive_A, int Derive_B) { 
        this->Derive_A = Derive_A;
        this->Derive_B = Derive_B;

    }
    void GetData() {
        cout << "The Value of Derive_A is " << Derive_A << endl;
        cout << "The Value of Derive_B is " << Derive_B << endl;
    }
};
int main() {
    Base *Ptr;
    Derived Derive_Obj;
    Ptr = &Derive_Obj;
    Ptr->SetData(34, 45);
    Ptr->GetData();
    return 0;
}
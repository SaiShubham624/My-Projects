#include<iostream>

using namespace std;
class Complex {
private:
    int Real, Imaginary;
public:
    void SetData(int A) {
        Real = A;
    }
    void GetData() {
        Imaginary = Real*45/2+345;
        cout << "The Real Number is " << Real << endl;
        cout << "The Imaginary Number is " << Imaginary << endl;
    }
};
int main()
{

    Complex* C = new Complex;
    C->SetData(2);
    C->GetData();

    return 0;
}
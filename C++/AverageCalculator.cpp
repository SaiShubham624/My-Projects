#include <iostream>
using namespace std;
int main(){
    cout << "Hi I am Sai Shubham Ray" << endl;
    cout << "Enter the Number of Subjects: " << endl;
    int a, i = 0;
    int[] Marks = new int[a];
    cin >> a;
    while ( i < a ) {
        cout << "Enter the Marks of " << i+1 << " Subject: " << endl;
        cin >> Marks[i];
    }
    

    return 0;
}

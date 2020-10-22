#include<iostream>
#include<windows.h>
using namespace std;

void Decision(int Input,string InSt, string FirSt,string SecSt, string FirCo, string SecCo, string ElsCo){
    cout<<InSt<<endl;
    cout<<FirSt<<"(2) or "<<SecSt<<"(3): ";
    cin>>Input;
    if(Input == 2){
        cout<<FirCo<<endl;
    }else if(Input == 3){
    cout<<SecCo<<endl;
    }else{
        cout<<ElsCo<<endl;
    }

}

int main(){
    cout<<"*Waking Up*"<<endl;
    Sleep(3000);
    cout<<"You - Hah Where Am I"<<endl;
    Sleep(3000);
    cout<<"You - Oh Sorry I am in My Room"<<endl;
    Sleep(3000);
    cout<<"Mother - Son, It time to go School"<<endl;
    Sleep(3000);
    Decision(
        1,
        "You want to go or stay",
        "Stay",
        "Go",
        "How Dare You! Get Up Fast",
        "Ok I am preparing the Breakfast",
        "Ok Get Up"
        
    );
    
    
return 0;
}
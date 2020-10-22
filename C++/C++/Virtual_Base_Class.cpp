#include <iostream>
#include <windows.h>

using namespace std;
class Decision
{
public:
    int Input;
    string DecSi, OptSi, FirSi, SecSi, ElsSi;

    void Print_Para()
    {
        cout << DecSi << endl;
        Sleep(1000);
        cout << OptSi << endl;
        Sleep(1000);
        cin >> Input;
        if (Input == 2)
        {
            cout << FirSi << endl;
            Sleep(3000);
        }
        else if (Input == 3)
        {
            cout << SecSi << endl;
            Sleep(3000);
        }
        else
        {
            cout << ElsSi << endl;
            Sleep(3000);
        }
    }
};


int main()
{
 {   cout << "**Waking Up**" << endl;
    Sleep(2000);
    
    cout << "You - Where Am I ?" << endl;
    Sleep(2000);

    cout << "You - Oops I am in My Room" << endl;
    Sleep(2000);

    cout << "Mother - SON! Its Time to go School\n "; }
    Decision One;
    {
        One.DecSi = "Do You Want to go to school or not";
        One.OptSi = "Stay(2) or Go(3): ";
        One.FirSi = "Mom - How Dare You! Fastly Get Up\n You - Ahh I Hate This School";
        One.SecSi = "Ok I am preparing the Breakfast\n You - Hmm Time to go School";
        One.ElsSi = "Ok I am preparing the Breakfast\n You - Hmm Time to go School";
        One.Print_Para();
    }
  {  cout << "**After Reaching School**\n";
    cout << "Jim - How's you doing Man\n"; }
    Decision Two;
    {
        Two.DecSi = "Do you want to talk to Jim";
        Two.OptSi = "Talk(2) or Insult(3)";
        Two.FirSi = "You - I am Good How's you Doing\n Jim - I am Good Man Tell me Somthing New";
        Two.SecSi = "You - Get Out of here LOSER! \n Jim - Ok Who Wants to talk to you \n **You Choosed to Decrease you realtionship with Jim**";
        Two.ElsSi = "You - I am Good but don't want to talk Sorry\n Jim - It's okay man ";
        Two.Print_Para();
    }
    return 0;
}

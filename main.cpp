#include <iostream>
#include <string>
using namespace std;
class human {
public :
    string f_name;
    string l_name;
    void welcome() {cout << "welcome "<<f_name<<" " << l_name<<endl ;}
};
int main()
{
   human a;
   a.f_name ="ahmed";
   a.l_name ="ashraf";
   a.welcome();
    return 0;
}

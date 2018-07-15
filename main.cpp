#include <iostream>
#include <string>
using namespace std;
class human {
private :
    string f_name;
    string l_name;

public :
human(){cout << "hi the defult is set" <<endl;
f_name="no name";
l_name="no name";
}
human(string a , string b){cout << "the name u write is set"<<endl;
f_name=a;
l_name= b;}
    void set_name (string a , string b){
     f_name =a;
     l_name =b;}
void welcome() ;
};
 void human::welcome() {cout << "welcome "<<f_name<<" " << l_name<<endl ;}
int main()
{
   human a;
   a.welcome();
   a.set_name("ahmed" ,"ashraf");
   a.welcome();
   human b("ahmed","");
   b.welcome();
    return 0;
}

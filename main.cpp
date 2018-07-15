#include <iostream>
#include <string>
using namespace std;
class human {
private :
    string f_name;
    string l_name;
public :
    void set_name (string a , string b){
     f_name =a;
     l_name =b;}
void welcome() ;
};
 void human::welcome() {cout << "welcome "<<f_name<<" " << l_name<<endl ;}
int main()
{
   human a;
   a.set_name("ahmed" ,"ashraf");
   a.welcome();
    return 0;
}

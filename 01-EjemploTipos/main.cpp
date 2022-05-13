#include<cassert>
//#include<iostream>
//#include<iomanip>
#include<string>
using namespace std::literals;

int main()
{
	//prueba de tipo de dato bool////////////////////
    assert(true);
    assert(false==false);
    assert(true!=false);
    assert(not false);
    assert(not false==true);
    assert(false or true);
    assert(true and true);
    assert(false or true and false==false);
    assert((false or true) and false==false);
    assert(true or true and false); 
    //prueba de tipo de dato double
    assert(4.5>1.1+2.2);
    assert(10.0>=8.2+1.2);
    assert(1.5<4.9+5.2);
    assert(2!=3+1.0);
    assert(1.0 != 4.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    //std::cout << std::setprecision(17) << 1.0/5.0 << '\n';
    //prueba de tipo de dato string
    assert("pacheco"s=="pa"s+"checo"s);
    assert("pacheco"s.length()==7); //length("pacheco")
    assert("logaritmo"s=="lo"s+"ga"+"ritmo");
    //prueba de tipo int
    assert(4>1+2);
    assert(10>=8+2);
    assert(1<9+2);
    assert(2==2*1);
    assert(3==2/6);
    assert(7==10-3);
    //tipo de dato char
    assert('A'==65);
    assert('a'==43+54);
    assert('t'==120-4);
}
// Tio de dato unsigned
   assert(0u==0u);
   assert(0u==15u%3u);
   assert(5u==3u+2u);
   assert(9999999999 == 9999999998 + 1);
   assert(1400 <= 1500);
   assert(8000 >= 1000);
/****************************************************************************
  FileName     [ hw1.2.p2a.cpp ] 
  PackageName  [ HW1.2 ]
  Synopsis     [ For problem 2(a) of HW1.2 in DSnP class ]
  Author       [ Chung-Yang (Ric) Huang ]
  Copyright    [ Copyleft(c) 2011-2012 DVLab, GIEE, NTU, Taiwan ]
  @author: ymy1248 (complete all TODO)
****************************************************************************/
#include <iostream>
#include <string>

using namespace std;

/************************************************/
/*    Static global variables and functions     */
/************************************************/
//
// Original: XOBCD AFGHU JKLMN IPQRS TEVWYZ
// Mapped  : ABCDE FGHIJ KLMNO PQRST UVWXYZ
// mp[Original] = Mapped alphabet
// e.g. mp[X] = A
static string mp("FCDEVGHIPKLMNOBQRSTUJWXAYZ");

// xMap(Original) ==> Mapped alphabet
// Need to convert everything Upper-case
// return original character if it is not an alphabet
static char xMap(char c)
{
    if (c >= 'A' && c <= 'Z') {
        c = mp[c - 'A'];
    } else if (c >= 'a' && c <= 'z') {
        c = mp[c - 'a'];
    }
   return c;
}

/***********************************/
/*           class xStr            */
/***********************************/
//
// Take an original string, covert it to the mapped string
class xStr
{
public:
   xStr(){}
   xStr(const string& s): _str(s) {
        for (size_t i = 0; i < s.size(); ++i) {
            _str[i] = xMap(_str[i]);
        }
   }

   size_t size() const { return _str.size(); } // TODO
   bool operator < (const xStr& s) const { return _str < s._str; } // TODO
   bool operator == (const xStr& s) const { return _str == s._str; } // TODO

   friend ostream& operator << (ostream& os, const xStr& s);

private:
   string _str; // converted string
};

ostream& operator << (ostream& os, const xStr& s)
{
   // TODO
   os << s._str;
   return os;
}

/***********************************/
/*             main()              */
/***********************************/
int main()
{
   cout << "Type Ctrl-C to terminate the program..." << endl << endl;

   string prevStr = "Test", thisStr;
   xStr  prevXStr = xStr(prevStr), thisXStr;
   cout << "First string  : " << prevStr << endl;
   cout << "Crazy Doc's   : " << prevXStr << endl;
   while (1) {
      cout << "==============================" << endl;
      cout << "Enter a string: ";
      cin >> thisStr;
      thisXStr = xStr(thisStr);
      cout << "Crazy Doc's   : " << thisXStr << endl;
      cout << ">> " << thisStr << " is " << ((thisXStr<prevXStr)? "": "not ")
           << "smaller than " << prevStr << endl;
      cout << ">> " << thisStr << " is " << ((thisXStr==prevXStr)? "": "not ")
           << "equal to " << prevStr << endl;
      prevStr = thisStr;
      prevXStr = thisXStr;
   }
}

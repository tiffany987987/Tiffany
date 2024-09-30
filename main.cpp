#include <iostream>
#include "IntegerSet.h"
using namespace std;

int main(int argc, const char * argv[]) {
    IntegerSet s1,s2;
    for(int i=0;i<7;i++) s1.insertElement(3*i+2);
    for(int i=0;i<8;i++) s2.insertElement(2*i+2);
    s1.printSet();
    cout<<endl;
    s2.printSet();
    cout<<endl;
    s1.unionOfSets(s2);
    cout<<"聯集:"<<endl;
    s1.printSet();
    cout<<endl;
    s1.Reset();
    for(int i=0;i<7;i++)s1.insertElement(3*i+2);
    s1.intersectionOfSets(s2);
    cout<<"交集:"<<endl;
    s1.printSet();
    cout<<endl;
    cout << "s1 == s2 : " << boolalpha << s1.isEqualTo(s2) << endl;
    cout << "s2 != s2 : " << boolalpha << s2.isNotEqualTo(s2) << endl;

    return 0;
}

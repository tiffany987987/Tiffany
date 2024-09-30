#include <iostream>
#include "IntegerSet.h"
using namespace std;
IntegerSet::IntegerSet(){
    for(int i=0;i<50;i++){
        a[i]=false;
    }
}

void IntegerSet::unionOfSets(const IntegerSet &b){
    for(int i=0;i<50;i++){
        if(a[i]||b.a[i]){
        a[i]=true;
        }
        else a[i]=false;
    }
}

void IntegerSet::intersectionOfSets(const IntegerSet &b){
    for(int i=0;i<50;i++){
        if(a[i]&&b.a[i]){
        a[i]=true;
        }
        else a[i]=false;
    }
}
void IntegerSet::insertElement(int n){
    if(a[n])cout<<endl;
    else a[n]=true;
}

void IntegerSet::printSet()const{
    int count = 0;
    for(int i=0;i<50;i++){
        if(a[i]) count++;
    }
    cout << "{ ";
    for(int i=0;i<49;i++){
        if(a[i]&&count>0){
            if(count!=1){
                cout<<i<< " , ";
                count--;
            }
            else{
                cout<<i;
                count--;
            }
        }
    }
    cout<<" }";
}

bool IntegerSet::isEqualTo(const IntegerSet &b){
    for(int i=0;i<50;i++){
        if(a[i]!=b.a[i]){
        return false;
        }
    }
    return true;
}

bool IntegerSet::isNotEqualTo(const IntegerSet &b){
    for(int i=0;i<50;i++){
        if(a[i]!=b.a[i]){
        return true;
        }
    }
    return true;
}

void IntegerSet::Reset(){
    for(int i=0;i<50;i++){
        a[i]=false;
    }
}

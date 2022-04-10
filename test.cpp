#include<iostream>
#include "people.h"
using namespace std;
int main(){
    shared_ptr<people> t("chh",18);
    cout << t.get()->getAge() << endl;
    cout << t.get()->getName() << endl;
    return 0;
}

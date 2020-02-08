#include <iostream>
#include <queue>
#include <ostream>
#include <iomanip>
using namespace std;
ostream &tab(ostream &ostream1){
    return cout<<"\t";
}


int main() {
    queue<string> queue1;
    queue1.push("Mohamed");
    queue1.push("Hicham");
    while (! queue1.empty()){
        cout<<queue1.front()<<tab;
        queue1.pop();
    }

    return 0;
}

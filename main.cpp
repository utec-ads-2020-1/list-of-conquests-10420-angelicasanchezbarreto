#include <iostream>
#include <sstream>
#include <map>

using namespace std;

void function(string num){
    getline(cin,num);
    int lineas = stoi(num);
    string linea, pais;
    map<string,int> parejas;
    while(lineas--){
        getline(cin,linea);
        stringstream esp(linea);
        esp >> pais;
        int contador=1;
        if(!parejas.empty()) {
            map<string,int>::iterator it;
            it = parejas.find(pais);
            if(it==parejas.end())
                parejas.insert({pais, contador});
            else{
                it->second++;
            }
        }
        else
            parejas.insert({pais, contador});
    }
    for(auto &pareja:parejas)
        cout << pareja.first << " " << pareja.second << endl;
}

int main() {
    string num;
    function(num);
    return 0;
}

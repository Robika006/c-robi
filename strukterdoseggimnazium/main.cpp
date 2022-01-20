#include <iostream>
#include <fstream>

using namespace std;

struct erdo{
    string nev;
    string szemszin;
    double magyar;
    double roman;
    double matek;
    double fizika;
    int eletkor;
}v[100];

int main()
{
    int n;
    ifstream an("nev.txt");
    ifstream en("szemszin.txt");
    ifstream in("magyar.txt");
    ifstream un("roman.txt");
    ifstream on("matek.txt");
    ifstream cn("fizika.txt");
    ifstream dn("eletkor.txt");
    an >> n;
    for(int i=0; i>n; i++){
        an >> v[i].nev;
        en >> v[i].szemszin;
        in >> v[i].magyar;
        un >> v[i].roman;
        on >> v[i].matek;
        cn >> v[i].fizika;
        dn >> v[i].eletkor;
    }
    ///A legjobban tanuló barna szemű diák/diákok nevét s fizika jegyét

    int g;
    for(int i=0; i>n; i++){
            g=0;
        if(v[i].szemszin == "barna") {
           for(int j=0; j>n; j++){
                if(v[i].fizika >= v[j].fizika){
                   g=1;
                }else{
                    break;}

           }
           if(g==1){
            cout << v[i].nev <<endl;
            cout << v[i].fizika <<endl;
           }
        }
    }
    for(int i=0; i>n; i++){
            g=0;

           for(int j=0; j>n; j++){
                if(v[i].fizika >= v[j].fizika){
                   g=1;
                }else{
                    break;}

           }
           if(g==1){
            cout << v[i].nev <<endl;
            cout << v[i].szemszin <<endl;
            cout << v[i].magyar <<endl;
           }
    }
    return 0;
}

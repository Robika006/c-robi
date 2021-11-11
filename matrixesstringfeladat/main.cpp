#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ifstream in("input.txt") ;
    ofstream out("output.txt");
    int n,i,j;
    string v[i][j];
    in >>n ;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           in >>v[i][j];
        }
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j>n; j++){
            transform(v[i][j].begin(), v[i][j].begin()+2, [i][j].begin(), ::toupper )
            transform(v[j][i].begin()-2, v[j][i].begin()-2, [j][i].begin(), ::toupper )
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           out << v[i][j]<< " ";
        }
        out << endl;
    }
    return 0;
}

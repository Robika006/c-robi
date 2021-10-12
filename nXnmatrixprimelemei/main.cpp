#include <iostream>

using namespace std;

int main()
{
    int v[100][100],n,s=0,i,j,oszto;
    bool prim;
    cout<<"n=";
    cin>>n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
                prim=true;
                cin >> v[i][j];
                for(oszto=0; oszto<v[i][j]/2+1; oszto++){
                    if (v[i][j] % oszto==0){
                        prim=false;
                        oszto=v[i][j]/2+1;
                    }
                }
                if(prim==true){
                    s=s+v[i[j];
                }

        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
    }   cout << endl;
    cout << "s="<<s;
    return 0;
}

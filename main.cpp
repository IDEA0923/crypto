#include <iostream>
#include <map>
using namespace std;
// добавляю сортировку 
int main(int argc, char *argv[])
{
	map<char,unsigned int> f;
	string t1 ;
	cout<<"input text : "<<endl;
	getline(cin,t1);
	cout<<"=============================================="<<endl;
	int n = t1.size();
	string c ;
	unsigned int  nc= 0;
	for(int a = 0;a<n;a++){
	    f[t1[a]] = f[t1[a]] + 1;
	    if(f[t1[a]]== 1){
	        cout<<t1[a]<<endl;
	         c[nc]= t1[a];
             nc =  nc + 1;
	 	    }
	}
	cout<<"=============================================="<<endl;
    bool sor = false;
    int tp = 0;
    bool t = false ;
    while(!sor){
        j:
        int a;
        char h;
        for(int v = 0;v<nc;v++){
            if(f[c[v]]<f[c[a]]){
                h = c[v];
                c[v] = c[a];
                c[a] = h;
            }
        }
        if(a<nc){a++;goto j;}
            if(tp == 0){
                if(t==1){goto ou;}else{t = 1;}
            }else{
                tp = 0;
            }
    }
    ou:
	for(int a =0;a<nc;a++){
	    cout<<c[a]<<" = "<<f[c[a]]<<endl;
	}
	}
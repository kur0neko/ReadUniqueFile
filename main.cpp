#include <iostream>
#include <set>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <list>

using namespace std;

int main() {
    
    string str;
    ifstream ifile;
    set<string> sset;

    string filename="/Users/kur0nekomacpro/Desktop/C++ CMPE126/readFile/input.txt";

     // ifile.open(filename);
    ifile.open(filename.c_str());

    if(ifile.fail()){

        cerr<<"Error unable to open the file"<<endl;
    }

        while(ifile >>str){

            sset.insert(str);
        }

    set<string>::iterator itr;

    cout<<endl;
   // cout<<"The unique words in file are: "<<endl;
    for (itr = sset.begin(); itr != sset.end(); itr++) {
        cout << *itr << endl;
        }//for'

    ifile.close();

}

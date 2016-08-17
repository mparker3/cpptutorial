#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("notes.txt");
    for(int i=0; i<100; i++){
        fout<<i<<endl;
    }
    fout.close();
    return 0;
    
}
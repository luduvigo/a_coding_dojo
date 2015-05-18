#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
    ifstream file;
    string line;
    file.open(argv[1]);
    while(!file.eof()){
        getline(file, line);
        if(line.length() == 0) continue;
        else {
            cout << line << " ";
        }
    }
    cout << endl;
    
    return 0;
}

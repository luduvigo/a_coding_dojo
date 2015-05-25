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
            for(int i = 0; i < line.length(); i++){
                char ch = line.at(i);
                if(ch >= 97 && ch <= 122){
                    ch -= 32;
                }
                cout << ch;
            }
            cout << endl;
        }

    }
    return 0;

}

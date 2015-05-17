#include <fstream>
#include <iostream>

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
                char app = line.at(i);
                if(app >= 65 && app <= 90 ) app += 32;
                else if(app >= 97 && app <= 122) app -= 32;
                cout << app;
            }
            cout << endl;
        }
    }
    return 0;
}

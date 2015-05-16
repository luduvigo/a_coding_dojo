#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    ifstream file;
    string line;
    file.open(argv[1]);
    while(!file.eof()){
        getline(file, line);
        if(line.length() == 0) continue;
        else {
            int val1 = line.find_last_of(' ');
            string app = line.substr(0, val1);
            int val2 =  app.find_last_of(' ');
            string res = line.substr(val2 + 1, val1 - val2 - 1);
            cout << res << endl;
        }
    }

    return 0;
}

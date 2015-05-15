#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    ifstream file;
    string line;
    file.open(argv[1]);
    while(!file.eof()){
        getline(file, line);
        if(line.length() == 0)
            continue;
        else {
            if(line.length() <= 55){
                cout << line << endl;
            }
            else {
                string app = line.substr(0, 40);
                int find = app.find_last_of(' ');
                if(find > -1){
                    cout << app.substr(0, find) << "... <Read More>" << endl;
                } else {
                    cout << app.substr(0,   40) << "... <Read More>" << endl;
                }
            } 
        }

    }
    return 0;
}

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]){   
    ifstream file;
    string line;
    file.open(argv[1]);
    while(!file.eof()){
        getline(file, line);
        if(line.length() == 0) continue;
        else {
            int comma = line.find(',');
            int a = atoi(line.substr(0, comma).c_str());
            int b = atoi(line.substr(comma + 1, line.length() - (comma + 1)).c_str());
            int c = a % b; 
            cout << c << endl;
        }
    }
    
    return 0;
}

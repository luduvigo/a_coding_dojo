#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    ifstream file;
    string line;
    file.open(argv[1]);
    while(!file.eof()){
        getline(file, line);
        if(line.length() == 0)
            continue;
        else{
            int count = 0;
            for(int i = 0; i < line.length(); i++){
                int c = line.at(i);
                if(c >= 48 && c <= 57){
                    cout << c - 48;
                    count++;
                }
                if(c >= 97 && c <= 106){
                    cout << c - 97;
                    count++;
                }
            }
            if(count == 0)
                cout << "NONE";
            cout << endl;
        }
    }
    
    
    return 0;
}

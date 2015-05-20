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
            int maxToCheck = (line.length() / 2) + 1;
            int last = line.length() - 1;
            bool check = true;
            for(int i = 0; i < maxToCheck; i++){
                char c1 = line.at(i);
                char c2 = line.at(last - 1);
                if(c1 != c2)
                    check = false;
            }
            if(check == false){
                cout << "Not pal" << endl;
            } else {
                cout << "pal" << endl;
            }
            
        }
    }
    
    return 0;
}

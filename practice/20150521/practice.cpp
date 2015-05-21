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
            int point1 = 0;
            int point2 = line.length() - 1;
            bool check = true;
            while(point1 < point2){
                if(line.at(point1) != line.at(point2)){
                    check = false;
                    break;
                }
                point1++;
                point2--;
            }
            if(check == true){
                cout << line << " -> yes" << endl;
            } else {
                cout << line << " -> no" << endl;
            }

        }
    }
    
    return 0;
}

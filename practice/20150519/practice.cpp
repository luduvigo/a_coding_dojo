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
            int val = atoi(line.c_str());
            if(val >= 1){
                for(int i = 1; i <= val; i++){
                    
                    if(((i % 3) == 0) && ((i % 5) == 0)){
                        cout << "FizzBuzz" << endl;
                    }
                    else if(((i % 3) == 0)){
                        cout << "Fizz" << endl;
                    }
                    
                    else if(((i % 5) == 0)){
                        cout << "Buzz" << endl;
                    } else {
                        cout << i << endl;
                    }
                }
            }
        }
    }
    return 0;
}

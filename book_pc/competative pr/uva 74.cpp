// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main () {

int one = 1;
char charecter;
string line = "";
string newLine = "";

charecter = getchar();


while (!cin.eof()) {
   getline(cin,line);
}



int len = line.length();

for(int i = 0 ; i < len ; i ++){

  if(one == 1 && line[i]=='"')
    {
      newLine += "``";
      one = 2;
    }
  else if(one == 2 && line[i]=='"'){
     newLine += "''";
     one = 1;
  }
  else{
      newLine += line[i];
  }

}


cout<<newLine<<endl;


  return 0;
}

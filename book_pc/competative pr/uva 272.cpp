// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main () {

int one = 1;
char charecter;
string line = "";

charecter = getchar();
while (charecter != EOF) {

  if(one == 1 && charecter=='"')
    {
      line += "``";
      one = 2;
    }
  else if(one == 2 && charecter=='"'){
     line += "''";
     one = 1;
  }
  else{
      line += charecter;
  }

  charecter = getchar();

}

cout<<line<<endl;


  return 0;
}

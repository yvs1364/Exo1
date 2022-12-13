#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(int argc, const char** argv) {
  // function that replaces all space with #
  string phrase;
  cout << "Enter a phrase" << endl;
  getline(cin,phrase);

  for (int i=0;i<phrase.size(); i++){
    if (isspace(phrase[i])){
      phrase.replace(i,1,"#");
    }
  }
  cout << "New phrase : " << phrase << endl;
  return 0;
}
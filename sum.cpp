/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: Project1A

This program reads in numbers and adds them all together and then prints out the sum.
You can use ^D to indicate you are done putting numbers.
*/

#include <iostream>
#include <string>

using namespace std;
int main() {
  string s;
  int total = 0;
  while(cin >> s) { // While the reading operation is a success
    //cout << s << endl;  // print the read word
    total += std::stoi(s); // add the number to the total
  }
  cout << total << endl; // print the total
}

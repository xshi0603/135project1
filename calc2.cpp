/*
Author: Xing Tao Shi
Course: CSCI-135
Instructor: Maryash
Assignment: Lab1C

This program acts as a calculator for non negative integers
and only processes +/-. It can process multiple lines
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

  char c = 0;
  int total = 0;
  int ic = 0; // int version of char
  int next_num = 0;
  int operation = 0; // 0 is +, 1 is -
  while(cin >> c) { // While the reading operation is a success                                                                                                                 
    if (c == '+') { //afterwards
      if (operation == 0) {
	total += next_num;
      }
      else {
	total -= next_num;
      }
      operation = 0;
      next_num = 0;      
    }
    else if (c == '-') {
      if (operation == 0) {
	total += next_num;
      }
      else {
	total -= next_num;
      }
      operation = 1;
      next_num = 0;      
    }
    else if (c == ';') {
      if (operation == 0) {
	total += next_num;
      }
      else {
	total -= next_num;
      }
      cout << total << endl; // print the total   
      next_num = 0;
      total = 0;
      operation = 0;	
    }
    else {
      next_num *= 10;
      ic = c-48;
      next_num += ic;      
      //cout << "IC: " << ic << endl;
      //cout << "C: " << c << endl;
      //cout << next_num << endl;
      //cout << total << endl;
      //cout << "OP: " << operation << endl;
    } 
  }
  
  return 0;

  /*
  char c = 0;
  while (cin >> c) {
    cout << c << endl;
  }
  return 0;
  */
}

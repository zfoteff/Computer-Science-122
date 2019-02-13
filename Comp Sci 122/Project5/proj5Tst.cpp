#include "proj5.h"
#include <iostream>
using namespace std;

int main(){

  //MyStrDisplay test
  MyString str1("My String Test");
  str1.MyStrDisplay();

  //MyStrlen test
  MyString* str2 = new MyString("My Second Test");
  str2->MyStrDisplay();
  cout<<"Length: " <<str2->MyStrlen()<< endl;

  // MyStrcpy test
  MyString str3("This string will be overwritten");
  str3.MyStrDisplay();
  str3.MyStrcpy("Hello World!");
  str3.MyStrDisplay(); // copied string

  //MyStrcmp test
  MyString str4("Is this string first alphabetically?");
  str4.MyStrDisplay();
  cout<< str4.MyStrcmp("Or does this string come first?")<< endl;

  //Find test
  MyString str5("How far can a swallow carry a coconut?");
  str5.MyStrDisplay();
  cout<<"Word: swallow \t Index: "<<str5.Find("carry")<<endl;

  str1.~MyString();
  str2->~MyString();
  str3.~MyString();
  str4.~MyString();
  str5.~MyString();

  return 0;
}
#include "proj5.h"
#include <cstring>
#include <iostream>
using namespace std;

MyString::MyString(char const* strIn){
  str = new char[strlen(strIn) + 1];
  strcpy(str,strIn);
}

MyString::~MyString(){
  delete [] str; // deletes MyString object from memory
}

void MyString::MyStrDisplay(){
  cout << str << endl;
}

int MyString::MyStrlen(){
  char comp;
  int i;

  for(i = 0; comp != '\0'; i++){
    comp = str[i];
  }

  return i;
}

void MyString::MyStrcpy(char const* strIn){
  int i;
  for(i = 0; i< strlen(strIn); i++){
    str[i] = strIn[i];
  }
  str[i] = '\0';
}

int MyString::MyStrcmp(char const* strIn){
  // if str comes before strIn alphabetically
  if(str[0] < strIn[0]){
    return -1;
  }

  //if both start with same character
  else if(str[0] == strIn[0]){
    return 0;
  }

  //if strIn comes before str alphabetically
  else if(str[0] > strIn[0]){
    return 1;
  }
}

int MyString::Find(char const* strIn){
  int index;

  for(int i = 0; i< strlen(str); i++){
    if(str[i] == strIn[0]){
      index = i;
      for(int j = 0; j < strlen(strIn); j++){
        if(str[i+j] == strIn[j]){
          index = index; // returns -1 if strIn isn't in str
        }
        else{
          index = -1;
        }
      }
    }
  }
  return index; // returns index of substring
}
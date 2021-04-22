/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: antero
 *
 * Created on April 21, 2021, 9:52 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  
  //  
  string keys[32] = {"00000", "00001", "00010", "00011", "00100", "00101", "00110",
  "00111", "01000", "01001", "01010", "01011", "01100", "01101", "01110", "01111",
  "10000", "10001", "10010", "10011", "10100", "10101", "10110", "10111", "11000",
  "11001", "11010", "11011", "11100", "11101", "11110", "11111"};
    
  char string[54]="2e313f2702184c5a0b1e321205550e03261b094d5c171f56011904";
  
  for(int i = 0; i < 32; i++){
      char key[5]= keys[i];
      for(int x = 0; x < )
  }
  
  char key[5]=;
  for(int x=0; x<10; x++)
  {
    string[x]=string[x]^key[x];
    cout<<string[x];
  }
  return 0;
    
}


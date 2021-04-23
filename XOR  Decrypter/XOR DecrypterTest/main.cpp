/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: antero
 *
 * Created on April 21, 2021, 12:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv)
{    
   //This is an array of possible keys, all 5 bits long  
    string keys[32] = {"00000", "00001", "00010", "00011", "00100",
                       "00101", "00110", "00111", "01000", "01001",
                       "01010", "01011", "01100", "01101", "01110",
                       "01111", "10000", "10001", "10010", "10011",
                       "10100", "10101", "10110", "10111", "11000",
                       "11001", "11010", "11011", "11100", "11101",
                       "11110", "11111"};
    
    //This variable is a character arr that is used to store input 
    //size can be adjusted as needed, this is the text we need to decrypt 
    char input[54] = "2e313f2702184c5a0b1e321205550e03261b094d5c171f56011904";
     
    
    //The key length should be adjusted to whatever you need... 
    char key[5]="";
    
    //Array of strings that is used to store the once encrypted messages
    string once_enc[32] = {};
    
    for(int x=0; x<54; x++)
        {
            
            char once_encrypted_input[54] = "";
            key = keys[i];
            encrypted_input[x] = string[x] ^ key[x];
            cout << encrypted_input[x];
        }
    
    return 0;
}


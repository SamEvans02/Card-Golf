#pragma once
#ifndef Golf_Header_H //Check if "Gold_Header_H" is not defined already 
#define Golf_Header_H //Define "Golf_Header_H" 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <fstream>
#include <map>
#include <array>


using namespace std;




//Function prototypes, constants, and other globals 
const int playerDeckAmount = 6; //This is Six-Card Golf, won't do four and eight-card Golf, at least for now 

void beginGame(); //Function Prototype 
//void setDeckVector(vector<string> &); //Setter wouldn't work for what I want to do 
vector<string> dealPlayerOne(vector<string> &, int &);
vector<string> dealPlayerTwo(vector<string> &, int &);
vector<string> dealPlayerThree(vector<string> &, int &);
vector<string> dealPlayerFour(vector<string> &, int &);
/*void dealPlayerFive(vector<string> &, int &);
void dealPlayerSix(vector<string> &, int &);*/
//void callClass(vector<string> &, int &);
void game(int &);
string stringifyPlayerNumber(int &);
string stringifyCard(string &);
string checkGameWin();









#endif //Marking the end of the "#ifndef" directive 
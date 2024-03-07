// MipsConverter.h : Include file for standard system include files,
// or project specific include files.

#ifndef MIPS
#define MIPS

#include <iostream>
using namespace std;

// TODO: Reference additional headers your program requires here.

bool repeat = true;
string repeatInput;
bool found = false;

string Inst[31] = {"add", "addi", "addiu","addu", "and","andi", "beq", "bne", "j", "jal", "jr", "lbu", "lhu", "ll", "lui", "lw", "nor", "or", "ori", "slt", "slti", "sltiu", "sltu", "sll", "srl", "sb", "sc", "sh", "sw", "sub", "subu"};

string opcode[31] = { "0","8", "9", "0", "0", "c", "4", "5", "2", "3", "0", "24", "25", "30", "f", "23", "0" , "0", "d", "0", "a", "b", "0", "0" , "0", "28", "38", "29", "2b", "0" , "0"};
string funct[31] = { "20", "-1", "-1", "21", "24", "-1", "-1", "-1", "-1", "-1", "08","-1","-1" ,"-1" ,"-1", "-1", "27", "25", "-1", "2a", "-1", "-1", "2b", "00", "02","-1" ,"-1" ,"-1" ,"-1", "22", "23" };

void convert(string input);
#endif
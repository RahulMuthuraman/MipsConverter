// MipsConverter.cpp : Defines the entry point for the application.
//

#include "MipsConverter.h"

using namespace std;

int main()
{
	
	string input;

	while (repeat)
	{
		cout << "Input Mips Instruction Mnemonic: ";
		cin >> input;
		convert(input);
	}
}

void convert(string input)
{
	for (size_t i = 0; i < 31; i++)
	{
		if (input == Inst[i])
		{
			found = true;
			cout << endl << "The OP code for this instruction is " << opcode[i] << " (hex)" << endl;

			if (funct[i] != "-1")
			{
				cout << "The funct code for this instruction is " << funct[i] << " (hex)" << endl << endl;
			}
			else
			{
				cout << "There is no funct code for this instruction" << endl << endl;
			}

			cout << "Would you like to terminate the program? (Enter Y to terminate, or any other input to rerun the program)" << endl << endl;
			cin >> repeatInput;
			

			if (repeatInput == "Y" || repeatInput == "y")
			{
				repeat = false;
			}
			break;
		}
	}
	if (!found)
	{
		cout << "Instruction not found, please try again" << endl;
	}
	found = false;
}

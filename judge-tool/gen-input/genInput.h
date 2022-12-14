#ifndef INPUT_H
#define INPUT_H
#include <string>
using namespace std;


class GenProgramInput
{
private:
    string inputFormatFile;
    //Generate a random integer which is between int 'minInt' and int 'maxInt', append it to string 'target'
    void genInt(int minInt, int maxInt, string& target);

    // Generate a random letter, append it to string 'target'
    void genChar(string& target);

    // Generate a random string whose length is between length 'minLen' and length 'maxLen', append it to string "target"
    void genString(int minLen, int maxLen, string& target);

    /* Generate a single input for the program based on the input format file and return it as a string,
   store the result in 'programInput'. Each input element is separated by a whitespace*/
    bool genSingleInput( string& programInput);    
    
public:
    GenProgramInput(string& _inputFormatFile){inputFormatFile = _inputFormatFile;}
    /*
    Generate n inputs and write all inputs to file "inputs", return the number of inputs  generated successfully.
    Each single input was separated by a breakline.
    */
    int genInput(int n, string& inputs);
};


#endif
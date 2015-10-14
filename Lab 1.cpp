//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\
// Program: Lab 01
// Author: Sergio A Nunez
// Date: 09/09/2015
// Course: CSCI/CMPE 2380
// Description: This program will prompt the user for both an input and an
//  output file name.  Afterwards, it will prompt for a target word.  
//  The program opens the file and reads all the words in the file and keeps 
//  track of how many times that word appears.  It writes (appends) the word 
//  and the number to the output file.  It continues this until the user
//  types "exit".
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\


#include<iostream>
#include<fstream>
#include<string>

using namespace std;


//This function opens the output file to append the word and count on a new line
bool WriteWordToFile(string outputFile, string searchWord, int wordCount)
{
    
    return false;
}




//This function opens the inputfile and searches for the word.  It returns
//the number of times the word appears.  It assumes that it is case sensitive
//and that there is no punctuation.  Thus, the simple insertion operator can
//be used.
int SearchFile(string inputFile, string searchWord)
{
    return 0;
}


//The main function of the program.  This gets the file names and the word to 
//search and then calls the functions.
int main()
{
    string inputFile;
    string outputFile;
    string searchWord;
    int wordCount;
    
    //get input file name
    
    //get output file name
    
    //get word to search
        
    do
    {    
        //search for word and get count
        wordCount = SearchFile(inputFile, searchWord);
        
        //record the word and count
        WriteWordToFile(outputFile, searchWord, wordCount);
        
        //get word to search
        
    }
    while(searchWord != "exit");
    
    
    return 0;
}

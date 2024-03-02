//add include statements
#include <iostream>
#include <string>
#include "func.h"

using std::cout;
using std::cin;
using std::string;
//add function code here

double get_gc_content(const string& dna)
{
    int gc_tracker = 0;
    float size = dna.size();

    for(int i=0; i < size; i++)
    {
        char ch = dna[i];
        if(ch == 'G' || ch == 'C')
        {
            gc_tracker++;
        }
    }
    
    float gc_content = gc_tracker / size;
    return gc_content;
}

string get_reverse_string(string dna)
{
    string result = dna;
    int size = dna.size();
    int t = 0;
    int i = size - 1;

    while(i >= 0)
    {
        char ch = dna[i];
        result[t] = ch;
        t++;
        i--;
    }
    return result;
}

string get_dna_complement(string dna)
{
    string complement = "";
    int size = dna.size();
    dna = get_reverse_string(dna);
    for(int i = 0; i < size; i++)
    {
        if(dna[i] == 'A')
        {
            dna[i] = 'T';
        }
        else if(dna[i] == 'T')
        {
            dna[i] = 'A';
        }
        else if(dna[i] == 'C')
        {
            dna[i] = 'G';
        }
        else if(dna[i] == 'G')
        {
            dna[i] = 'C';
        }
    }
    return dna;
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main()
{
int quan;
string word;

ofstream fout; 
fout.open("OutFile.txt");

if (!fout.is_open())
{
   cout<<"Error opening file\n";
} else 
 {
 cout<<"Enter a word to repeat..\n";
 cin>> word;
 cout<<"How much repeat you want?\n";
 cin>> quan;
   for(int i=0;i<quan;i++)
   {
     fout << word << " ";
   }
  }
fout.close();
cout<<"Done)\n";
return 0;
}



#include <iostream>
#include <fstream>
#include <string>
using std::ofstream;
using std::endl;
using std::cout;
using std::string;
using std::ifstream;

// Save the file name for future use
struct FileName
{
  string file_name;
};

void create_file(string file_name)
{
  ofstream f;
  f.open(file_name);
  if (f.is_open())
  {
    f << "Hello" << endl;
    f << "Goodbye" << endl;
    f.close();
  }
  else
  {
    cout << "Failed to open file" << endl;
  }
  return;
}

void read_file(string file_name)
{
  ifstream f(file_name);
  if (f.is_open())
  {
    string i;
    while (f >> i)
    {
      cout << i << endl;
    }
    f.close();
  }
  return;
}

int main(int argc, char *argv[])
{
  FileName fn;
  if (argc == 1)
  {
    fn.file_name = "Hello.txt";
  }
  else if (argc == 2)
  {  
    fn.file_name = argv[1];
  }
  else
  {
    cout << "Too many input arguments" << endl;
  }
  cout << fn.file_name << endl;
  create_file(fn.file_name);
  read_file(fn.file_name);
  return 0;
}

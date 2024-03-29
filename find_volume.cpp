#include <iostream>
#include <cmath>
#include <string>
#include <map>
using std::cout;
using std::endl;
using std::pow;
using std::string;
using std::to_string;
using std::map;

enum Shapes
{
  cube,
  sphere,
  cylinder,
  cone
};

Shapes shape_table (string const& in_string)
{
  if (in_string == "cube")
  {
    return cube;
  }
  else if (in_string == "sphere")
  {
    return sphere;
  }
  else if (in_string == "cylinder")
  {
    return cylinder;
  }
  else if (in_string == "cone")
  {
    return cone;
  }
  else
  {
    return cube;
  }
};

int determine_shape_params(string shape_info)
{

  int num_param;

  switch(shape_table(shape_info))
  {
    case cube:
      num_param = 1;
      break;
    case sphere:
      num_param = 1;
      break;
    case cylinder:
      num_param = 2;
      break;
    case cone:
      num_param = 2;
      break;
  }

  return num_param;

}

double volume_cube(double side_length)
{
  double cube_volume;
  cube_volume = pow(side_length,3);
  return cube_volume;
}

int main()
{
  // Initialize and assign consecutive values to a 2-D static array
  int twoDmat[2][2];
  for (int i = 0; i < 4; i++)
  {
    int row_val = i/2;
    int col_val = i%2;
    cout << row_val << " " << col_val << endl;
    twoDmat[row_val][col_val] = i;
  }
  // Print out the 2-D static array
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << "twoDmat[" << to_string(i) << "]["<< to_string(j) << "] = " << twoDmat[i][j] << endl;
    }
  }
  // Compare some address fundamentals
  int a = 0;
  int* b = &a;                                    // b is a pointer to the address of variable a
  cout << "b = " << b << "\ta = 0" << endl;
  cout << "*b = " << *b << "\t\ta = 0" <<  endl;  // *b dereferences b from the address of a to its value
  a++;
  cout << "b = " << b << "\ta = 1" <<  endl;
  cout << "*b = " << *b << "\t\ta = 1" <<  endl;  
  *b = 2;
  cout << "b = " << b << "\ta = *b = 2" <<  endl;
  cout << "*b = " << *b << "\t\ta = *b = 2" <<  endl;    
  // Investigate the stack locations
  short int ad1 = 0;
  int ad2 = 0;
  long long int ad3 = 0;
  int ad4 = 0;
  cout << "&ad1 = " << &ad1 << "\tshort int"<< endl;
  cout << "&ad2 = " << &ad2 << "\tint" << endl; 
  cout << "&ad3 = " << &ad3 << "\tlong long int" << endl;
  cout << "&ad4 = " << &ad4 << "\tint" << endl;     
  // Print out the computed function values
  string output_string = "Hello World!";
  cout << output_string << endl;
  cout << "Number of parameters needed: " << determine_shape_params("cube") << endl;
  cout << "The volume is: " << volume_cube(3.0) << endl;
  return 0;
}

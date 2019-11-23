#include "main.h"
using namespace std;
int main(int argc, char **argv) 
{
     auto my_time = chrono::system_clock::to_time_t(chrono::system_clock::now());
     char * my_time_string = ctime(&my_time);
     my_time_string[strlen(my_time_string) - 1] = '\0';

//3.
     uid_t my_userid;
     char * my_username;
     my_userid = getuid();
//1.  Course:        CS 140U
     my_username = getlogin(); 

     std::cout << "[" << __FILE__ << " compiled on " << __DATE__ << " " << __TIME__ << "]" << std::endl;
//2. Assignment:    Assessment 3
     std::cout << "[Program Executed " << my_time_string << " by " << my_username << " (UID " << my_userid << ")]" << std::endl;
     print_greeting();
     


//0.
     return 0;
}


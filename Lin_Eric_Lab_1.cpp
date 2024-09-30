//Lin_Eric
//Lab_3
//Sepetember_30_2024

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
//added the main code
{
   cout << fixed << showpoint;
   cout << setfill('#');

   //The setfill gives the line full of #s
   cout << setw(1) << "#" << setw(91) << "#"                                                                << endl;
   cout << setw(1) << "#" << setw(91) << "#"                                                                << endl;

   //Blank instead of a line full of #s
   cout << setfill(' ');
   cout << setw(1) << "#" << setw(91) << "#"                                                                << endl;
   
   cout << "# Ways to access the Task Manager on your Windows computer:=                               #"   << endl;
   cout << setw(1) << "#" << setw(91) << "#"                                                                << endl;

   cout << "#           Press the key combination Ctrl + Shift + Escape =                              #"   << endl;
   cout << setw(1) << "#" << setw(91) << "#"                                                                << endl;

   cout << "#           Press the key combination Ctrl + Alt + Delete and select \"Task Manager\" =      #" << endl;
   cout << setw(1) << "#" << setw(91) << "#"                                                                << endl;

   cout << "#           Type \"Task Manager\" in the Windows Start menu search =                         #" << endl;
   cout << setw(1) << "#" << setw(91) << "#"                                                                << endl;
   cout << setfill('#');
   cout << setw(1) << "#" << setw(91) << "#"                                                                << endl;
//added # to surrond

   return 0;
}

/*[Running] cd "c:\Users\Eric.Lin23\Documents\GitHub\lab-1-cout-statements-ericl343\lab-1-cout-statements-ericl343\" && g++ Lin_Eric_Lab_1.cpp -o Lin_Eric_Lab_1 && "c:\Users\Eric.Lin23\Documents\GitHub\lab-1-cout-statements-ericl343\lab-1-cout-statements-ericl343\"Lin_Eric_Lab_1
########################################################################################
#                                                                                      #
#                                                                                      #
# Ways to access the Task Manager on your Windows computer:=                           #
#                                                                                      #
#           Press the key combination Ctrl + Shift + Escape =                          #
#                                                                                      #
#           Press the key combination Ctrl + Alt + Delete and select “Task Manager” =  #
#                                                                                      #
#           Type “Task Manager” in the Windows Start menu search =                     #
#                                                                                      #
#                                                                                      #
########################################################################################

[Done] exited with code=0 in 2.429 seconds*/

//copy and pasted the output
#include <iostream>
#include <string>
#include <filesystem>
#include <cstdlib>
#include <fstream>
using namespace std; 

int main () {
  //create a variable to save the user name and two variables for the folder where the file that stores the directory will be
  const char* user = getenv("USER");
  string dir = "/home/" + string(user) + "/.config/wall-dir";
  string fname = "/home/" + string(user) + "/.config/wall-dir/dir.txt";

  //creates raw variables rdir for read dir, wdir for wallpapers directory and wall for the wallpaper name
  string rdir;
  string wdir;
  string wall;

  //clear terminal and print "WALLPAPER" on ascii art in red color and then change the color to white for the other things
  cout<<("\033[2J\033[1H");
      cout<<"\x1b[31m"<<R"(█▀▀▀█ ▀▒ ▀█  ▄▀▀▀▀▄  █▀▀▓     █▀▀▓     █▀▀▀▀▀▄   ▄▀▀▀▀▄  █▀▀▀▀▀▄   ▄▀▀▀▀▀█ █▀▀▀▀▀▄ 
█   ▓  ░  ░ █      █ █  ░     █  ░     █      █ █      █ █      █ █      ▓ █      █
█   ▒  ▒  ▒ █  █▀  █ █  █     █  █     █  █▀  █ █  █▀  █ █  █▀  █ █  █▀▀▀▀ █  █▀  █
▓   ░  ▓  ▓ ▓  ▀▀  ▓ ▓  █▄▀▀█ ▓  █▄▀▀█ ▓  ▀▀ ▄▀ ▓  ▀▀  ▓ ▓  ▀▀ ▄▀ ▓  █▄█▄▄ ▓  ▀▀ ▀▄
▒         ▒ ▒  █   ▒ ▒  ▀▀  ▒ ▒  ▀▀  ▒ ▒  █▀▀   ▒  █   ▒ ▒  █▀▀   ▒      ▒ ▒  █   ▒
 ▀▄▄▄▀▄▄▄▀  ░▄▄█ ▄▄░  ▀▄▄▄▄▀   ▀▄▄▄▄▀  ░▄▄█     ░▄▄█ ▄▄░ ░▄▄█      ▀▄▄▄▄▄█ ░▄▄█ ▄▄█)"<<"\x1B[37m"<<'\n';
 
  //check if the file dir.txt exist on /home/USER/.config/wall-dir/ 
    {
    for (auto const str:
    {
        string(dir),
    })
    {
        filesystem::directory_entry entr7{str};

            if (entr7.exists() ? filesystem::exists(entr7) : filesystem::exists(entr7)) {
              fstream(fname, ios::in) >> rdir;
        cout << "Directory " << rdir << '\n' << '\n';
            }
    else {
      cout<<"Please enter the wallpapers directory: ";
      getline(cin, wdir);
      filesystem::create_directory(dir);
      fstream(fname, ios::out | ios::trunc) << string(wdir);
      cout<<"The file storing the directory is located at ~/.config/wall-dir/dir.txt."<<'\n';
      cout<<"now you need to use this program again"<<'\n';
        return 0;
     }
    }
}

//check files and sub files on the folder and print the names. (other) the subfiles appears like a file in the principal folder and the sub folder appear as a file
  for (const auto & entry : filesystem::recursive_directory_iterator(rdir))
  cout << entry.path().filename()<<'\n';

  //get wallpaper name
  cout<<'\n'<<"Put your Image name and extension"<<'\n'<<"> ";
  getline(cin, wall);

  //send command to change wallpaper, color palette and clear terminal then in shows the saitma ascii art
  system((string("awww img --transition-type=random ") + rdir.c_str() + "/" + wall.c_str()).c_str());
  system((string("wal -n -i ") + rdir.c_str() + "/" + wall.c_str()).c_str());
  cout<<("\033[2J\033[1H");
  cout << R"(⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⣶⡋⠉⠙⠒⢤⡀⠀⠀⠀⠀⠀⢠⠖⠉⠉⠙⠢⡄⠀
⠀⠀⠀⠀⠀⠀⢀⣼⣟⡒⠒⠀⠀⠀⠀⠀⠙⣆⠀⠀⠀⢠⠃⠀⠀⠀⠀⠀⠹⡄
⠀⠀⠀⠀⠀⠀⣼⠷⠖⠀⠀⠀⠀⠀⠀⠀⠀⠘⡆⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⢷
⠀⠀⠀⠀⠀⠀⣷⡒⠀⠀⢐⣒⣒⡒⠀⣐⣒⣒⠀ ⢰⠀ ⠀⢠⢤⢠⡠⠀⢸⠀
⠀⠀⠀⠀⠀⢰⣛⣟⣂⠀⠘⠤⠬⠃⠰⠑⠥⠊⣿ ⢸ ⠀⠀⠓⠃⠋⠂⠀⢸⠀
⠀⠀⠀⠀⠀⢸⣿⡿⠤⠀⢸⠁⠀⠀⢀⡆⠀⠀⣿⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⣸
⠀⠀⠀⠀⠀⠈⠿⣯⡭⠀⠸⡀⠀⢀⣀⠀⠀⠀⡟⠀⠀⢸⠀⠀⠀⠀⠀⠀⢠⠏
⠀⠀⠀⠀⠀⠀⠀⠈⢯⡥⠄⢱⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀⠳⢄⣀⣀⣀⡴⠃⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⡦⣄⣀⣀⣀⣠⠞⠁⠀⠀⠀⠀⠀⠀⠈⠉⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⠛⠃⠀⠀⠀⢹⠳⡶⣤⡤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣠⢴⣿⣿⣿⡟⡷⢄⣀⣀⣀⡼⠳⡹⣿⣷⠞⣳⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢰⡯⠭⠹⡟⠿⠧⠷⣄⣀⣟⠛⣦⠔⠋⠛⠛⠋⠙⡆⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢸⣿⠭⠉⠀⢠⣤⠀⠀⠀⠘⡷⣵⢻⠀⠀⠀⠀⣼⠀⣇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⡇⣿⠍⠁⠀⢸⣗⠂⠀⠀⠀⣧⣿⣼⠀⠀⠀⠀⣯⠀⢸⠀⠀⠀⠀⠀⠀⠀)" << '\n';
  return 0;
  // I spend more time writing the reamde for github than writing this program :( 
}

#include <iostream>
#include <string>
#include <filesystem>
#include <cstdlib>
using namespace std; 

int main () {
  //create a variable to save the use name and one variable to the wallpapers folder and other raw variable to use with cin to save the wallpaper name
  const char* user = getenv("USER");
  string something = "/home/" + string(user) + "/Pictures/Wallpapers";
  string wall;

  //clear terminal and print wallpaper on ascii art
  cout<<("\033[2J\033[1H");
      cout<<R"(█▀▀▀█ ▀▒ ▀█  ▄▀▀▀▀▄  █▀▀▓     █▀▀▓     █▀▀▀▀▀▄   ▄▀▀▀▀▄  █▀▀▀▀▀▄   ▄▀▀▀▀▀█ █▀▀▀▀▀▄ 
█   ▓  ░  ░ █      █ █  ░     █  ░     █      █ █      █ █      █ █      ▓ █      █
█   ▒  ▒  ▒ █  █▀  █ █  █     █  █     █  █▀  █ █  █▀  █ █  █▀  █ █  █▀▀▀▀ █  █▀  █
▓   ░  ▓  ▓ ▓  ▀▀  ▓ ▓  █▄▀▀█ ▓  █▄▀▀█ ▓  ▀▀ ▄▀ ▓  ▀▀  ▓ ▓  ▀▀ ▄▀ ▓  █▄█▄▄ ▓  ▀▀ ▀▄
▒         ▒ ▒  █   ▒ ▒  ▀▀  ▒ ▒  ▀▀  ▒ ▒  █▀▀   ▒  █   ▒ ▒  █▀▀   ▒      ▒ ▒  █   ▒
 ▀▄▄▄▀▄▄▄▀  ░▄▄█ ▄▄░  ▀▄▄▄▄▀   ▀▄▄▄▄▀  ░▄▄█     ░▄▄█ ▄▄░ ░▄▄█      ▀▄▄▄▄▄█ ░▄▄█ ▄▄█)"<<'\n';
  
  //check if the dir /home/user/Pictures/Wallpapers/ exist
    {
    for (auto const str:
    {
        "/home/" + string(user) + "/Pictures/Wallpapers/",
    })
    {
        std::filesystem::directory_entry entr7{str};

            if (entr7.exists() ? filesystem::exists(entr7) : filesystem::exists(entr7))
        std::cout << "Directory " << entr7 << '\n' << '\n';
    else {
        std::cout << "doesn't exist; please create it and place your wallpapers there\n";
        return 1;
     }
    }
}

//check files and sub files on the folder and print the names
  for (const auto & entry : filesystem::recursive_directory_iterator(something))
  cout << entry.path().filename()<<'\n';

  //get wallpaper name 
  cout<<'\n'<<"Put your Image name and extension"<<'\n'<<"> ";
  getline(cin, wall);

  //send command to change wallpaper, color palette and clear terminal then in shows the saitma ascii art
  system((string("awww img --transition-type=random /home/") + string(user) + ("/Pictures/Wallpapers/") + wall.c_str()).c_str());
  system((std::string("wal -n -i /home/") + string(user) + ("/Pictures/Wallpapers/") + wall.c_str()).c_str());
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
}

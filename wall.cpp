#include <iostream>
#include <string>
#include <filesystem>

using namespace std; 

int main () {
  const char* user = getenv("USER");
  string something = "/home/" + string(user) + "/Pictures/Wallpapers";
  string wall;
  cout<<("\033[2J\033[1H");
      cout<<R"(█▀▀▀█ ▀▒ ▀█  ▄▀▀▀▀▄  █▀▀▓     █▀▀▓     █▀▀▀▀▀▄   ▄▀▀▀▀▄  █▀▀▀▀▀▄   ▄▀▀▀▀▀█ █▀▀▀▀▀▄ 
█   ▓  ░  ░ █      █ █  ░     █  ░     █      █ █      █ █      █ █      ▓ █      █
█   ▒  ▒  ▒ █  █▀  █ █  █     █  █     █  █▀  █ █  █▀  █ █  █▀  █ █  █▀▀▀▀ █  █▀  █
▓   ░  ▓  ▓ ▓  ▀▀  ▓ ▓  █▄▀▀█ ▓  █▄▀▀█ ▓  ▀▀ ▄▀ ▓  ▀▀  ▓ ▓  ▀▀ ▄▀ ▓  █▄█▄▄ ▓  ▀▀ ▀▄
▒         ▒ ▒  █   ▒ ▒  ▀▀  ▒ ▒  ▀▀  ▒ ▒  █▀▀   ▒  █   ▒ ▒  █▀▀   ▒      ▒ ▒  █   ▒
 ▀▄▄▄▀▄▄▄▀  ░▄▄█ ▄▄░  ▀▄▄▄▄▀   ▀▄▄▄▄▀  ░▄▄█     ░▄▄█ ▄▄░ ░▄▄█      ▀▄▄▄▄▄█ ░▄▄█ ▄▄█)"<<'\n';
  {
    for (auto const str:
    {
        "/home/" + string(user) + "/Pictures/Wallpapers/",
    })
    {
        std::filesystem::directory_entry entr7{str};

        std::cout << '\n' << "Directory: " << entr7<< '\n'
                  << (entr7.exists() ? "\n" : " doesn't exist; please create it and place your wallpapers there.\n" );
    }
}
  for (const auto & entry : filesystem::recursive_directory_iterator(something))
  cout << entry.path().filename()<<'\n';
  cout<<'\n'<<"Put your Image name and extension"<<'\n'<<"> ";
  getline(cin, wall);
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

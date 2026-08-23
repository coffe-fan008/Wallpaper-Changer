### Wallpaper-Changer
little proyect to learn more of filesystem lib for C++ and also dont write awww img "file" &amp;&amp; wal -n -i "file" every time i want to change wallpaper also you can see how this works on the wall.mp4 video

### Features
* **Automated Paths**: Automatically detects your Linux user path.
* **Palette Generation**: Uses "pywal" to change your system color schemes to match your chosen image.
* **Random Transitions**: randomized transitions via the "awww" utility.
* **TUI**: terminal layout featuring a clean ASCII-art interface.

### how to install and compile
### requirements 
* **base-devel (gcc - g++)**: sudo pacman -S base-devel
* **pywal**: yay -S pywal or paru -S pywal
* **awww**: yay -S awww or paru -S awww
* **Clone repo**: https://github.com/coffe-fan008/Wallpaper-Changer.git

### compile and install
* **Compile**
```bash
cd Wallpaper-Changer && g++ wall.cpp -o wallpaper
```
* **install in your user**: after compile it you need to move it to /usr/local/bin/
```bash
sudo mv wallpaper /usr/local/bin/
```
* **general system installation** after compile it you need to move it to /bin/
```bash
sudo mv wallpaper /usr/bin/
```

### How it Works
this program works by using awww and pywal to change wallpaper and colors what this program do is create a non modifiable string variable to get the user name by doing a const char* user = getenv ("USER") 
then it creates a new variable called something that is a variable that have the wallpapers directory and also it create a modifiable string called wall to save the file name then i clean the terminal by using a cout to send a command to clean the terminal ("\033[2J\033[1H") after that it print with cout a ascii art that says Wallpaper after that i use the directory_entry example but i modded to see if the dir /home/USER/Pictures/Wallpapers/ exist then it prints the dir and if the dir doesn't exist it print please create the folder and put your wallpapers there but if you alr have it, it will show the names of the files and then it will print put your file and extension and then it do a getline(cin, wall); to get and save the file name in the wall variable so after that the program send a command with system((string("awww img --transition-type=random /home/") + string(user) + ("/Pictures/Wallpapers/") + wall.c_str()).c_str()); to change the wallpaper to the selected one and do a random transition then it sends another command to change the colors by doing a   system((std::string("wal -n -i /home/") + string(user) + ("/Pictures/Wallpapers/") + wall.c_str()).c_str()); to change the colors by using the wallpaper as color palette and after doing the two commands it send another just to clean the terminal ("\033[2J\033[1H"); and then it prints a saitama ascii art that says "ok"

### Sorry :(
Sorry for the video quality; i didn't get obs work on Arch Linux, so i take the video on my phone.

also the line to get the user name for the directory was made with google ai so i feel bad for use ai so i study how the function works.

(This text explaning const char* was made by u/Avereniect from Reddit ). 

https://www.reddit.com/r/cpp_questions/comments/g67ewa/comment/fo7rqnp/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button

 A string is an array of chars ending with \0 and std::string is essentially just a clean interface wrapping around such an array.

When people use a char* as a string, it's because that pointer is holding the address of the first character in the string. The const is just to indicate that they only want to read from the string.

std::string internally, is actually just a char* and a couple of other variables storing the size of the string and its allocation size. You can get that using str.c_str(). 

(Mine)

getenv is a function from cstdlib 

this works by searching enviroments variables from the OS that allows programs to identify importants directories (Like PATH, HOME or TMP) also it can be used to identify some important things (like user info and some other things like configuration settings)


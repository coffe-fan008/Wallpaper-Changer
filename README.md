<video width="100%" controlsList="nodownload">
 <source src="wall.mp4" type="video/mp4" />
</video>
### Wallpaper-Changer
little proyect to learn more of filesystem and also dont write awww img "file" &amp;&amp; wal -n -i "file" every time i want to change wallpaper

### Sorry :(
Sorry for the video quality; i didn't get obs work on Arch Linux, so i take the video on my phone.

also the line to get the user name for the directory was made with google ai so i feel bad for use ai so i study how the function works.

(This text explaning const char* was made by u/Avereniect from Reddit ). 
https://www.reddit.com/r/cpp_questions/comments/g67ewa/comment/fo7rqnp/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button

 A string is an array of chars ending with \0 and std::string is essentially just a clean interface wrapping around such an array.

When people use a char* as a string, it's because that pointer is holding the address of the first character in the string. The const is just to indicate that they only want to read from the string.

std::string internally, is actually just a char* and a couple of other variables storing the size of the string and its allocation size. You can get that using str.c_str(). 

# About Fortnite Texted
Fortnite Texted is a Remake of Fortnite(Not fully) in Vanilla C++. It was first a Experiment for text based/Console games in C++, but then became a Real Project.
As you can see, this project is still a Demo. so there are some Bools that are soon going to be used in the next update. Also, This is my First C++ project, i got help from chatgpt about syntax and input, and the game was fully programmed by myself.
# How to Install and run
To install and run this, you need to get [MSYS2](https://www.msys2.org/), a Collection of tools and libraries. After installing, you need to run
```
pacman -S mingw-w64-ucrt-x86_64-gcc
```
Inside MSYS2 MINGW64. GCC is important for running C++, C and C#, but we are focusing on C++. then, go to the repo link ([Here!](https://github.com/GGoobyJohnbrit/Fortnite-Texted)) and click on releases, then click on the latest one. 
and then move "Fortnite.cpp" to `C:/msys64/home/{YOUR USERNAME HERE}/`. Then run the following command to compile Fortnite.cpp .
```
g++ Fortnite.cpp -o Fortnite.exe
```
Once it finished, run 
```
./Fortnite.exe
```
If it says `-bash: ./Fortnite.exe: No such file or directory`, then run `ls`. if you dont see Fortnite.exe but you see Fortnite.cpp then run `g++ Fortnite.cpp -o Fortnite.exe` again. if it works, then BAM. 
you got a working Demo of Fortnite Texted.

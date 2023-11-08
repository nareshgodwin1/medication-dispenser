#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <string>

int main ();

int main () {
   
    int sec = 58, min = 59, hrs = 23, day = 0;


    while (true){
        
        std::cout << "Here is the time: " << hrs << ":" << min << ":" << sec << std::endl;
        sec++;
        if (sec >= 60){
            sec = 0;
            min++;
        }
    }
}
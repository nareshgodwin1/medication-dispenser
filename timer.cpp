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
            if (min >= 60){
                min = 0;
                hrs++;
               if (day = 1) {
                        std::cout << "Today is Monday." << std::endl;
                        }
                    else if (day = 2) {
                        std::cout << "Today is Tuesday." << std::endl;
                        }
                    else if (day = 3) {
                        std::cout << "Today is Wednesday." << std::endl;
                        }
                    else if (day = 4) {
                        std::cout << "Today is Thursday." << std::endl;
                        }
                    else if (day = 5) {
                        std::cout << "Today is Friday." << std::endl;
                        }
                    else if (day = 6) {
                        std::cout << "Today is Saturday." << std::endl;
                    }
                }
                else if(hrs<24){
                    std::cout << "Today is Sunday." << std::endl;
                }


                
            }
        
        }

            }
        }
    }

}

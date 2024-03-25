#include "die.cpp"
#include <iostream>
#include <vector>

int MAX_NUM = 10000000;
int main(){

    int snakeEyes = 0;
    int pRuns[] = {9999, 99999, 999999, 9999999};
    Die dice[6];

    for(int i=0; i < MAX_NUM; i++){
        unsigned int sum = 0;
        for(auto d:dice)
        sum += d.roll();
        if (sum == 6)
            snakeEyes++;
        for(int pRun : pRuns) {
            if (i == pRun) {
                std::cout << i + 1 << ": " << snakeEyes << " snake eyes \n";
            }
        }
    }
    return 0;
}
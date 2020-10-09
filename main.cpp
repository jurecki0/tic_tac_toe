#include <iostream>
#include "functions.h"

int main() {

    introduction();
    draw();

    //1
    take_turn();
    update_board();
    for(int i = 0; i < 10; i++) {
        if(!is_winner()) {
            change_player();
            update_board();
        } else {
            end_game();
            return 1;
        }
    }
}

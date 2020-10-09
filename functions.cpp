//
// Created by sacew on 05-10-20.
//

#include <c++/4.8.3/iostream>
#include <c++/4.8.3/vector>
#include "functions.h"

//The board game
std::vector<char> board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

//Player
class Player {
public:
    int posChoice;
    bool madeChoise = false;
};
Player player1;
Player player2;


bool is_winner() {
    //there's 8 winning combinations

        //1 P1
    if(board[0] == 'X' && board[1] == 'X' && board[2] == 'X'){
        std::cout << "Player 1 Won!\n";
        return true;
        //2 P1
    } else if(board[3] == 'X' && board[4] == 'X' && board[5] == 'X'){
        std::cout << "Player 1 Won!\n";
        return true;
        //3 P1
    } else if(board[6] == 'X' && board[7] == 'X' && board[8] == 'X'){
        std::cout << "Player 1 Won!\n";
        return true;
        //4 P1
    } else if(board[0] == 'X' && board[3] == 'X' && board[6] == 'X'){
        std::cout << "Player 1 Won!\n";
        return true;
        //5 P1
    } else if(board[1] == 'X' && board[4] == 'X' && board[7] == 'X'){
        std::cout << "Player 1 Won!\n";
        return true;
        //6 P1
    } else if(board[2] == 'X' && board[5] == 'X' && board[8] == 'X'){
        std::cout << "Player 1 Won!\n";
        return true;
        //7 P1
    } else if(board[0] == 'X' && board[4] == 'X' && board[8] == 'X'){
        std::cout << "Player 1 Won!\n";
        return true;
        //8 P1
    } else if(board[6] == 'X' && board[4] == 'X' && board[2] == 'X'){
        std::cout << "Player 1 Won!\n";
        return true;

        //1 P2
    } else if(board[0] == 'O' && board[1] == 'O' && board[2] == 'O'){
        std::cout << "Player 1 Won!\n";
        return true;
        //2 P2
    } else if(board[3] == 'O' && board[4] == 'O' && board[5] == 'O'){
        std::cout << "Player 1 Won!\n";
        return true;
        //3 P2
    } else if(board[6] == 'O' && board[7] == 'O' && board[8] == 'O'){
        std::cout << "Player 1 Won!\n";
        return true;
        //4 P2
    } else if(board[0] == 'O' && board[3] == 'O' && board[6] == 'O'){
        std::cout << "Player 1 Won!\n";
        return true;
        //5 P2
    } else if(board[1] == 'O' && board[4] == 'O' && board[7] == 'O'){
        std::cout << "Player 1 Won!\n";
        return true;
        //6 P2
    } else if(board[2] == 'O' && board[5] == 'O' && board[8] == 'O'){
        std::cout << "Player 1 Won!\n";
        return true;
        //7 P2
    } else if(board[0] == 'O' && board[4] == 'O' && board[8] == 'O'){
        std::cout << "Player 1 Won!\n";
        return true;
        //8 P2
    } else if(board[6] == 'O' && board[4] == 'O' && board[2] == 'O'){
        std::cout << "Player 1 Won!\n";
        return true;
    }


}

bool filled_up() {
    if(filled_up() == true && is_winner() != true) {
        end_game();
        return true;
    }
}

void introduction() {
    std::cout << "Tic Tac Toe\n";
    std::cout << "-----------\n";
    std::cout << "Player 1 = x\n";
    std::cout << "Player 2 = o\n";
    std::cout << "Insert the position from 1 to 9 at each turn.\n\n";
    std::cout << "Example Draw:\n\n";

    std::vector<char> example_board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    std::cout << "     |     |      \n";


    std::cout << "  " << example_board[0] << "  |  " << example_board[1] << "  |  " << example_board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << example_board[3] << "  |  " << example_board[4] << "  |  " << example_board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << example_board[6] << "  |  " << example_board[7] << "  |  " << example_board[8] << "\n";
    std::cout << "     |     |      \n";

    std::cout << "\n\n";

    std::cout << "Now that you both know the rules, let's play:\n\n";
}

void take_turn() {
    std::cout << "Player 1:";
    std::cin >> player1.posChoice;
    std::cout << "\n";
    player1.madeChoise = true;
}

void set_position() {
    if (player1.madeChoise == true) {
        board[player1.posChoice] = 'X';
    } else if (player2.madeChoise == true) {
        board[player2.posChoice] = 'O';
    }
}

void update_board() {
    set_position();
    draw();
}

void change_player() {
    if(player1.madeChoise == true) {
        player1.madeChoise = false;
        std::cout << "Player 2:";
        std::cin >> player2.posChoice;
        std::cout << "\n";
        player2.madeChoise = true;
    } else if (player2.madeChoise == true) {
        player2.madeChoise = false;
        std::cout << "Player 1:";
        std::cin >> player1.posChoice;
        std::cout << "\n";
        player1.madeChoise = true;
    }
}

void draw() {

    std::cout << "     |     |      \n";


    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";

    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";

    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";

    std::cout << "\n";
}

void end_game() {
    if (is_winner() || filled_up()) {
        std::cout << "The game ended!\n";
    }
}
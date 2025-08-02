#include<iostream>
using namespace std;

int main() {
    string chessBoard = "";
    for (int i = 1; i <= 8;i++) {
        for (int j = 0; j < 4; j++) {
            if (i % 2 == 0) {
                chessBoard += " ";
                chessBoard += "#";

            }
            else {
                chessBoard += "#";
                chessBoard += " ";
            }
        }
        chessBoard += "\n";
    }
    
    cout << chessBoard;

    return 0;
}
#include"Move.h"
#include<iostream>
#include<string
using namespace std;
class Play
{
    private:
    int** board;
    int movesRemaining;
    public:
    void run()
    {
        char decision = startPrintMenu();
        board = generateBoard(decision);

        printGamePlay();

        Move playerMove = getPlayerMove();

        while(movesRemaining <= 81)
        {
            playerMove = getPlayerMove();
            if(isValidMove())
            {
                updateBoard(playerMove);
                printGamePlay();
                movesRemaining++;
            }
            else
            {

            }
        }
    }
    int** generateBoard(char difficulty)
    {
        //Coles
    }
    void updateBoard(Move playerMove)
    {
        //Adam
        board[playerMove.getRow()][playerMove.getColumn()] = playerMove.getNumber();
    }
    bool isValidMove()
    {
        //Adam
        
    }
    string printGamePlay()
    {
        //Brian
    }
    char startPrintMenu()
    {
        //Brian
    }
    Move getPlayerMove(int x, int y, int num)
    {
        
    }
    Move undo()
    {

    }
    Move redo()
    {

    }
    

};

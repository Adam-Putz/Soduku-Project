using namespace std;

class Move
{
    private:
    int column, row, number;
    public:
    Move(int row, int column, int number)
    {
        this->row = row;
        this->column = column;
        this->number = number;
    }
    int getColumn()
    {
        return column;
    }
    int getRow()
    {
        return row;
    }
    int getNumber()
    {
        return number;
    }
};
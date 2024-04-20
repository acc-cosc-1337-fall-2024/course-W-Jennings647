#include "tic_tac_toe.h"

class tic_tac_toe_4 : public tic_tac_toe
{
    public:
        tic_tac_toe_4(): tic_tac_toe(4){};

    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
};
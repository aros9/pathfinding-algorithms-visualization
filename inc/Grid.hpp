#include <vector>
#include <stdexcept>

enum CellState {
    EMPTY,
    WALL,
    START,
    END,
    PATH
};

class Grid {

private:
    int rows;
    int cols;
    std::vector<std::vector<CellState>> grid;

public:
    Grid(int rows, int cols) : rows(rows), cols(cols), grid(rows, std::vector<CellState>(cols, CellState::EMPTY)) {}

    void setCell(int row, int col, CellState value);
    CellState getCell(int row, int col);

    const std::vector<std::vector<CellState>>& getGrid() { return grid; }

    // Getters
    int getRows() { return rows; }
    int getCols() { return cols; }

    // Setters
    void setRows(int rows) { this->rows = rows; }
    void setCols(int cols) { this->cols = cols; }
};
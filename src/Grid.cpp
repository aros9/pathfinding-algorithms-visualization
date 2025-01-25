#include "inc/Grid.hpp"



/**
 * @brief Sets the state of a cell in the grid.
 * 
 * @param row The row index of the cell.
 * @param col The column index of the cell.
 * @param value The new state to set for the cell.
 * @throws std::invalid_argument if the provided cell state is invalid.
 */
void Grid::setCell(int row, int col, CellState value) {
    if (value < CellState::EMPTY || value > CellState::PATH) {
        throw std::invalid_argument("Invalid cell state.");
    }
    grid[row][col] = value;
}

/**
 * @brief Retrieves the state of the cell at the specified row and column.
 * 
 * @param row The row index of the cell.
 * @param col The column index of the cell.
 * @return CellState The state of the cell at the specified position.
 * @throws std::out_of_range If the specified row or column is out of the grid's bounds.
 */
CellState Grid::getCell(int row, int col) {
    if (row < 0 || row >= rows || col < 0 || col >= cols) {
        throw std::out_of_range("Invalid cell position.");
    }
    return grid[row][col];
}
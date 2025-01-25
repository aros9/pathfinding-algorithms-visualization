#include <vector>
#include "Grid.hpp"

class PathfindingAlgorithm {
public:
    virtual std::vector<std::pair<int, int>> findPath(Grid& grid) = 0;
    virtual ~PathfindingAlgorithm() = default;
};
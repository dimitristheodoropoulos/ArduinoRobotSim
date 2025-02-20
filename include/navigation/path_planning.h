#ifndef PATH_PLANNING_H
#define PATH_PLANNING_H

#include <vector>

class PathPlanning {
public:
    std::vector<std::pair<int, int>> calculatePath(int startX, int startY, int destX, int destY);
};

#endif // PATH_PLANNING_H

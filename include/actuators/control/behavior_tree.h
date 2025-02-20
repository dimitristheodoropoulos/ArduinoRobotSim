#ifndef BEHAVIOR_TREE_H
#define BEHAVIOR_TREE_H

#include <vector>
#include <memory>

class BehaviorNode {
public:
    virtual ~BehaviorNode() = default;
    virtual bool execute() = 0;
};

class SelectorNode : public BehaviorNode {
private:
    std::vector<std::shared_ptr<BehaviorNode>> children;
public:
    void addChild(std::shared_ptr<BehaviorNode> child) {
        children.push_back(child);
    }

    bool execute() override {
        for (const auto& child : children) {
            if (child->execute()) {
                return true;
            }
        }
        return false;
    }
};

#endif // BEHAVIOR_TREE_H
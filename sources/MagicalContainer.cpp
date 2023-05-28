#include "MagicalContainer.h"

void MagicalContainer::addElement(int element)
{
    // elements.push_back(element);
}

void MagicalContainer::removeElement(int element)
{
    // for (auto it = elements.begin(); it != elements.end(); ++it)
    // {
    //     if (*it == element)
    //     {
    //         elements.erase(it);
    //         break;
    //     }
    // }
}

int MagicalContainer::size() const
{
    return 0;
}

const std::vector<int> &MagicalContainer::getElements() const
{
    static std::vector<int> emptyVector;
    return emptyVector;
}

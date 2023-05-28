#include "doctest.h"
#include "sources/MagicalContainer.hpp"
#include <iostream>
using namespace ariel;
TEST_CASE("AscendingIterator begin and end")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(5);
    container.addElement(4);
    container.addElement(3);
    MagicalContainer::AscendingIterator ascIter(container);
    int *intptrb = ascIter.begin();
    CHECK(*intptrb == 1);
    int *intptre = ascIter.end();
    CHECK(*intptre == 5);
}
TEST_CASE("AscendingIterator ++")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(100);
    container.addElement(4);
    container.addElement(5);
    MagicalContainer::AscendingIterator ascIter(container);
    int *num = ascIter.begin();
    CHECK(*num == 1);
    ++ascIter;
    CHECK(*num == 2);
    ++ascIter;
    CHECK(*num == 4);
    ++ascIter;
    CHECK(*num == 5);
    ++ascIter;
    CHECK(*num == 100);
}
TEST_CASE("AscendingIterator < , != , ==")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(100);
    container.addElement(2);
    container.addElement(200);
    container.addElement(3);
    MagicalContainer::AscendingIterator ascIter1(container);
    MagicalContainer::AscendingIterator ascIter2(container);
    CHECK(ascIter1 == ascIter2);
    ++ascIter1;
    CHECK(ascIter1 != ascIter2);
    CHECK(ascIter1 < ascIter2);
}

TEST_CASE("PrimeIterator begin and end")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);

    MagicalContainer::AscendingIterator priIter(container);
    int *intptrb = priIter.begin();
    CHECK(*intptrb == 1);
    int *intptre = priIter.end();
    CHECK(*intptre == 5);
}
TEST_CASE("PrimeIterator ++")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);
    MagicalContainer::AscendingIterator priIter(container);
    int *num = priIter.begin();
    CHECK(*num == 1);
    ++priIter;
    CHECK(*num == 2);
    ++priIter;
    CHECK(*num == 3);
    ++priIter;
    CHECK(*num == 5);
}
TEST_CASE("PrimeIterator < , != , ==")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(99);
    container.addElement(2);
    container.addElement(200);
    container.addElement(3);
    MagicalContainer::AscendingIterator priIter1(container);
    MagicalContainer::AscendingIterator priIter2(container);
    CHECK(priIter1 == priIter2);
    ++priIter1;
    ++priIter2;
    ++priIter2;
    CHECK(priIter1 != priIter2);
    CHECK(priIter1 < priIter2);
}
TEST_CASE("SideCrossIterator begin and end")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);

    MagicalContainer::AscendingIterator sidIter(container);
    int *intptrb = sidIter.begin();
    CHECK(*intptrb == 1);
    int *intptre = sidIter.end();
    CHECK(*intptre == 3);
}
TEST_CASE("SideCrossIterator ++")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);
    MagicalContainer::AscendingIterator sidIter(container);
    int *num = sidIter.begin();
    CHECK(*num == 1);
    ++sidIter;
    CHECK(*num == 5);
    ++sidIter;
    CHECK(*num == 2);
    ++sidIter;
    CHECK(*num == 4);
    ++sidIter;
    CHECK(*num == 3);
}
TEST_CASE("SideCrossIterator < , != , ==")
{
    MagicalContainer container;
    container.addElement(10);
    container.addElement(99);
    container.addElement(2);
    container.addElement(200);
    container.addElement(3);
    MagicalContainer::AscendingIterator sidIter1(container);
    MagicalContainer::AscendingIterator sidIter2(container);
    CHECK(sidIter1 == sidIter2);
    ++sidIter1;
    CHECK(sidIter1 != sidIter2);
    CHECK(sidIter1 < sidIter2);
}
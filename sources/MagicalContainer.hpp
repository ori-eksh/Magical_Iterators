#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <list>
namespace ariel
{
    class MagicalContainer
    {
    private:
        std::list<int> growsUpNumbers;
        std::vector<int> primesNumbers;
        int containerSize;

    public:
        MagicalContainer() {}
        void addElement(int element);
        void removeElement(int element);
        int size() const;
        const std::vector<int> &getElements() const;

        /******************/
        class AscendingIterator
        {
        private:
            int size;

        public:
            AscendingIterator(const auto)
            {
                this->size = 0;
            }

            bool hasNext() const
            {
                return false;
            }

            int next()
            {
                if (!hasNext())
                    throw std::out_of_range("Iterator reached the end of the container.");

                return 0;
            }
            bool operator!=(const AscendingIterator &other) const
            {
                return false;
            }
            bool operator==(const AscendingIterator &other) const
            {
                return false;
            }
            AscendingIterator &operator++()
            {

                return *this;
            }
            bool operator<(const AscendingIterator &other) const
            {
                return false;
            }
            bool operator>(const AscendingIterator &other) const
            {
                return false;
            }

            int *begin()
            {
                int *ret;
                return ret;
            }
            int *end()
            {
                int *ret;
                return ret;
            }
        };
        /******************/
        class PrimeIterator
        {
        private:
        public:
            PrimeIterator(const auto) {}

            bool hasNext() const
            {
                return false;
            }

            int next()
            {
                if (!hasNext())
                    throw std::out_of_range("Iterator reached the end of the container.");

                return 0;
            }
            PrimeIterator &operator++()
            {

                return *this;
            }
            bool operator!=(const PrimeIterator &other) const
            {
                return false;
            }
            bool operator==(const PrimeIterator &other) const
            {
                return false;
            }
            bool operator<(const PrimeIterator &other) const
            {
                return false;
            }
            bool operator>(const PrimeIterator &other) const
            {
                return false;
            }
            int *begin()
            {
                int *ret;
                return ret;
            }
            int *end()
            {
                int *ret;
                return ret;
            }
        };

        /******************/

        class SideCrossIterator
        {
        private:
        public:
            SideCrossIterator(const auto) {}

            bool hasNext() const
            {
                return false;
            }

            int next()
            {
                if (!hasNext())
                    throw std::out_of_range("Iterator reached the end of the container.");

                return 0;
            }
            SideCrossIterator &operator++()
            {

                return *this;
            }
            bool operator!=(const SideCrossIterator &other) const
            {
                return false;
            }
            bool operator==(const SideCrossIterator &other) const
            {
                return false;
            }
            bool operator<(const SideCrossIterator &other) const
            {
                return false;
            }
            bool operator>(const SideCrossIterator &other) const
            {
                return false;
            }
            int *begin()
            {
                int *ret;
                return ret;
            }
            int *end()
            {
                int *ret;
                return ret;
            }
        };

        static bool isPrime(int number)
        {
            if (number <= 1)
                return false;

            for (int i = 2; i <= std::sqrt(number); ++i)
            {
                if (number % i == 0)
                    return false;
            }

            return true;
        }
    };
}

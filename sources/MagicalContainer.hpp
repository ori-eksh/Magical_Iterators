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
        void addElement(int element);
        void removeElement(int element);
        int size() const;
        const std::vector<int> &getElements() const;
        MagicalContainer() : containerSize(0) {}

        /******************/
        class AscendingIterator
        {
        private:
            int size;

        public:
            AscendingIterator() : size(0)
            {
            }
            AscendingIterator(const auto argu) : size(0)
            {
            }

            static bool hasNext()
            {
                return false;
            }

            static int next()
            {
                if (!hasNext())
                {
                    throw std::out_of_range("Iterator reached the end of the container.");
                }

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

            static int *begin()
            {
                static int number = 0;
                int *ret = &number;
                return ret;
            }

            static int *end()
            {
                static int number = 0;
                int *ret = &number;
                return ret;
            }
        };
        /******************/
        class PrimeIterator
        {
        private:
        public:
            PrimeIterator() {}
            PrimeIterator(const auto argu)
            {
            }

            static bool hasNext()
            {
                return false;
            }

            static int next()
            {
                if (!hasNext())
                {
                    throw std::out_of_range("Iterator reached the end of the container.");
                }

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
            static int *begin()
            {
                static int number = 0;
                int *ret = &number;
                return ret;
            }

            static int *end()
            {
                static int number = 0;
                int *ret = &number;
                return ret;
            }
        };

        /******************/

        class SideCrossIterator
        {
        private:
        public:
            SideCrossIterator() {}
            SideCrossIterator(const auto argu)
            {
            }

            static bool hasNext()
            {
                return false;
            }

            static int next()
            {
                if (!hasNext())
                {
                    throw std::out_of_range("Iterator reached the end of the container.");
                }

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
            static int *begin()
            {
                static int number = 0;
                int *ret = &number;
                return ret;
            }

            static int *end()
            {
                static int number = 0;
                int *ret = &number;
                return ret;
            }
        };

        static bool isPrime(int number)
        {
            if (number <= 1)
            {
                return false;
            }

            for (int i = 2; i <= std::sqrt(number); ++i)
            {
                if (number % i == 0)
                {
                    return false;
                }
            }

            return true;
        }
    };
}

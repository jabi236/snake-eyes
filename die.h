#include <random>

#ifndef DIE_H

#define DIE_H
class Die{
public:
    explicit Die(unsigned int top = 1);
    unsigned int roll();

private:
    static std::default_random_engine m_generator;
    static std::uniform_int_distribution<unsigned int> m_distribution;
    unsigned int m_top;
};

#endif //DIE_H

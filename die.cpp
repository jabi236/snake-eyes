#include "die.h"
#include <cassert>

inline std::default_random_engine Die::m_generator;
inline std::uniform_int_distribution<unsigned int> Die::m_distribution(1,6);

inline Die::Die(unsigned int top) : m_top{top}{
    assert(top > 0);
    assert(top < 7);
    assert(m_top == top);
}

inline unsigned int Die::roll(){
    m_top = m_distribution(m_generator);
    assert(m_top > 0);
    assert(m_top < 7);
    return static_cast<unsigned int>(m_top);
}
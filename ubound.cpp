#include <ubound.h>

namespace ubnd {

static const uint64_t ubitmask = 0x100;
static const uint64_t esmask   = 0xf0;
static const uint64_t fsmask   = 0x0f;

// unum

unum::unum()
    : m_data(0)
{}

unum::unum(const unum& val)
    : m_data(0)
{}

unum::unum(int value)
    : m_data(0)
{}

unum::unum(float value)
    : m_data(0)
{}

unum& unum::operator=(const unum& val)
{
    return *this;
}

unum& unum::operator=(int val)
{
    return *this;
}

unum& unum::operator=(float val)
{
    return *this;
}

bool unum::exact() const
{
    return ((m_data & ubitmask) == 0);
}

// ubound

ubound::ubound()
{}

ubound::ubound(const ubound& val)
    : m_left(val.m_left)
    , m_right(val.m_right)
{
    setpair(true);
}

ubound::ubound(const unum& val)
    : m_left(val)
{}

ubound::ubound(const unum& left, const unum& right)
    : m_left(left)
    , m_right(right)
{
    setpair(true);
}

ubound::ubound(int left, int right)
    : m_left(left)
    , m_right(right)
{
    setpair(true);
}

ubound::ubound(float left, float right)
    : m_left(left)
    , m_right(right)
{
    setpair(true);
}

ubound& ubound::operator=(const ubound& val)
{
    m_left = val.m_left;
    m_right = val.m_right;
    return *this;
}

ubound& ubound::operator=(const unum& val)
{
    m_left = val;
    setpair(false);
}

ubound& ubound::operator+=(const unum& other)
{
    return *this;
}

ubound& ubound::operator-=(const unum& other)
{
    return *this;
}

ubound& ubound::operator*=(const unum& other)
{
    return *this;
}

ubound& ubound::operator/=(const unum& other)
{
    return *this;
}


ubound& ubound::operator+=(const ubound& other)
{
    return *this;
}

ubound& ubound::operator-=(const ubound& other)
{
    return *this;
}

ubound& ubound::operator*=(const ubound& other)
{
    return *this;
}

ubound& ubound::operator/=(const ubound& other)
{
    return *this;
}

bool ubound::pair() const
{
    return false;
}

const unum& ubound::left() const
{
    return m_left;
}

const unum& ubound::right() const
{
    return m_right;
}

void ubound::setpair(bool)
{
}

// Unary functions

unum operator+(const unum& val)
{
    return unum();
}

unum operator-(const unum& val)
{
    return unum();
}

ubound operator+(const ubound& val)
{
    return ubound();
}

ubound operator-(const ubound& val)
{
    return ubound();
}

bool operator==(const unum& lhs, const unum& rhs)
{
    return false;
}

bool operator!=(const unum& lhs, const unum& rhs)
{
    return false;
}

bool operator>(const unum& lhs, const unum& rhs)
{
    return false;
}

bool operator<(const unum& lhs, const unum& rhs)
{
    return false;
}

bool operator>=(const unum& lhs, const unum& rhs)
{
    return false;
}

bool operator<=(const unum& lhs, const unum& rhs)
{
    return false;
}


ubound operator+(const unum& lhs, const unum& rhs)
{
    return ubound();
}

ubound operator-(const unum& lhs, const unum& rhs)
{
    return ubound();
}

ubound operator*(const unum& lhs, const unum& rhs)
{
    return ubound();
}

ubound operator/(const unum& lhs, const unum& rhs)
{
    return ubound();
}

bool operator==(const ubound& lhs, const ubound& rhs)
{
    return false;
}

bool operator!=(const ubound& lhs, const ubound& rhs)
{
    return false;
}

bool operator>(const ubound& lhs, const ubound& rhs)
{
    return false;
}

bool operator<(const ubound& lhs, const ubound& rhs)
{
    return false;
}

bool operator>=(const ubound& lhs, const ubound& rhs)
{
    return false;
}

bool operator<=(const ubound& lhs, const ubound& rhs)
{
    return false;
}


ubound operator+(const ubound& lhs, const ubound& rhs)
{
    return ubound();
}

ubound operator-(const ubound& lhs, const ubound& rhs)
{
    return ubound();
}

ubound operator*(const ubound& lhs, const ubound& rhs)
{
    return ubound();
}

ubound operator/(const ubound& lhs, const ubound& rhs)
{
    return ubound();
}

bool operator==(const unum& lhs, const ubound& rhs)
{
    return false;
}

bool operator!=(const unum& lhs, const ubound& rhs)
{
    return false;
}

bool operator>(const unum& lhs, const ubound& rhs)
{
    return false;
}

bool operator<(const unum& lhs, const ubound& rhs)
{
    return false;
}

bool operator>=(const unum& lhs, const ubound& rhs)
{
    return false;
}

bool operator<=(const unum& lhs, const ubound& rhs)
{
    return false;
}


ubound operator+(const unum& lhs, const ubound& rhs)
{
    return ubound();
}

ubound operator-(const unum& lhs, const ubound& rhs)
{
    return ubound();
}

ubound operator*(const unum& lhs, const ubound& rhs)
{
    return ubound();
}

ubound operator/(const unum& lhs, const ubound& rhs)
{
    return ubound();
}


bool operator==(const ubound& lhs, const unum& rhs)
{
    return false;
}

bool operator!=(const ubound& lhs, const unum& rhs)
{
    return false;
}

bool operator>(const ubound& lhs, const unum& rhs)
{
    return false;
}

bool operator<(const ubound& lhs, const unum& rhs)
{
    return false;
}

bool operator>=(const ubound& lhs, const unum& rhs)
{
    return false;
}

bool operator<=(const ubound& lhs, const unum& rhs)
{
    return false;
}


ubound operator+(const ubound& lhs, const unum& rhs)
{
    return ubound();
}

ubound operator-(const ubound& lhs, const unum& rhs)
{
    return ubound();
}

ubound operator*(const ubound& lhs, const unum& rhs)
{
    return ubound();
}

ubound operator/(const ubound& lhs, const unum& rhs)
{
    return ubound();
}


// Exponential functions
unum abs(const unum& val)
{
    return unum();
}

ubound abs(const ubound& val)
{
    return ubound();
}


ubound pow(const unum& val, const unum& pow)
{
    return ubound();
}

ubound pow(const unum& val, const ubound& pow)
{
    return ubound();
}

ubound pow(const ubound& val, const unum& pow)
{
    return ubound();
}

ubound pow(const ubound& val, const ubound& pow)
{
    return ubound();
}

ubound sqrt(const unum& val)
{
    return ubound();
}

ubound sqrt(const ubound& val)
{
    return ubound();
}

// Trigonometric functions
ubound sin(const unum& val)
{
    return ubound();
}

ubound cos(const unum& val)
{
    return ubound();
}

ubound tan(const unum& val)
{
    return ubound();
}

ubound asin(const unum& val)
{
    return ubound();
}

ubound acos(const unum& val)
{
    return ubound();
}

ubound atan(const unum& val)
{
    return ubound();
}


ubound sin(const ubound& val)
{
    return ubound();
}

ubound cos(const ubound& val)
{
    return ubound();
}

ubound tan(const ubound& val)
{
    return ubound();
}

ubound asin(const ubound& val)
{
    return ubound();
}

ubound acos(const ubound& val)
{
    return ubound();
}

ubound atan(const ubound& val)
{
    return ubound();
}


// Hyperbolic functions
ubound sinh(const unum& val)
{
    return ubound();
}

ubound cosh(const unum& val)
{
    return ubound();
}

ubound tanh(const unum& val)
{
    return ubound();
}

ubound asinh(const unum& val)
{
    return ubound();
}

ubound acosh(const unum& val)
{
    return ubound();
}

ubound atanh(const unum& val)
{
    return ubound();
}


ubound sinh(const ubound& val)
{
    return ubound();
}

ubound cosh(const ubound& val)
{
    return ubound();
}

ubound tanh(const ubound& val)
{
    return ubound();
}

ubound asinh(const ubound& val)
{
    return ubound();
}

ubound acosh(const ubound& val)
{
    return ubound();
}

ubound atanh(const ubound& val)
{
    return ubound();
}


// std iostream support
template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
    operator<<(std::basic_ostream<CharT, Traits>& os,
        const unum& val)
{
    return os;
}

template <class CharT, class Traits>
std::basic_istream<CharT, Traits>&
    operator>>(std::basic_istream<CharT, Traits>& is,
        unum& val)
{
    return is;
}

template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
    operator<<(std::basic_ostream<CharT, Traits>& os,
        const ubound& val)
{
    return os;
}

template <class CharT, class Traits>
std::basic_istream<CharT, Traits>&
    operator>>(std::basic_istream<CharT, Traits>& is,
        ubound& val)
{
    return is;
}

// C++11 string literals

namespace unum_literals {

unum operator""_unum(const char*, std::size_t)
{
    return unum();
}

ubound operator""_ubound(const char*, std::size_t)
{
    return ubound();
}

}

}


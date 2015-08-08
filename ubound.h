#include <cstdint>
#include <ios>

namespace ubnd {

/*  unum numeric class

    fixed width, 64bits of storage.
    environment {3,4}
*/

class unum
{
public:
    unum();     // exactly zero
    unum(const unum& val);
    unum(int val);
    unum(float val);

    unum& operator=(const unum& val);
    unum& operator=(int val);
    unum& operator=(float val);

    bool exact() const;
private:
    uint64_t m_data;
};

/*  ubound

    numeric class, fixed width, 2 * 64bits.
    environment {3,4}
*/

class ubound
{
public:
    ubound();   // exactly zero
    ubound(const ubound& val);
    ubound(const unum& val);
    ubound(const unum& left, const unum& right);
    ubound(int left, int right);
    ubound(float left, float right);

    ubound& operator=(const ubound& val);
    ubound& operator=(const unum& val);

    ubound& operator+=(const unum& other);
    ubound& operator-=(const unum& other);
    ubound& operator*=(const unum& other);
    ubound& operator/=(const unum& other);

    ubound& operator+=(const ubound& other);
    ubound& operator-=(const ubound& other);
    ubound& operator*=(const ubound& other);
    ubound& operator/=(const ubound& other);

    bool pair() const;
    const unum& left() const;
    const unum& right() const;
private:
    void setpair(bool);
private:
    unum m_left;
    unum m_right;
};

// Unary operators
unum operator+(const unum& val);
unum operator-(const unum& val);

ubound operator+(const ubound& val);
ubound operator-(const ubound& val);

/*  All binary operations can take any combination of unum and ubound,
    but will _always_ return a ubound.
*/

bool operator==(const unum& lhs, const unum& rhs);
bool operator!=(const unum& lhs, const unum& rhs);
bool operator>(const unum& lhs, const unum& rhs);
bool operator<(const unum& lhs, const unum& rhs);
bool operator>=(const unum& lhs, const unum& rhs);
bool operator<=(const unum& lhs, const unum& rhs);
ubound operator+(const unum& lhs, const unum& rhs);
ubound operator-(const unum& lhs, const unum& rhs);
ubound operator*(const unum& lhs, const unum& rhs);
ubound operator/(const unum& lhs, const unum& rhs);

bool operator==(const ubound& lhs, const ubound& rhs);
bool operator!=(const ubound& lhs, const ubound& rhs);
bool operator>(const ubound& lhs, const ubound& rhs);
bool operator<(const ubound& lhs, const ubound& rhs);
bool operator>=(const ubound& lhs, const ubound& rhs);
bool operator<=(const ubound& lhs, const ubound& rhs);
ubound operator+(const ubound& lhs, const ubound& rhs);
ubound operator-(const ubound& lhs, const ubound& rhs);
ubound operator*(const ubound& lhs, const ubound& rhs);
ubound operator/(const ubound& lhs, const ubound& rhs);

bool operator==(const unum& lhs, const ubound& rhs);
bool operator!=(const unum& lhs, const ubound& rhs);
bool operator>(const unum& lhs, const ubound& rhs);
bool operator<(const unum& lhs, const ubound& rhs);
bool operator>=(const unum& lhs, const ubound& rhs);
bool operator<=(const unum& lhs, const ubound& rhs);
ubound operator+(const unum& lhs, const ubound& rhs);
ubound operator-(const unum& lhs, const ubound& rhs);
ubound operator*(const unum& lhs, const ubound& rhs);
ubound operator/(const unum& lhs, const ubound& rhs);

bool operator==(const ubound& lhs, const unum& rhs);
bool operator!=(const ubound& lhs, const unum& rhs);
bool operator>(const ubound& lhs, const unum& rhs);
bool operator<(const ubound& lhs, const unum& rhs);
bool operator>=(const ubound& lhs, const unum& rhs);
bool operator<=(const ubound& lhs, const unum& rhs);
ubound operator+(const ubound& lhs, const unum& rhs);
ubound operator-(const ubound& lhs, const unum& rhs);
ubound operator*(const ubound& lhs, const unum& rhs);
ubound operator/(const ubound& lhs, const unum& rhs);

// Exponential functions
unum abs(const unum& val); // abs on unum _can_ losslessly produce a unum
ubound abs(const ubound& val);

ubound pow(const unum& val, const unum& pow);
ubound pow(const unum& val, const ubound& pow);
ubound pow(const ubound& val, const unum& pow);
ubound pow(const ubound& val, const ubound& pow);

ubound sqrt(const unum& val);
ubound sqrt(const ubound& val);

// Trigonometric functions
ubound sin(const unum& val);
ubound cos(const unum& val);
ubound tan(const unum& val);
ubound asin(const unum& val);
ubound acos(const unum& val);
ubound atan(const unum& val);

ubound sin(const ubound& val);
ubound cos(const ubound& val);
ubound tan(const ubound& val);
ubound asin(const ubound& val);
ubound acos(const ubound& val);
ubound atan(const ubound& val);

// Hyperbolic functions
ubound sinh(const unum& val);
ubound cosh(const unum& val);
ubound tanh(const unum& val);
ubound asinh(const unum& val);
ubound acosh(const unum& val);
ubound atanh(const unum& val);

ubound sinh(const ubound& val);
ubound cosh(const ubound& val);
ubound tanh(const ubound& val);
ubound asinh(const ubound& val);
ubound acosh(const ubound& val);
ubound atanh(const ubound& val);

// std iostream support
template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
    operator<<(std::basic_ostream<CharT, Traits>& os,
        const unum& val);

template <class CharT, class Traits>
std::basic_istream<CharT, Traits>&
    operator>>(std::basic_istream<CharT, Traits>& is,
        unum& val);

template <class CharT, class Traits>
std::basic_ostream<CharT, Traits>&
    operator<<(std::basic_ostream<CharT, Traits>& os,
        const ubound& val);

template <class CharT, class Traits>
std::basic_istream<CharT, Traits>&
    operator>>(std::basic_istream<CharT, Traits>& is,
        ubound& val);

// C++11 string literals

namespace unum_literals {

unum operator""_unum(const char*, std::size_t);
ubound operator""_ubound(const char*, std::size_t);

}

}


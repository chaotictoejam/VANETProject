/**
 * Copyright (c) 2005 Jan Ringo�, www.ringos.cz
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the author be held liable for any damages arising from the
 * use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * The origin of this software must not be misrepresented; you must not claim
 * that you wrote the original software. If you use this software in a
 * product, an acknowledgment in the product documentation would be
 * appreciated but is not required. Altered source versions must be plainly
 * marked as such, and must not be misrepresented as being the original
 * software. This notice may not be removed or altered from any source
 * distribution.
 */


#include "VanetBigUint.h"
#include <math.h>

void VanetBigUint::resizeBits(unsigned int bits)
{
    unsigned int numuint = ceil((double)bits/(double)(sizeof(uint64_t)*8));
    if (numuint < value.size())
    {
        value.resize(numuint);
        defaultSize = numuint;
    }
    else if (numuint > value.size())
    {
        for (unsigned int i = 0; i < numuint; i++)
            value.push_back(0);
        defaultSize = numuint;
    }
}

const char *VanetBigUint::toString(unsigned int radix) const
{
    if (!*this) return "0";
    if (radix < 2 || radix > 37) return "(invalid radix)";

    static char sz[256];
    memset(sz, 0, 256);

    VanetBigUint r;
    VanetBigUint ii(*this);
    VanetBigUint aux(radix);
    int i = 255;

    while (!!ii && i)
    {
        ii = ii.div(aux, r);
        unsigned int c = r.toUint();
        sz[--i] = c + ((c > 9) ? 'A' - 10 : '0');
    }

    return &sz[i];
}

void VanetBigUint::set(const char *sz)
{

    clear();

    if (!sz) return;
    if (!sz [0]) return;

    unsigned int radix = 10;
    unsigned int i = 0;
    bool minus = false;

    if (sz [i] == '-')
    {
        ++i;
        minus = true;
    }

    if (sz [i] == '0')
    {
        radix = 8;
        ++i;
        if (sz [i] == 'x')
        {
            radix = 16;
            ++i;
        }
    }

    for (; i < strlen(sz); ++i)
    {
        unsigned int n = 0;
        if ((sz [i] >= '0') && (sz [i] <= '9'))
        {
            if (radix == 8 && (sz [i] >= '9'))
                break;
            n = sz [i] - '0';
        }
        else if ((sz [i] >= 'a') && (sz [i] <= 'a' + (int) radix - 10))
            n = sz [i] - 'a' + 10;
        else if (sz [i] >= 'A' && sz [i] <= 'A' + (int) radix - 10)
            n = sz [i] - 'A' + 10;
        else
            break;
        (*this) *= VanetBigUint(radix);
        (*this) += VanetBigUint(n);
    }

    if (minus)
    {
        *this = VanetBigUint(0) - *this;
    }
}

VanetBigUint& VanetBigUint::operator=(const float& a)
{
    clear();
    value[0] = ((uint64_t) fmodf(a, 18446744073709551616.0f));
    value[1] = ((uint64_t) (a / 18446744073709551616.0f));
    return *this;
}

VanetBigUint& VanetBigUint::operator=(const double& a)
{
    clear();
    value[0] = ((uint64_t) fmod(a, 18446744073709551616.0));
    value[1] = ((uint64_t) (a / 18446744073709551616.0));
    return *this;
}

VanetBigUint& VanetBigUint::operator=(const long double& a)
{
    clear();
    value[0] = ((uint64_t) fmod(a, 18446744073709551616.0));
    value[1] = ((uint64_t) (a / 18446744073709551616.0));
    return *this;
}


VanetBigUint::VanetBigUint(const float a)
{
    clear();
    value[0] = ((uint64_t) fmod(a, 18446744073709551616.0));
    value[1] = ((uint64_t) (a / 18446744073709551616.0));
}

VanetBigUint::VanetBigUint(const double &a)
{
    clear();
    value[0] = ((uint64_t) fmod(a, 18446744073709551616.0));
    value[1] = ((uint64_t) (a / 18446744073709551616.0));
}


VanetBigUint::VanetBigUint(const long double &a)
{
    clear();
    value[0] = ((uint64_t) fmod(a, 18446744073709551616.0));
    value[1] = ((uint64_t) (a / 18446744073709551616.0));
}

float VanetBigUint::toFloat() const
{
    return (float) value[1] * 18446744073709551616.0f
           + (float) value[0];
}

double VanetBigUint::toDouble() const
{
    return (double) value[1] * 18446744073709551616.0
           + (double) value[0];
}

long double VanetBigUint::toLongDouble() const
{
    return (long double) value[1] * 18446744073709551616.0l
           + (long double) value[0];
}

VanetBigUint VanetBigUint::operator-() const
{
    std::vector<uint64_t> v = value;
    unsigned int i;
    for (i =0;i<value.size();i++)
    {
        if (v[i] == 0) continue;
        else break;
    }

    if (i == value.size()-1)
        v[value.size()-1] = -value[value.size()-1];
    else
    {
        v[i] = -value[i];
        i++;
        for (;i<value.size();i++)
            v[i] = ~value[i];
    }
    return VanetBigUint(v);
}

VanetBigUint VanetBigUint::operator ~ () const
{
    std::vector<uint64_t> v = value;
    for (unsigned int i =0;i<value.size();i++)
        v[i] = ~value[i];
    return VanetBigUint(v);
}

VanetBigUint& VanetBigUint::operator++()
{
    ++value[0];
    for (unsigned int i = 0;i<value.size()-1;i++)
    {
        if (!value[i])
           ++value[i+1];
        else
            break;
    }

    return *this;
}

VanetBigUint& VanetBigUint::operator--()
{
    uint32_t max=0;
    for (unsigned int i = 0;i<value.size();i++)
    {
        if (!value[i])
            max = i;
        else
            break;
    }
    for (unsigned int i = 0;i<=max;i++)
    {
        --value[i];
    }
    return *this;
}

VanetBigUint VanetBigUint::operator++(int)
{
    VanetBigUint b(*this);
    ++ *this;

    return b;
}

VanetBigUint VanetBigUint::operator--(int)
{
    VanetBigUint b(*this);
    -- *this;

    return b;
}

VanetBigUint& VanetBigUint::operator+=(const VanetBigUint& b)
{
    resizeTo(b);
    std::vector<uint64_t> oldValue = value;
    for (unsigned int i =0 ; i< b.value.size();i++)
    {
        value[i] += b.value[i];
        if (value[i] < oldValue[i] && i<b.value.size()-1)
            value[i+1]++;
    }
    return *this;
}

VanetBigUint& VanetBigUint::operator*=(const VanetBigUint& b)
{
    if (!b)
        return *this = 0u;
    if (b == 1u)
        return *this;
    resizeTo(b);

    VanetBigUint a = *this;
    VanetBigUint t = b;
    clear();
    uint32_t numB = b.value.size()* sizeof(uint64_t)*8;

    for (unsigned int i = 0; i < numB; ++i)
    {
        if (t.value[0] & 1)
            *this += a << i;

        t >>= 1;
    }

    return *this;
}


VanetBigUint VanetBigUint::div(const VanetBigUint& ds, VanetBigUint& remainder) const
{
    if (!ds)
        return 1u / (unsigned int) ds.value[0];

    VanetBigUint dd = *this;

    // only remainder
    if (ds > dd)
    {
        remainder = *this;
        return (VanetBigUint)0;
    }

    VanetBigUint r;
    VanetBigUint q;
    r.resizeTo(*this);
    q.resizeTo(*this);

    uint32_t numB = dd.value.size()* sizeof(uint64_t)*8;
    uint32_t b = numB-1;
    while (r < ds)
    {
        r <<= 1;
        if (dd.bit(b--))
            r.value[0] |= 1;
    }
    ++b;

    while (true)
        if (r < ds)
        {
            if (!(b--)) break;

            r <<= 1;
            if (dd.bit(b))
                r.value[0] |= 1;

        }
        else
        {
            r -= ds;
            q.bit(b, true);
        }

    remainder = r;
    return q;
}

bool VanetBigUint::bit(unsigned int n) const
{

    if (n >= value.size()* 64)
        return false;
    uint32_t v = n/64;
    uint32_t pos = n-(v*64);
    return value[v] & (1ull << pos);
}

void VanetBigUint::bit(unsigned int n, bool val)
{
    if (n >= value.size()* 64)
        return;
    uint32_t v = n/64;
    uint32_t pos = n-(v*64);
    if (val)
        value[v] |= (1ull << pos);
    else
        value[v] &= ~(1ull << pos);
}


VanetBigUint& VanetBigUint::operator>>=(unsigned int n)
{
    if (n >= value.size()* 64)
    {
        clear();
        return *this;
    }

    uint32_t increment = n/64;
    uint32_t rest = n-(increment*64);
    if (increment)
    {
        for (unsigned int i = 0;i < value.size()-increment;i++)
            value[i] = value [i+increment];
        for (unsigned int i = increment;i < value.size();i++)
            value[i] = 0;
    }
    if (rest == 0)
        return *this;
    uint64_t mask = (1ull << rest) - 1;
    for (unsigned int i = 0;i < value.size()-increment-1;i++)
    {
        value[i] >>=rest;
        value[i] |= (value[i+1] & mask) << (64 - rest);    
    }
    value[value.size()-increment-1] >>=rest;
    return *this;
}

VanetBigUint& VanetBigUint::operator<<=(unsigned int n)
{


    if (n >= value.size()* 64)
    {
        clear();
        return *this;
    }

    uint32_t increment = n/64;
    uint32_t rest = n-(increment*64);
    if (increment)
    {
        for (unsigned int i = value.size()-1 ;i > value.size() - increment -1 ;i--)
            value[i] = value [i-increment];
        for (unsigned int i = increment - 1; i >= 0; i--)
            value[i] = 0;
    }
    if (rest == 0)
        return *this;
    uint64_t mask = ~((1ull << (64 - n)) - 1);
    for (unsigned int i = value.size()-1 ;i > value.size() - increment -1 ;i--)
    {
        value[i] <<=rest;
        value[i] |= (value[i-1] & mask) >> (64 - rest);    
    }

    value[value.size()-increment-1] <<=rest;
    return *this;
}


bool operator!=(const VanetBigUint& a, const uint32_t& b)
{
    return  !(a == b);
}

bool operator!=(const uint32_t& b, const VanetBigUint& a)
{
    return  !(a == b);
}

bool operator!=(const VanetBigUint& a, const uint64_t& b)
{
    return  !(a == b);
}

bool operator!=(const uint64_t& b, const VanetBigUint& a)
{
    return  !(a == b);
}


bool operator!=(const VanetBigUint& a, const int32_t& b)
{
    return  !(a == b);
}

bool operator!=(const int32_t& b, const VanetBigUint& a)
{
    return  !(a == b);
}

bool operator!=(const VanetBigUint& a, const int64_t& b)
{
    return  !(a == b);
}

bool operator!=(const int64_t& b, const VanetBigUint& a)
{
    return  !(a == b);
}


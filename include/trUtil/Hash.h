/*
* True Reality Open Source Game and Simulation Engine
* Copyright � 2018 Acid Rain Studios LLC
*
* The Base of this class has been adopted from the Delta3D engine
*
* This library is free software; you can redistribute it and/or modify it under
* the terms of the GNU Lesser General Public License as published by the Free
* Software Foundation; either version 3.0 of the License, or (at your option)
* any later version.
*
* This library is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
* details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this library; if not, write to the Free Software Foundation, Inc.,
* 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*
* Class Inspired by the Delta3D Engine
* http://delta3dengine.org/
*
* Author: David Guthrie
* Author: Maxim Serebrennik
*/
#pragma once

#include <string>

namespace trUtil
{
    /**
    * This Hash class and its implementations are taken from the libstdc++ hash_fun.h
    */
    template<class _Key> struct hash;

    template<class _Key> struct hash<_Key*>
    {
        size_t operator()(const _Key* keyPtr) const
        {
            return size_t(keyPtr);
        }
    };

    inline size_t __hash_string(const char* __s)
    {
        unsigned long __h = 0;
        for (; *__s; ++__s)
            __h = 5 * __h + *__s;
        return size_t(__h);
    }

    template<> struct hash<const std::string>
    {
        size_t operator()(const std::string& string) const
        {
            return __hash_string(string.c_str());
        }
    };

    template<> struct hash<std::string>
    {
        size_t operator()(const std::string& string) const
        {
            return __hash_string(string.c_str());
        }
    };

    template<> struct hash<char*>
    {
        size_t operator()(const char* __s) const
        {
            return __hash_string(__s);
        }
    };

    template<> struct hash<const char*>
    {
        size_t operator()(const char* __s) const
        {
            return __hash_string(__s);
        }
    };

    template<> struct hash<char>
    {
        size_t operator()(char __x) const
        {
            return __x;
        }
    };

    template<> struct hash<unsigned char>
    {
        size_t operator()(unsigned char __x) const
        {
            return __x;
        }
    };

    template<> struct hash<signed char>
    {
        size_t operator()(unsigned char __x) const
        {
            return __x;
        }
    };

    template<> struct hash<short>
    {
        size_t operator()(short __x) const
        {
            return __x;
        }
    };

    template<> struct hash<unsigned short>
    {
        size_t operator()(unsigned short __x) const
        {
            return __x;
        }
    };

    template<> struct hash<int>
    {
        size_t operator()(int __x) const
        {
            return __x;
        }
    };

    template<> struct hash<unsigned int>
    {
        size_t operator()(unsigned int __x) const
        {
            return __x;
        }
    };

    template<> struct hash<long>
    {
        size_t operator()(long __x) const
        {
            return __x;
        }
    };

    template<> struct hash<unsigned long>
    {
        size_t operator()(unsigned long __x) const
        {
            return __x;
        }
    };
}


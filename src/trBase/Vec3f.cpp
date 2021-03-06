/*
* True Reality Open Source Game and Simulation Engine
* Copyright � 2018 Acid Rain Studios LLC
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
* Author: Maxim Serebrennik
*/

#include <trBase/Vec3f.h>

#include <osg/Vec3d>
#include <trBase/Vec3d.h>

// Specialize Vec3Impl to be Vec3f
#define Vec3Impl Vec3f

namespace trBase
{
    //////////////////////////////////////////////////////////////////////////
    Vec3f::Vec3f(const osg::Vec3d &v)
    {
        mVec.set(static_cast<double>(v.x()), static_cast<double>(v.y()), static_cast<double>(v.z()));
    }

    //////////////////////////////////////////////////////////////////////////
    void Vec3f::operator = (const Vec3d& v)
    {
        mVec[0] = static_cast<double>(v.X());  mVec[1] = static_cast<double>(v.Y()); mVec[2] = static_cast<double>(v.Z());
    }
}

// Now compile up Vector via Vec2Impl
#include "Vec3Impl.cpp"

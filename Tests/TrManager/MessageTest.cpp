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

#include "MessageTest.h"

const trUtil::RefStr MessageTest::MESSAGE_TYPE("trManager::MessageTest");

int MessageTest::mInstCount = 0;

//////////////////////////////////////////////////////////////////////////
MessageTest::MessageTest(const trBase::UniqueId* fromActorID, const trBase::UniqueId* aboutActorID)
    : BaseClass(fromActorID, aboutActorID)
{
	++mInstCount;
}

//////////////////////////////////////////////////////////////////////////
MessageTest::~MessageTest()
{
	--mInstCount;
}

//////////////////////////////////////////////////////////////////////////
const std::string& MessageTest::GetMessageType() const
{
    return MESSAGE_TYPE;
}

//////////////////////////////////////////////////////////////////////////
int MessageTest::GetInstCount()
{
	return mInstCount;
}

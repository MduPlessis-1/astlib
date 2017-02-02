///
/// \package astlib
/// \file FixedItemDescription.cpp
///
/// \author Marian Krivos <marian.krivos@rsys.sk>
/// \date 2Feb.,2017 
/// \brief definicia typu
///
/// (C) Copyright 2017 R-SYS s.r.o
/// All rights reserved.
///

#include "FixedItemDescription.h"

namespace astlib
{

FixedItemDescription::FixedItemDescription(int id, const std::string& description, int length, const BitsDescriptionArray& bits) :
    ItemDescription(id, description),
    _length(length)
{
}

FixedItemDescription::~FixedItemDescription()
{
}

} /* namespace astlib */

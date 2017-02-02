///
/// \package astlib
/// \file FixedItemDescription.h
///
/// \author Marian Krivos <marian.krivos@rsys.sk>
/// \date 2Feb.,2017 
/// \brief definicia typu
///
/// (C) Copyright 2017 R-SYS s.r.o
/// All rights reserved.
///

#pragma once

#include "ItemDescription.h"

namespace astlib
{

class FixedItemDescription:
    public ItemDescription
{
public:
    FixedItemDescription(int id, const std::string& description, int length, const BitsDescriptionArray& bits);
    virtual ~FixedItemDescription();

private:
    virtual ItemFormat getType() const { return ItemFormat::Fixed; }

    BitsDescriptionArray _bitsDescriptions;
    int _length;
};

} /* namespace astlib */


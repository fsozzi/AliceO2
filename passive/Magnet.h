/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *         GNU Lesser General Public Licence version 3 (LGPL) version 3,        *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    Magnet  file                               -----
// -----                Created 26/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------


#ifndef ALICEO2_PASSIVE_MAGNET_H
#define ALICEO2_PASSIVE_MAGNET_H

#include "FairModule.h"                 // for FairModule
#include "Rtypes.h"                     // for Magnet::Class, Bool_t, etc
#include <string>                       // for string
namespace AliceO2 {
namespace Passive {

class Magnet : public FairModule
{
  public:
    Magnet(const char* name, const char* Title="MY Magnet");
    Magnet();
    virtual ~Magnet();
    void ConstructGeometry();
    ClassDef(AliceO2::Passive::Magnet,1)

};

}
}
    
#endif //MAGNET_H


/*
 *  Open BEAGLE
 *  Copyright (C) 2001-2007 by Christian Gagne and Marc Parizeau
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact:
 *  Laboratoire de Vision et Systemes Numeriques
 *  Departement de genie electrique et de genie informatique
 *  Universite Laval, Quebec, Canada, G1K 7P4
 *  http://vision.gel.ulaval.ca
 *
 */

/*!
 *  \file   beagle/GP/MutationStandardDepthSelectiveConstrainedOp.hpp
 *  \brief  Definition of the class GP::MutationStandardDepthSelectiveConstrainedOp.
 *  \author Christian Gagne
 *  \author Marc Parizeau
 *  $Revision: 1.1 $
 *  $Date: 2010/06/26 20:54:45 $
 */

#ifndef Beagle_GP_MutationStandardDepthSelectiveConstrainedOp_hpp
#define Beagle_GP_MutationStandardDepthSelectiveConstrainedOp_hpp

#include <string>

#include "beagle/config.hpp"
#include "beagle/macros.hpp"
#include "beagle/Object.hpp"
#include "beagle/MutationOp.hpp"
#include "beagle/UInt.hpp"
#include "beagle/Float.hpp"
#include "beagle/Bool.hpp"
#include "beagle/GP/Context.hpp"
#include "beagle/GP/System.hpp"
#include "beagle/GP/Individual.hpp"
#include "beagle/GP/MutationStandardConstrainedOp.hpp"
#include "beagle/GP/InitGrowConstrainedOp.hpp"
#include "DepthDependentSelectionOp.h"

namespace Beagle {
namespace GP {

/*!
 *  \class MutationStandardDepthSelectiveConstrainedOp
 *    beagle/GP/MutationStandardDepthSelectiveConstrainedOp.hpp "beagle/GP/MutationStandardDepthSelectiveConstrainedOp.hpp"
 *  \brief GP standard mutation operator class, as described in Genetic Programming I.
 *  \ingroup GPF
 *  \ingroup GPOp
 */
class MutationStandardDepthSelectiveConstrainedOp : public MutationStandardConstrainedOp, public DepthDependentSelectionOp {

public:

  //! GP::MutationStandardDepthSelectiveConstrainedOp allocator type.
  typedef AllocatorT<MutationStandardDepthSelectiveConstrainedOp,MutationStandardConstrainedOp::Alloc>
          Alloc;
  //! GP::MutationStandardDepthSelectiveConstrainedOp handle type.
  typedef PointerT<MutationStandardDepthSelectiveConstrainedOp,MutationStandardConstrainedOp::Handle>
          Handle;
  //! GP::MutationStandardDepthSelectiveConstrainedOp bag type.
  typedef ContainerT<MutationStandardDepthSelectiveConstrainedOp,MutationStandardConstrainedOp::Bag>
          Bag;

  explicit MutationStandardDepthSelectiveConstrainedOp(GP::InitializationOp::Handle inInitOp=
                                           new Beagle::GP::InitGrowConstrainedOp,
                                         std::string inMutationPbName="gp.mutstd.indpb",
                                         std::string inMaxRegenDepthName="gp.mutstd.maxdepth",
                                         std::string inName="GP-MutationStandardDepthSelectiveConstrainedOp");
  virtual ~MutationStandardDepthSelectiveConstrainedOp() { }

  virtual void initialize(Beagle::System& ioSystem);
  virtual bool mutate(Beagle::Individual& ioIndividual, Beagle::Context& ioContext);


};

}
}

#endif // Beagle_GP_MutationStandardConstrainedOp_hpp

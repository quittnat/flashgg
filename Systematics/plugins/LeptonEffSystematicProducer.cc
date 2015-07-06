#include "flashgg/DataFormats/interface/Electron.h"
#include "flashgg/DataFormats/interface/Muon.h"
#include "flashgg/Systematics/interface/BaseSystMethod.h"
#include "flashgg/Systematics/interface/ObjectSystematicProducer.h"
#include "flashgg/Systematics/interface/LeptonEffSmear.h"

namespace flashgg {

    typedef ObjectSystematicProducer<flashgg::Electron, int> ElectronEffSystematicProducer;
    typedef ObjectSystematicProducer<flashgg::Muon, int> MuonEffSystematicProducer;

}

typedef flashgg::ElectronEffSystematicProducer FlashggElectronEffSystematicProducer;
DEFINE_FWK_MODULE( FlashggElectronEffSystematicProducer );

typedef flashgg::MuonEffSystematicProducer FlashggMuonEffSystematicProducer;
DEFINE_FWK_MODULE( FlashggMuonEffSystematicProducer );

// Local Variables:
// mode:c++
// indent-tabs-mode:nil
// tab-width:4
// c-basic-offset:4
// End:
// vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4
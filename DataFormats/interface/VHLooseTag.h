#ifndef FLASHgg_VHLooseTag_h
#define FLASHgg_VHLooseTag_h

#include "flashgg/DataFormats/interface/DiPhotonTagBase.h"
#include "DataFormats/PatCandidates/interface/Muon.h"
#include "flashgg/DataFormats/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/MET.h"
#include "flashgg/DataFormats/interface/Electron.h"

namespace flashgg {

	class VHLooseTag: public DiPhotonTagBase {
		public:
			VHLooseTag();
                        VHLooseTag(edm::Ptr<DiPhotonCandidate>,edm::Ptr<DiPhotonMVAResult>);
			VHLooseTag(edm::Ptr<DiPhotonCandidate>,DiPhotonMVAResult);
			~VHLooseTag();

                const edm::PtrVector<pat::Muon> muons() const { return Muons_;}
		const edm::PtrVector<flashgg::Electron> electrons() const {return Electrons_;}
		const edm::PtrVector<Jet> jets() const { return Jets_;}
		const edm::PtrVector<pat::MET> met() const { return MET_;} 

		void setJets(edm::PtrVector<Jet> Jets) { Jets_ = Jets; }
		void setMuons(edm::PtrVector<pat::Muon> Muons) {Muons_ = Muons;}
		void setMET(edm::PtrVector<pat::MET> MET) {MET_ = MET;}
		void setElectrons(edm::PtrVector<Electron> Electrons) {Electrons_ = Electrons;}

		VHLooseTag* clone() const;

                private:
                edm::PtrVector<pat::Muon> Muons_;  
		edm::PtrVector<Electron> Electrons_;
		edm::PtrVector<Jet> Jets_;
		edm::PtrVector<pat::MET> MET_;
	};
} 

#endif 


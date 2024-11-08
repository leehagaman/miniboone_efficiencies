#ifndef __COMBINEDTYPES_H__
#define __COMBINEDTYPES_H__

namespace sp {

  // pyROOT doesn't like enum class...
  enum NuType_t
    {
      kNUINVALID=0,
      kNUMU,
      kNUMUBAR,
      kNUE,
      kNUEBAR
    };

  // IBKG
  enum BkgdType_t
    {
      kBINVALID=0,
      kBCCQE,
      kBCCPIP,
      kBNCPI0,
      kBCHPI0,
      kBDELTA
    };

  
  enum StackedBkgdType_t
    {
      kBKGD_INVALID=0,
      kBKGD_DIRT,
      kBKGD_PI0,
      kBKGD_DELTA,
      kBKGD_NUEPIP,
      kBKGD_NUEKP,
      kBKGD_NUEK0,
      kBKGD_OTHER,
      kBKGD_MAX
    };
  
  enum NuanceType_t
    {
      kUNKNOWN=0,
      kCCQE=1,
      kNCQE=2,

      // Resonant single pion production
      kCC1p1pi=3,
      kCC1n1pi=5,
      kNC1p1pi0=6,
      kNC1n1pi0=8,
      
      kCCbar1p1pi=10,
      kCCbar1n1pi=12,
      kNCbar1p1pi0=13,
      kNCbar1n1pi0=15,

      // Delta radiative
      kCC1pNg=93,
      kNC1pNg=94,
      kNC1pi01a=96,
      kCC1pi1a=97
    };


  enum GEANT3Type_t {
    kINVALID=0,
    kGAMMA=1,
    kPOSITRON=2,
    kELECTRON=3,
    kNEUTRINO=4,
    kMUONP=5,
    kMUONM=6,
    kPION0=7,
    kPIONP=8,
    kPIONM=9,
    kKAON0LONG=10,
    kKAONP=11,
    kKAONM=12,
    kNEUTRON=13,
    kPROTON=14,
    kANTIPROTON=15,
    kKAON0SHORT=16,
    kETA=17,
    kLAMBDA=18,
    kSIGMAP=19,
    kSIGMA0=20,
    kSIGMAM=21,
    kXI0=22,
    kXIM=23,
    kOMEGAM=24,
    kANTINEUTRON=25,
    kANTILAMBDA=26,
    kANTISIGMAM=27,
    kANTISIGMA0=28,
    kANTISIGMAP=29,
    kANTIXI0=30,
    kANTIXIP=31,
    kANTIOMEGAP=32,
    kDEUTERON=45,
    kTRITON=46,
    kALPHA=47,
    kGEANTINO=48,
    kHE3=49,
    kCERENKOV=50
  };

}


#endif 

//-------------------------------------------------
//
//   Class L1MuDTChambPhDigi
//
//   Description: input data for Phase2 trigger
//
//
//   Author List: Federica Primavera  Bologna INFN
//
//
//--------------------------------------------------

//-----------------------
// This Class's Header --
//-----------------------
#include "DataFormats/L1DTTrackFinder/interface/L1MuDTChambDigi.h"

//-------------------------------
// Collaborating Class Headers --
//-------------------------------


//---------------
// C++ Headers --
//---------------
using namespace std;

//-------------------
// Initializations --
//-------------------


//----------------
// Constructors --
//----------------
L1MuDTChambDigi::L1MuDTChambDigi() {

  bx              = -100;
  wheel           = 0;
  sector          = 0;
  station         = 0;
  radialAngle     = 0;
  bendingAngle    = 0;
  zcoordinate     = 0;

  qualityCode     = 7;
  Ts2TagCode      = 0;
  BxCntCode       = 0;

  t0seg           = 0;
  chi2seg         = 0;

  rpcBit          = -10;
}

L1MuDTChambDigi::L1MuDTChambDigi( int ubx, int uwh, int usc, int ust,
				  int uphr, int uphb, int uz, int uqua, int utag, int ucnt, 
				  int ut0, int uchi2, int urpc ) {
  
  bx              = ubx;
  wheel           = uwh;
  sector          = usc;
  station         = ust;
  radialAngle     = uphr;
  bendingAngle    = uphb;
  zcoordinate     = uz;

  qualityCode     = uqua;
  Ts2TagCode      = utag;
  BxCntCode       = ucnt;

  t0seg           = ut0;
  chi2seg         = uchi2;

  rpcBit          = urpc;
}



//--------------
// Destructor --
//--------------
L1MuDTChambDigi::~L1MuDTChambDigi() {
}

//--------------
// Operations --
//--------------
int L1MuDTChambDigi::bxNum() const {
  return bx;
}

int L1MuDTChambDigi::whNum() const {
  return wheel;
}
int L1MuDTChambDigi::scNum() const {
  return sector;
}
int L1MuDTChambDigi::stNum() const {
  return station;
}

int L1MuDTChambDigi::phi() const {
  return radialAngle;
}

int L1MuDTChambDigi::phiB() const {
  return bendingAngle;
}

int L1MuDTChambDigi::z() const {
  return zcoordinate;
}

int L1MuDTChambDigi::quality() const {
  return qualityCode;
}

int L1MuDTChambDigi::Ts2Tag() const {
  return Ts2TagCode%2;
}

int L1MuDTChambDigi::BxCnt() const {
  return BxCntCode;
}

int L1MuDTChambDigi::UpDownTag()	const{
  return Ts2TagCode/2 ;
}

int L1MuDTChambDigi::t0() const {
  return t0seg;
}

int L1MuDTChambDigi::chi2() const {
  return chi2seg;
}

int L1MuDTChambDigi::RpcBit() const {
  return rpcBit;
}

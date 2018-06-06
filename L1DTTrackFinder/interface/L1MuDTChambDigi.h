//-------------------------------------------------
//
//   Class L1MuDTChambDigi	
//
//   Description: input data for Phase2 trigger
//
//
//   Author List: Federica Primavera  Bologna INFN
//
//
//--------------------------------------------------
#ifndef L1MuDTChambDigi_H
#define L1MuDTChambDigi_H

//------------------------------------
// Collaborating Class Declarations --
//------------------------------------


//----------------------
// Base Class Headers --
//----------------------


//---------------
// C++ Headers --
//---------------


//              ---------------------
//              -- Class Interface --
//              ---------------------

class L1MuDTChambDigi {

 public:

  //  Constructors
  L1MuDTChambDigi();

  L1MuDTChambDigi( int ubx, int uwh, int usc, int ust,
		   int uphr, int uphb, int uz, int uqua, int utag, int ucnt, 
		   int ut0, int uchi2, int urpc=-10);

  //  Destructor
  ~L1MuDTChambDigi();

  // Operations
  int bxNum()       const;
  int whNum()       const;
  int scNum()       const;
  int stNum()       const;
  int phi()         const;
  int phiB()        const;
  int z()           const;

  int quality()     const;
  int Ts2Tag()      const;
  int BxCnt()       const;
  int RpcBit()      const;
  int UpDownTag()   const;

  int t0()          const;
  int chi2()        const;


  

 private:

  int bx;
  int wheel;
  int sector;
  int station;
  int radialAngle;
  int bendingAngle;
  int zcoordinate;

  int qualityCode;
  int Ts2TagCode;
  int BxCntCode;

  int t0seg;
  int chi2seg;
  
  int rpcBit;
};

#endif

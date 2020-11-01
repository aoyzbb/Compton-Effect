//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file electromagnetic/TestEm10/include/MyPhysListTRD.hh
/// \brief Definition of the MyPhysListTRD class
//
// $Id: MyPhysListTRD.hh 66241 2012-12-13 18:34:42Z gunter $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#ifndef MyPhysListTRD_h
#define MyPhysListTRD_h 1

#include "G4VPhysicsConstructor.hh"
#include "globals.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

class G4TransitionRadiation;
class G4VXTRenergyLoss;
class MyDetectorConstruction;

class MyPhysListTRD : public G4VPhysicsConstructor
{
public:
    MyPhysListTRD(G4int verb, MyDetectorConstruction *ptr);
    virtual ~MyPhysListTRD();

    // This method is dummy for physics
    virtual void ConstructParticle(){};

    // This method will be invoked in the Construct() method.
    // each physics process will be instantiated and
    // registered to the process manager of each particle type
    virtual void ConstructProcess();

    inline void SetXTRModel(const G4String &name) { fXTRModel = name; };
    inline void SetprocessName(const G4String &processname) { processName = processname; };

private:
    MyDetectorConstruction *fDetector;
    G4int fVerbose;
    G4String processName;
    G4String fXTRModel;

    G4VXTRenergyLoss *fXTRProcess;
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

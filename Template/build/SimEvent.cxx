// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME SimEvent
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/ao/workstation/Compton-Effect/Template/source/AnalysisManager/include/SimEvent.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *SimEvent_Dictionary();
   static void SimEvent_TClassManip(TClass*);
   static void *new_SimEvent(void *p = 0);
   static void *newArray_SimEvent(Long_t size, void *p);
   static void delete_SimEvent(void *p);
   static void deleteArray_SimEvent(void *p);
   static void destruct_SimEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SimEvent*)
   {
      ::SimEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SimEvent));
      static ::ROOT::TGenericClassInfo 
         instance("SimEvent", "", 38,
                  typeid(::SimEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SimEvent_Dictionary, isa_proxy, 4,
                  sizeof(::SimEvent) );
      instance.SetNew(&new_SimEvent);
      instance.SetNewArray(&newArray_SimEvent);
      instance.SetDelete(&delete_SimEvent);
      instance.SetDeleteArray(&deleteArray_SimEvent);
      instance.SetDestructor(&destruct_SimEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SimEvent*)
   {
      return GenerateInitInstanceLocal((::SimEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SimEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SimEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::SimEvent*)0x0)->GetClass();
      SimEvent_TClassManip(theClass);
   return theClass;
   }

   static void SimEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_SimEvent(void *p) {
      return  p ? new(p) ::SimEvent : new ::SimEvent;
   }
   static void *newArray_SimEvent(Long_t nElements, void *p) {
      return p ? new(p) ::SimEvent[nElements] : new ::SimEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_SimEvent(void *p) {
      delete ((::SimEvent*)p);
   }
   static void deleteArray_SimEvent(void *p) {
      delete [] ((::SimEvent*)p);
   }
   static void destruct_SimEvent(void *p) {
      typedef ::SimEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SimEvent

namespace {
  void TriggerDictionaryInitialization_SimEvent_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/ao/workstation/Compton-Effect/Template",
"/home/ao/download/geant4.10.06-install/include/Geant4",
"/home/ao/download/geant4.10.06-install/include/Geant4",
"/home/ao/workstation/Compton-Effect/Template/source/G4Actions/include",
"/home/ao/workstation/Compton-Effect/Template/source/PhysicsList/include",
"/home/ao/workstation/Compton-Effect/Template/source/AnalysisManager/include",
"/home/ao/workstation/Compton-Effect/Template/source/DetectorConstruction/include",
"/home/ao/workstation/Compton-Effect/Template/source/ParticleSource/include",
"/home/ao/download/root_v6.20.04.Linux-ubuntu18-x86_64-gcc7.5/root/include/",
"/home/ao/workstation/Compton-Effect/Template/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "SimEvent dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class SimEvent;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "SimEvent dictionary payload"

#ifndef G4UI_USE_TCSH
  #define G4UI_USE_TCSH 1
#endif
#ifndef G4INTY_USE_QT
  #define G4INTY_USE_QT 1
#endif
#ifndef G4UI_USE_QT
  #define G4UI_USE_QT 1
#endif
#ifndef G4VIS_USE_OPENGLQT
  #define G4VIS_USE_OPENGLQT 1
#endif
#ifndef G4INTY_USE_XT
  #define G4INTY_USE_XT 1
#endif
#ifndef G4VIS_USE_OPENGLX
  #define G4VIS_USE_OPENGLX 1
#endif
#ifndef G4VIS_USE_OPENGL
  #define G4VIS_USE_OPENGL 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
//*********************************************
//  This is auto generated by G4gen 0.6
//                                  author:Qian

#ifndef SimEvent_h
#define SimEvent_h

#include "TVector3.h"
#include "TObject.h"
#include "TMap.h"
#include "TObjString.h"
#include "Verbose.hh"
#include <map>

class SimEvent : public TObject
{

public:
    SimEvent() { MyClear(); }
    virtual ~SimEvent() {}

    void MyClear()
    {
        stored = 0;
        //hit.clear();
        eng.clear();
    }
    /*
    void SetHitInfo(G4ThreeVector _hpos, G4ThreeVector _hmom, G4RotationMatrix _rot, G4ThreeVector _tran, G4ThreeVector _norm, G4double _ang)
    {
        if (!stored)
        {
            hitPos = _hpos;
            hitMom = _hmom;
            rotation = _rot;
            translation = _tran;
            normal = _norm;
            incidenceAngle = _ang;
            stored = 1;
        }
    }
    void StoreHit(G4ThreeVector _hpos, G4double _eng)
    {
        hit.push_back(&_hpos);
        eng.push_back(_eng);
    }
    */

public:
    bool stored;
    //G4ThreeVector hitPos;
    //G4ThreeVector hitMom;
    //G4RotationMatrix rotation;
    //G4ThreeVector translation;
    //G4ThreeVector normal;
    double incidenceAngle;

    //std::vector<G4ThreeVector* > hit;
    std::vector<double> eng;

};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"SimEvent", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("SimEvent",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_SimEvent_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_SimEvent_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_SimEvent() {
  TriggerDictionaryInitialization_SimEvent_Impl();
}

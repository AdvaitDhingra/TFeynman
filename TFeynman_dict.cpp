// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TFeynman_dict
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

// Header files passed as explicit arguments
#include "TFeynman.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TFeynman(void *p = nullptr);
   static void *newArray_TFeynman(Long_t size, void *p);
   static void delete_TFeynman(void *p);
   static void deleteArray_TFeynman(void *p);
   static void destruct_TFeynman(void *p);
   static void streamer_TFeynman(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TFeynman*)
   {
      ::TFeynman *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TFeynman >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TFeynman", ::TFeynman::Class_Version(), "TFeynman.h", 21,
                  typeid(::TFeynman), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TFeynman::Dictionary, isa_proxy, 16,
                  sizeof(::TFeynman) );
      instance.SetNew(&new_TFeynman);
      instance.SetNewArray(&newArray_TFeynman);
      instance.SetDelete(&delete_TFeynman);
      instance.SetDeleteArray(&deleteArray_TFeynman);
      instance.SetDestructor(&destruct_TFeynman);
      instance.SetStreamerFunc(&streamer_TFeynman);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TFeynman*)
   {
      return GenerateInitInstanceLocal((::TFeynman*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TFeynman*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TFeynman::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TFeynman::Class_Name()
{
   return "TFeynman";
}

//______________________________________________________________________________
const char *TFeynman::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFeynman*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TFeynman::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TFeynman*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TFeynman::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFeynman*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TFeynman::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TFeynman*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TFeynman::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFeynman.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TAttLine::Streamer(R__b);
      TObject::Streamer(R__b);
      R__b >> fPrimitives;
      R__b.CheckByteCount(R__s, R__c, TFeynman::IsA());
   } else {
      R__c = R__b.WriteVersion(TFeynman::IsA(), kTRUE);
      TAttLine::Streamer(R__b);
      TObject::Streamer(R__b);
      R__b << fPrimitives;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TFeynman(void *p) {
      return  p ? new(p) ::TFeynman : new ::TFeynman;
   }
   static void *newArray_TFeynman(Long_t nElements, void *p) {
      return p ? new(p) ::TFeynman[nElements] : new ::TFeynman[nElements];
   }
   // Wrapper around operator delete
   static void delete_TFeynman(void *p) {
      delete ((::TFeynman*)p);
   }
   static void deleteArray_TFeynman(void *p) {
      delete [] ((::TFeynman*)p);
   }
   static void destruct_TFeynman(void *p) {
      typedef ::TFeynman current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TFeynman(TBuffer &buf, void *obj) {
      ((::TFeynman*)obj)->::TFeynman::Streamer(buf);
   }
} // end of namespace ROOT for class ::TFeynman

namespace {
  void TriggerDictionaryInitialization_TFeynman_dict_Impl() {
    static const char* headers[] = {
"TFeynman.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/advait/rootbuild/include/",
"/home/advait/Documents/TFeynman/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "TFeynman_dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate(R"ATTRDUMP(Feynman diagram)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TFeynman.h")))  TFeynman;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "TFeynman_dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TFeynman.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"TFeynman", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TFeynman_dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TFeynman_dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TFeynman_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TFeynman_dict() {
  TriggerDictionaryInitialization_TFeynman_dict_Impl();
}

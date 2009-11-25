
#ifdef __cplusplus
template<typename T> class SwigValueWrapper {
    T *tt;
public:
    SwigValueWrapper() : tt(0) { }
    SwigValueWrapper(const SwigValueWrapper<T>& rhs) : tt(new T(*rhs.tt)) { }
    SwigValueWrapper(const T& t) : tt(new T(t)) { }
    ~SwigValueWrapper() { delete tt; } 
    SwigValueWrapper& operator=(const T& t) { delete tt; tt = new T(t); return *this; }
    operator T&() const { return *tt; }
    T *operator&() { return tt; }
private:
    SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif




#ifdef __cplusplus
#  define EXTERN   extern "C"
#else
#  define EXTERN   extern
#endif

#define EXPORT   EXTERN SWIGEXPORT

#include <string.h>



#ifdef __cplusplus
#  define EXTERN   extern "C"
#else
#  define EXTERN   extern
#endif

#define EXPORT   EXTERN SWIGEXPORT

#include <string.h>
#include <stdlib.h>



#include "poppler-qt4.h"
#include "poppler-annotation.h"
#include "poppler-link.h"
#include "poppler-optcontent.h"
#include "poppler-page-transition.h"

#include <Qt/QtGui>
#include <QtCore/QByteArray>
#include <QtCore/QDateTime>
#include <QtCore/QSet>
#include <QtXml/QDomDocument>
#include "poppler-export.h"


EXPORT Poppler::TextBox *_wrap_new_TextBox (QString *larg1, QRectF *larg2) {
  Poppler::TextBox * lresult = (Poppler::TextBox *)0 ;
  QString *arg1 = 0 ;
  QRectF *arg2 = 0 ;
  Poppler::TextBox *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = (Poppler::TextBox *)new Poppler::TextBox((QString const &)*arg1,(QRectF const &)*arg2);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::TextBox *)0;
  }
}


EXPORT void _wrap_delete_TextBox (Poppler::TextBox *larg1) {
  Poppler::TextBox *arg1 = (Poppler::TextBox *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT QString *_wrap_TextBox_text (Poppler::TextBox *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::TextBox *arg1 = (Poppler::TextBox *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::TextBox const *)arg1)->text();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT QRectF *_wrap_TextBox_boundingBox (Poppler::TextBox *larg1) {
  QRectF * lresult = (QRectF *)0 ;
  Poppler::TextBox *arg1 = (Poppler::TextBox *) 0 ;
  QRectF result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::TextBox const *)arg1)->boundingBox();
    lresult = new QRectF(result);
    return lresult;
  } catch (...) {
    return (QRectF *)0;
  }
}


EXPORT Poppler::TextBox *_wrap_TextBox_nextWord (Poppler::TextBox *larg1) {
  Poppler::TextBox * lresult = (Poppler::TextBox *)0 ;
  Poppler::TextBox *arg1 = (Poppler::TextBox *) 0 ;
  Poppler::TextBox *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::TextBox *)((Poppler::TextBox const *)arg1)->nextWord();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::TextBox *)0;
  }
}


EXPORT QRectF *_wrap_TextBox_charBoundingBox (Poppler::TextBox *larg1, int larg2) {
  QRectF * lresult = (QRectF *)0 ;
  Poppler::TextBox *arg1 = (Poppler::TextBox *) 0 ;
  int arg2 ;
  QRectF result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = ((Poppler::TextBox const *)arg1)->charBoundingBox(arg2);
    lresult = new QRectF(result);
    return lresult;
  } catch (...) {
    return (QRectF *)0;
  }
}


EXPORT int _wrap_TextBox_hasSpaceAfter (Poppler::TextBox *larg1) {
  int lresult = (int)0 ;
  Poppler::TextBox *arg1 = (Poppler::TextBox *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::TextBox const *)arg1)->hasSpaceAfter();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT Poppler::FontInfo *_wrap_new_FontInfo__SWIG_0 () {
  Poppler::FontInfo * lresult = (Poppler::FontInfo *)0 ;
  Poppler::FontInfo *result = 0 ;
  
  try {
    result = (Poppler::FontInfo *)new Poppler::FontInfo();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::FontInfo *)0;
  }
}


EXPORT Poppler::FontInfo *_wrap_new_FontInfo__SWIG_1 (Poppler::FontInfoData *larg1) {
  Poppler::FontInfo * lresult = (Poppler::FontInfo *)0 ;
  Poppler::FontInfoData *arg1 = 0 ;
  Poppler::FontInfo *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::FontInfo *)new Poppler::FontInfo((Poppler::FontInfoData const &)*arg1);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::FontInfo *)0;
  }
}


EXPORT Poppler::FontInfo *_wrap_new_FontInfo__SWIG_2 (Poppler::FontInfo *larg1) {
  Poppler::FontInfo * lresult = (Poppler::FontInfo *)0 ;
  Poppler::FontInfo *arg1 = 0 ;
  Poppler::FontInfo *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::FontInfo *)new Poppler::FontInfo((Poppler::FontInfo const &)*arg1);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::FontInfo *)0;
  }
}


EXPORT void _wrap_delete_FontInfo (Poppler::FontInfo *larg1) {
  Poppler::FontInfo *arg1 = (Poppler::FontInfo *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT QString *_wrap_FontInfo_name (Poppler::FontInfo *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::FontInfo *arg1 = (Poppler::FontInfo *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::FontInfo const *)arg1)->name();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT QString *_wrap_FontInfo_file (Poppler::FontInfo *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::FontInfo *arg1 = (Poppler::FontInfo *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::FontInfo const *)arg1)->file();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT int _wrap_FontInfo_isEmbedded (Poppler::FontInfo *larg1) {
  int lresult = (int)0 ;
  Poppler::FontInfo *arg1 = (Poppler::FontInfo *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::FontInfo const *)arg1)->isEmbedded();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_FontInfo_isSubset (Poppler::FontInfo *larg1) {
  int lresult = (int)0 ;
  Poppler::FontInfo *arg1 = (Poppler::FontInfo *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::FontInfo const *)arg1)->isSubset();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT Poppler::FontInfo::Type _wrap_FontInfo_type (Poppler::FontInfo *larg1) {
  Poppler::FontInfo::Type lresult = (Poppler::FontInfo::Type)0 ;
  Poppler::FontInfo *arg1 = (Poppler::FontInfo *) 0 ;
  Poppler::FontInfo::Type result;
  
  arg1 = larg1;
  try {
    result = (Poppler::FontInfo::Type)((Poppler::FontInfo const *)arg1)->type();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::FontInfo::Type)0;
  }
}


EXPORT QString *_wrap_FontInfo_typeName (Poppler::FontInfo *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::FontInfo *arg1 = (Poppler::FontInfo *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::FontInfo const *)arg1)->typeName();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT Poppler::FontInfo *_wrap_FontInfo___assign__ (Poppler::FontInfo *larg1, Poppler::FontInfo *larg2) {
  Poppler::FontInfo * lresult = (Poppler::FontInfo *)0 ;
  Poppler::FontInfo *arg1 = (Poppler::FontInfo *) 0 ;
  Poppler::FontInfo *arg2 = 0 ;
  Poppler::FontInfo *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      Poppler::FontInfo &_result_ref = (arg1)->operator =((Poppler::FontInfo const &)*arg2);
      result = (Poppler::FontInfo *) &_result_ref;
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::FontInfo *)0;
  }
}


EXPORT Poppler::EmbeddedFile *_wrap_new_EmbeddedFile (EmbFile *larg1) {
  Poppler::EmbeddedFile * lresult = (Poppler::EmbeddedFile *)0 ;
  EmbFile *arg1 = (EmbFile *) 0 ;
  Poppler::EmbeddedFile *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::EmbeddedFile *)new Poppler::EmbeddedFile(arg1);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::EmbeddedFile *)0;
  }
}


EXPORT void _wrap_delete_EmbeddedFile (Poppler::EmbeddedFile *larg1) {
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT QString *_wrap_EmbeddedFile_name (Poppler::EmbeddedFile *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::EmbeddedFile const *)arg1)->name();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT QString *_wrap_EmbeddedFile_description (Poppler::EmbeddedFile *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::EmbeddedFile const *)arg1)->description();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT int _wrap_EmbeddedFile_size (Poppler::EmbeddedFile *larg1) {
  int lresult = (int)0 ;
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    result = (int)((Poppler::EmbeddedFile const *)arg1)->size();
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT QDateTime *_wrap_EmbeddedFile_modDate (Poppler::EmbeddedFile *larg1) {
  QDateTime * lresult = (QDateTime *)0 ;
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  QDateTime result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::EmbeddedFile const *)arg1)->modDate();
    lresult = new QDateTime(result);
    return lresult;
  } catch (...) {
    return (QDateTime *)0;
  }
}


EXPORT QDateTime *_wrap_EmbeddedFile_createDate (Poppler::EmbeddedFile *larg1) {
  QDateTime * lresult = (QDateTime *)0 ;
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  QDateTime result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::EmbeddedFile const *)arg1)->createDate();
    lresult = new QDateTime(result);
    return lresult;
  } catch (...) {
    return (QDateTime *)0;
  }
}


EXPORT QByteArray *_wrap_EmbeddedFile_checksum (Poppler::EmbeddedFile *larg1) {
  QByteArray * lresult = (QByteArray *)0 ;
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  QByteArray result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::EmbeddedFile const *)arg1)->checksum();
    lresult = new QByteArray(result);
    return lresult;
  } catch (...) {
    return (QByteArray *)0;
  }
}


EXPORT QString *_wrap_EmbeddedFile_mimeType (Poppler::EmbeddedFile *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::EmbeddedFile const *)arg1)->mimeType();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT QByteArray *_wrap_EmbeddedFile_data (Poppler::EmbeddedFile *larg1) {
  QByteArray * lresult = (QByteArray *)0 ;
  Poppler::EmbeddedFile *arg1 = (Poppler::EmbeddedFile *) 0 ;
  QByteArray result;
  
  arg1 = larg1;
  try {
    result = (arg1)->data();
    lresult = new QByteArray(result);
    return lresult;
  } catch (...) {
    return (QByteArray *)0;
  }
}


EXPORT void _wrap_delete_Page (Poppler::Page *larg1) {
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT QImage *_wrap_Page_renderToImage__SWIG_0 (Poppler::Page *larg1, double larg2, double larg3, int larg4, int larg5, int larg6, int larg7, Poppler::Page::Rotation larg8) {
  QImage * lresult = (QImage *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double arg2 ;
  double arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int arg7 ;
  Poppler::Page::Rotation arg8 ;
  QImage result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  arg8 = larg8;
  try {
    result = ((Poppler::Page const *)arg1)->renderToImage(arg2,arg3,arg4,arg5,arg6,arg7,arg8);
    lresult = new QImage(result);
    return lresult;
  } catch (...) {
    return (QImage *)0;
  }
}


EXPORT QImage *_wrap_Page_renderToImage__SWIG_1 (Poppler::Page *larg1, double larg2, double larg3, int larg4, int larg5, int larg6, int larg7) {
  QImage * lresult = (QImage *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double arg2 ;
  double arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  int arg7 ;
  QImage result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    result = ((Poppler::Page const *)arg1)->renderToImage(arg2,arg3,arg4,arg5,arg6,arg7);
    lresult = new QImage(result);
    return lresult;
  } catch (...) {
    return (QImage *)0;
  }
}


EXPORT QImage *_wrap_Page_renderToImage__SWIG_2 (Poppler::Page *larg1, double larg2, double larg3, int larg4, int larg5, int larg6) {
  QImage * lresult = (QImage *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double arg2 ;
  double arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  QImage result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    result = ((Poppler::Page const *)arg1)->renderToImage(arg2,arg3,arg4,arg5,arg6);
    lresult = new QImage(result);
    return lresult;
  } catch (...) {
    return (QImage *)0;
  }
}


EXPORT QImage *_wrap_Page_renderToImage__SWIG_3 (Poppler::Page *larg1, double larg2, double larg3, int larg4, int larg5) {
  QImage * lresult = (QImage *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double arg2 ;
  double arg3 ;
  int arg4 ;
  int arg5 ;
  QImage result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    result = ((Poppler::Page const *)arg1)->renderToImage(arg2,arg3,arg4,arg5);
    lresult = new QImage(result);
    return lresult;
  } catch (...) {
    return (QImage *)0;
  }
}


EXPORT QImage *_wrap_Page_renderToImage__SWIG_4 (Poppler::Page *larg1, double larg2, double larg3, int larg4) {
  QImage * lresult = (QImage *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double arg2 ;
  double arg3 ;
  int arg4 ;
  QImage result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    result = ((Poppler::Page const *)arg1)->renderToImage(arg2,arg3,arg4);
    lresult = new QImage(result);
    return lresult;
  } catch (...) {
    return (QImage *)0;
  }
}


EXPORT QImage *_wrap_Page_renderToImage__SWIG_5 (Poppler::Page *larg1, double larg2, double larg3) {
  QImage * lresult = (QImage *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double arg2 ;
  double arg3 ;
  QImage result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    result = ((Poppler::Page const *)arg1)->renderToImage(arg2,arg3);
    lresult = new QImage(result);
    return lresult;
  } catch (...) {
    return (QImage *)0;
  }
}


EXPORT QImage *_wrap_Page_renderToImage__SWIG_6 (Poppler::Page *larg1, double larg2) {
  QImage * lresult = (QImage *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double arg2 ;
  QImage result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = ((Poppler::Page const *)arg1)->renderToImage(arg2);
    lresult = new QImage(result);
    return lresult;
  } catch (...) {
    return (QImage *)0;
  }
}


EXPORT QImage *_wrap_Page_renderToImage__SWIG_7 (Poppler::Page *larg1) {
  QImage * lresult = (QImage *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QImage result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Page const *)arg1)->renderToImage();
    lresult = new QImage(result);
    return lresult;
  } catch (...) {
    return (QImage *)0;
  }
}


EXPORT QString *_wrap_Page_text (Poppler::Page *larg1, QRectF *larg2) {
  QString * lresult = (QString *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QRectF *arg2 = 0 ;
  QString result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = ((Poppler::Page const *)arg1)->text((QRectF const &)*arg2);
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT int _wrap_Page_search__SWIG_0 (Poppler::Page *larg1, QString *larg2, QRectF *larg3, Poppler::Page::SearchDirection larg4, Poppler::Page::SearchMode larg5, Poppler::Page::Rotation larg6) {
  int lresult = (int)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QString *arg2 = 0 ;
  QRectF *arg3 = 0 ;
  Poppler::Page::SearchDirection arg4 ;
  Poppler::Page::SearchMode arg5 ;
  Poppler::Page::Rotation arg6 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    result = (bool)((Poppler::Page const *)arg1)->search((QString const &)*arg2,*arg3,arg4,arg5,arg6);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Page_search__SWIG_1 (Poppler::Page *larg1, QString *larg2, QRectF *larg3, Poppler::Page::SearchDirection larg4, Poppler::Page::SearchMode larg5) {
  int lresult = (int)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QString *arg2 = 0 ;
  QRectF *arg3 = 0 ;
  Poppler::Page::SearchDirection arg4 ;
  Poppler::Page::SearchMode arg5 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    result = (bool)((Poppler::Page const *)arg1)->search((QString const &)*arg2,*arg3,arg4,arg5);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT QList< Poppler::TextBox * > *_wrap_Page_textList__SWIG_0 (Poppler::Page *larg1, Poppler::Page::Rotation larg2) {
  QList< Poppler::TextBox * > * lresult = (QList< Poppler::TextBox * > *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  Poppler::Page::Rotation arg2 ;
  SwigValueWrapper< QList< Poppler::TextBox * > > result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = ((Poppler::Page const *)arg1)->textList(arg2);
    lresult = new QList< Poppler::TextBox * >(result);
    return lresult;
  } catch (...) {
    return (QList< Poppler::TextBox * > *)0;
  }
}


EXPORT QList< Poppler::TextBox * > *_wrap_Page_textList__SWIG_1 (Poppler::Page *larg1) {
  QList< Poppler::TextBox * > * lresult = (QList< Poppler::TextBox * > *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  SwigValueWrapper< QList< Poppler::TextBox * > > result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Page const *)arg1)->textList();
    lresult = new QList< Poppler::TextBox * >(result);
    return lresult;
  } catch (...) {
    return (QList< Poppler::TextBox * > *)0;
  }
}


EXPORT QSizeF *_wrap_Page_pageSizeF (Poppler::Page *larg1) {
  QSizeF * lresult = (QSizeF *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QSizeF result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Page const *)arg1)->pageSizeF();
    lresult = new QSizeF(result);
    return lresult;
  } catch (...) {
    return (QSizeF *)0;
  }
}


EXPORT QSize *_wrap_Page_pageSize (Poppler::Page *larg1) {
  QSize * lresult = (QSize *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QSize result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Page const *)arg1)->pageSize();
    lresult = new QSize(result);
    return lresult;
  } catch (...) {
    return (QSize *)0;
  }
}


EXPORT PageTransition *_wrap_Page_transition (Poppler::Page *larg1) {
  PageTransition * lresult = (PageTransition *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  PageTransition *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (PageTransition *)((Poppler::Page const *)arg1)->transition();
    lresult = result;
    return lresult;
  } catch (...) {
    return (PageTransition *)0;
  }
}


EXPORT Link *_wrap_Page_action (Poppler::Page *larg1, Poppler::Page::PageAction larg2) {
  Link * lresult = (Link *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  Poppler::Page::PageAction arg2 ;
  Link *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = (Link *)((Poppler::Page const *)arg1)->action(arg2);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Link *)0;
  }
}


EXPORT Poppler::Page::Orientation _wrap_Page_orientation (Poppler::Page *larg1) {
  Poppler::Page::Orientation lresult = (Poppler::Page::Orientation)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  Poppler::Page::Orientation result;
  
  arg1 = larg1;
  try {
    result = (Poppler::Page::Orientation)((Poppler::Page const *)arg1)->orientation();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Page::Orientation)0;
  }
}


EXPORT void _wrap_Page_defaultCTM (Poppler::Page *larg1, double *larg2, double larg3, double larg4, int larg5, int larg6) {
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double *arg2 = (double *) 0 ;
  double arg3 ;
  double arg4 ;
  int arg5 ;
  bool arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = (bool)larg6;
  try {
    (arg1)->defaultCTM(arg2,arg3,arg4,arg5,arg6);
    
  } catch (...) {
    
  }
}


EXPORT QList< Link * > *_wrap_Page_links (Poppler::Page *larg1) {
  QList< Link * > * lresult = (QList< Link * > *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QList< Link * > result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Page const *)arg1)->links();
    lresult = new QList< Link * >(result);
    return lresult;
  } catch (...) {
    return (QList< Link * > *)0;
  }
}


EXPORT QList< Annotation * > *_wrap_Page_annotations (Poppler::Page *larg1) {
  QList< Annotation * > * lresult = (QList< Annotation * > *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QList< Annotation * > result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Page const *)arg1)->annotations();
    lresult = new QList< Annotation * >(result);
    return lresult;
  } catch (...) {
    return (QList< Annotation * > *)0;
  }
}


EXPORT QList< Poppler::FormField * > *_wrap_Page_formFields (Poppler::Page *larg1) {
  QList< Poppler::FormField * > * lresult = (QList< Poppler::FormField * > *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  SwigValueWrapper< QList< Poppler::FormField * > > result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Page const *)arg1)->formFields();
    lresult = new QList< Poppler::FormField * >(result);
    return lresult;
  } catch (...) {
    return (QList< Poppler::FormField * > *)0;
  }
}


EXPORT double _wrap_Page_duration (Poppler::Page *larg1) {
  double lresult = (double)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  double result;
  
  arg1 = larg1;
  try {
    result = (double)((Poppler::Page const *)arg1)->duration();
    lresult = result;
    return lresult;
  } catch (...) {
    return (double)0;
  }
}


EXPORT QString *_wrap_Page_label (Poppler::Page *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::Page *arg1 = (Poppler::Page *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Page const *)arg1)->label();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT Poppler::Document *_wrap_Document_load__SWIG_0 (QString *larg1, QByteArray *larg2, QByteArray *larg3) {
  Poppler::Document * lresult = (Poppler::Document *)0 ;
  QString *arg1 = 0 ;
  QByteArray *arg2 = 0 ;
  QByteArray *arg3 = 0 ;
  Poppler::Document *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    result = (Poppler::Document *)Poppler::Document::load((QString const &)*arg1,(QByteArray const &)*arg2,(QByteArray const &)*arg3);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document *)0;
  }
}


EXPORT Poppler::Document *_wrap_Document_load__SWIG_1 (QString *larg1, QByteArray *larg2) {
  Poppler::Document * lresult = (Poppler::Document *)0 ;
  QString *arg1 = 0 ;
  QByteArray *arg2 = 0 ;
  Poppler::Document *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = (Poppler::Document *)Poppler::Document::load((QString const &)*arg1,(QByteArray const &)*arg2);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document *)0;
  }
}


EXPORT Poppler::Document *_wrap_Document_load__SWIG_2 (QString *larg1) {
  Poppler::Document * lresult = (Poppler::Document *)0 ;
  QString *arg1 = 0 ;
  Poppler::Document *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::Document *)Poppler::Document::load((QString const &)*arg1);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document *)0;
  }
}


EXPORT Poppler::Document *_wrap_Document_loadFromData__SWIG_0 (QByteArray *larg1, QByteArray *larg2, QByteArray *larg3) {
  Poppler::Document * lresult = (Poppler::Document *)0 ;
  QByteArray *arg1 = 0 ;
  QByteArray *arg2 = 0 ;
  QByteArray *arg3 = 0 ;
  Poppler::Document *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    result = (Poppler::Document *)Poppler::Document::loadFromData((QByteArray const &)*arg1,(QByteArray const &)*arg2,(QByteArray const &)*arg3);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document *)0;
  }
}


EXPORT Poppler::Document *_wrap_Document_loadFromData__SWIG_1 (QByteArray *larg1, QByteArray *larg2) {
  Poppler::Document * lresult = (Poppler::Document *)0 ;
  QByteArray *arg1 = 0 ;
  QByteArray *arg2 = 0 ;
  Poppler::Document *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = (Poppler::Document *)Poppler::Document::loadFromData((QByteArray const &)*arg1,(QByteArray const &)*arg2);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document *)0;
  }
}


EXPORT Poppler::Document *_wrap_Document_loadFromData__SWIG_2 (QByteArray *larg1) {
  Poppler::Document * lresult = (Poppler::Document *)0 ;
  QByteArray *arg1 = 0 ;
  Poppler::Document *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::Document *)Poppler::Document::loadFromData((QByteArray const &)*arg1);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document *)0;
  }
}


EXPORT Poppler::Page *_wrap_Document_page__SWIG_0 (Poppler::Document *larg1, int larg2) {
  Poppler::Page * lresult = (Poppler::Page *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  int arg2 ;
  Poppler::Page *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = (Poppler::Page *)((Poppler::Document const *)arg1)->page(arg2);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Page *)0;
  }
}


EXPORT Poppler::Page *_wrap_Document_page__SWIG_1 (Poppler::Document *larg1, QString *larg2) {
  Poppler::Page * lresult = (Poppler::Page *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QString *arg2 = 0 ;
  Poppler::Page *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = (Poppler::Page *)((Poppler::Document const *)arg1)->page((QString const &)*arg2);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Page *)0;
  }
}


EXPORT int _wrap_Document_numPages (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    result = (int)((Poppler::Document const *)arg1)->numPages();
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT Poppler::Document::PageMode _wrap_Document_pageMode (Poppler::Document *larg1) {
  Poppler::Document::PageMode lresult = (Poppler::Document::PageMode)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::Document::PageMode result;
  
  arg1 = larg1;
  try {
    result = (Poppler::Document::PageMode)((Poppler::Document const *)arg1)->pageMode();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document::PageMode)0;
  }
}


EXPORT Poppler::Document::PageLayout _wrap_Document_pageLayout (Poppler::Document *larg1) {
  Poppler::Document::PageLayout lresult = (Poppler::Document::PageLayout)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::Document::PageLayout result;
  
  arg1 = larg1;
  try {
    result = (Poppler::Document::PageLayout)((Poppler::Document const *)arg1)->pageLayout();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document::PageLayout)0;
  }
}


EXPORT int _wrap_Document_unlock (Poppler::Document *larg1, QByteArray *larg2, QByteArray *larg3) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QByteArray *arg2 = 0 ;
  QByteArray *arg3 = 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    result = (bool)(arg1)->unlock((QByteArray const &)*arg2,(QByteArray const &)*arg3);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_isLocked (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->isLocked();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT QDateTime *_wrap_Document_date (Poppler::Document *larg1, QString *larg2) {
  QDateTime * lresult = (QDateTime *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QString *arg2 = 0 ;
  QDateTime result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = ((Poppler::Document const *)arg1)->date((QString const &)*arg2);
    lresult = new QDateTime(result);
    return lresult;
  } catch (...) {
    return (QDateTime *)0;
  }
}


EXPORT QString *_wrap_Document_info (Poppler::Document *larg1, QString *larg2) {
  QString * lresult = (QString *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QString *arg2 = 0 ;
  QString result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = ((Poppler::Document const *)arg1)->info((QString const &)*arg2);
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT QStringList *_wrap_Document_infoKeys (Poppler::Document *larg1) {
  QStringList * lresult = (QStringList *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QStringList result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Document const *)arg1)->infoKeys();
    lresult = new QStringList(result);
    return lresult;
  } catch (...) {
    return (QStringList *)0;
  }
}


EXPORT int _wrap_Document_isEncrypted (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->isEncrypted();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_isLinearized (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->isLinearized();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToPrint (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToPrint();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToPrintHighRes (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToPrintHighRes();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToChange (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToChange();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToCopy (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToCopy();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToAddNotes (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToAddNotes();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToFillForm (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToFillForm();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToCreateFormFields (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToCreateFormFields();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToExtractForAccessibility (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToExtractForAccessibility();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Document_okToAssemble (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->okToAssemble();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT double _wrap_Document_pdfVersion (Poppler::Document *larg1) {
  double lresult = (double)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  double result;
  
  arg1 = larg1;
  try {
    result = (double)((Poppler::Document const *)arg1)->pdfVersion();
    lresult = result;
    return lresult;
  } catch (...) {
    return (double)0;
  }
}


EXPORT QList< Poppler::FontInfo > *_wrap_Document_fonts (Poppler::Document *larg1) {
  QList< Poppler::FontInfo > * lresult = (QList< Poppler::FontInfo > *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  SwigValueWrapper< QList< Poppler::FontInfo > > result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Document const *)arg1)->fonts();
    lresult = new QList< Poppler::FontInfo >(result);
    return lresult;
  } catch (...) {
    return (QList< Poppler::FontInfo > *)0;
  }
}


EXPORT int _wrap_Document_scanForFonts (Poppler::Document *larg1, int larg2, QList< Poppler::FontInfo > *larg3) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  int arg2 ;
  QList< Poppler::FontInfo > *arg3 = (QList< Poppler::FontInfo > *) 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    result = (bool)((Poppler::Document const *)arg1)->scanForFonts(arg2,arg3);
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT QByteArray *_wrap_Document_fontData (Poppler::Document *larg1, Poppler::FontInfo *larg2) {
  QByteArray * lresult = (QByteArray *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::FontInfo *arg2 = 0 ;
  QByteArray result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = ((Poppler::Document const *)arg1)->fontData((Poppler::FontInfo const &)*arg2);
    lresult = new QByteArray(result);
    return lresult;
  } catch (...) {
    return (QByteArray *)0;
  }
}


EXPORT QList< Poppler::EmbeddedFile * > *_wrap_Document_embeddedFiles (Poppler::Document *larg1) {
  QList< Poppler::EmbeddedFile * > * lresult = (QList< Poppler::EmbeddedFile * > *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  SwigValueWrapper< QList< Poppler::EmbeddedFile * > > result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Document const *)arg1)->embeddedFiles();
    lresult = new QList< Poppler::EmbeddedFile * >(result);
    return lresult;
  } catch (...) {
    return (QList< Poppler::EmbeddedFile * > *)0;
  }
}


EXPORT int _wrap_Document_hasEmbeddedFiles (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->hasEmbeddedFiles();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT QDomDocument *_wrap_Document_toc (Poppler::Document *larg1) {
  QDomDocument * lresult = (QDomDocument *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QDomDocument *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (QDomDocument *)((Poppler::Document const *)arg1)->toc();
    lresult = result;
    return lresult;
  } catch (...) {
    return (QDomDocument *)0;
  }
}


EXPORT LinkDestination *_wrap_Document_linkDestination (Poppler::Document *larg1, QString *larg2) {
  LinkDestination * lresult = (LinkDestination *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QString *arg2 = 0 ;
  LinkDestination *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    result = (LinkDestination *)(arg1)->linkDestination((QString const &)*arg2);
    lresult = result;
    return lresult;
  } catch (...) {
    return (LinkDestination *)0;
  }
}


EXPORT void _wrap_Document_setPaperColor (Poppler::Document *larg1, QColor *larg2) {
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QColor *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setPaperColor((QColor const &)*arg2);
    
  } catch (...) {
    
  }
}


EXPORT QColor *_wrap_Document_paperColor (Poppler::Document *larg1) {
  QColor * lresult = (QColor *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QColor result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Document const *)arg1)->paperColor();
    lresult = new QColor(result);
    return lresult;
  } catch (...) {
    return (QColor *)0;
  }
}


EXPORT void _wrap_Document_setRenderBackend (Poppler::Document *larg1, Poppler::Document::RenderBackend larg2) {
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::Document::RenderBackend arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setRenderBackend(arg2);
    
  } catch (...) {
    
  }
}


EXPORT Poppler::Document::RenderBackend _wrap_Document_renderBackend (Poppler::Document *larg1) {
  Poppler::Document::RenderBackend lresult = (Poppler::Document::RenderBackend)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::Document::RenderBackend result;
  
  arg1 = larg1;
  try {
    result = (Poppler::Document::RenderBackend)((Poppler::Document const *)arg1)->renderBackend();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document::RenderBackend)0;
  }
}


EXPORT QSet< Poppler::Document::RenderBackend > *_wrap_Document_availableRenderBackends () {
  QSet< Poppler::Document::RenderBackend > * lresult = (QSet< Poppler::Document::RenderBackend > *)0 ;
  QSet< Poppler::Document::RenderBackend > result;
  
  try {
    result = Poppler::Document::availableRenderBackends();
    lresult = new QSet< Poppler::Document::RenderBackend >(result);
    return lresult;
  } catch (...) {
    return (QSet< Poppler::Document::RenderBackend > *)0;
  }
}


EXPORT void _wrap_Document_setRenderHint__SWIG_0 (Poppler::Document *larg1, Poppler::Document::RenderHint larg2, int larg3) {
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::Document::RenderHint arg2 ;
  bool arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = (bool)larg3;
  try {
    (arg1)->setRenderHint(arg2,arg3);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_Document_setRenderHint__SWIG_1 (Poppler::Document *larg1, Poppler::Document::RenderHint larg2) {
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::Document::RenderHint arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setRenderHint(arg2);
    
  } catch (...) {
    
  }
}


EXPORT Poppler::Document::RenderHints *_wrap_Document_renderHints (Poppler::Document *larg1) {
  Poppler::Document::RenderHints * lresult = (Poppler::Document::RenderHints *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::Document::RenderHints result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Document const *)arg1)->renderHints();
    lresult = new Poppler::Document::RenderHints(result);
    return lresult;
  } catch (...) {
    return (Poppler::Document::RenderHints *)0;
  }
}


EXPORT Poppler::PSConverter *_wrap_Document_psConverter (Poppler::Document *larg1) {
  Poppler::PSConverter * lresult = (Poppler::PSConverter *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::PSConverter *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::PSConverter *)((Poppler::Document const *)arg1)->psConverter();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::PSConverter *)0;
  }
}


EXPORT Poppler::PDFConverter *_wrap_Document_pdfConverter (Poppler::Document *larg1) {
  Poppler::PDFConverter * lresult = (Poppler::PDFConverter *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  Poppler::PDFConverter *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::PDFConverter *)((Poppler::Document const *)arg1)->pdfConverter();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::PDFConverter *)0;
  }
}


EXPORT QString *_wrap_Document_metadata (Poppler::Document *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Document const *)arg1)->metadata();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT int _wrap_Document_hasOptionalContent (Poppler::Document *larg1) {
  int lresult = (int)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::Document const *)arg1)->hasOptionalContent();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT OptContentModel *_wrap_Document_optionalContentModel (Poppler::Document *larg1) {
  OptContentModel * lresult = (OptContentModel *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  OptContentModel *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (OptContentModel *)(arg1)->optionalContentModel();
    lresult = result;
    return lresult;
  } catch (...) {
    return (OptContentModel *)0;
  }
}


EXPORT QStringList *_wrap_Document_scripts (Poppler::Document *larg1) {
  QStringList * lresult = (QStringList *)0 ;
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  QStringList result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::Document const *)arg1)->scripts();
    lresult = new QStringList(result);
    return lresult;
  } catch (...) {
    return (QStringList *)0;
  }
}


EXPORT void _wrap_delete_Document (Poppler::Document *larg1) {
  Poppler::Document *arg1 = (Poppler::Document *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_delete_BaseConverter (Poppler::BaseConverter *larg1) {
  Poppler::BaseConverter *arg1 = (Poppler::BaseConverter *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_BaseConverter_setOutputFileName (Poppler::BaseConverter *larg1, QString *larg2) {
  Poppler::BaseConverter *arg1 = (Poppler::BaseConverter *) 0 ;
  QString *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setOutputFileName((QString const &)*arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_BaseConverter_setOutputDevice (Poppler::BaseConverter *larg1, QIODevice *larg2) {
  Poppler::BaseConverter *arg1 = (Poppler::BaseConverter *) 0 ;
  QIODevice *arg2 = (QIODevice *) 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setOutputDevice(arg2);
    
  } catch (...) {
    
  }
}


EXPORT int _wrap_BaseConverter_convert (Poppler::BaseConverter *larg1) {
  int lresult = (int)0 ;
  Poppler::BaseConverter *arg1 = (Poppler::BaseConverter *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)(arg1)->convert();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_delete_PSConverter (Poppler::PSConverter *larg1) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setPageList (Poppler::PSConverter *larg1, QList< int > *larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  QList< int > *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setPageList((QList< int > const &)*arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setTitle (Poppler::PSConverter *larg1, QString *larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  QString *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setTitle((QString const &)*arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setHDPI (Poppler::PSConverter *larg1, double larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  double arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setHDPI(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setVDPI (Poppler::PSConverter *larg1, double larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  double arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setVDPI(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setRotate (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setRotate(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setPaperWidth (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setPaperWidth(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setPaperHeight (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setPaperHeight(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setRightMargin (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setRightMargin(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setBottomMargin (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setBottomMargin(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setLeftMargin (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setLeftMargin(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setTopMargin (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    (arg1)->setTopMargin(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setStrictMargins (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  bool arg2 ;
  
  arg1 = larg1;
  arg2 = (bool)larg2;
  try {
    (arg1)->setStrictMargins(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setForceRasterize (Poppler::PSConverter *larg1, int larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  bool arg2 ;
  
  arg1 = larg1;
  arg2 = (bool)larg2;
  try {
    (arg1)->setForceRasterize(arg2);
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PSConverter_setPSOptions (Poppler::PSConverter *larg1, Poppler::PSConverter::PSOptions *larg2) {
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  Poppler::PSConverter::PSOptions arg2 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    (arg1)->setPSOptions(arg2);
    
  } catch (...) {
    
  }
}


EXPORT Poppler::PSConverter::PSOptions *_wrap_PSConverter_psOptions (Poppler::PSConverter *larg1) {
  Poppler::PSConverter::PSOptions * lresult = (Poppler::PSConverter::PSOptions *)0 ;
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  Poppler::PSConverter::PSOptions result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::PSConverter const *)arg1)->psOptions();
    lresult = new Poppler::PSConverter::PSOptions(result);
    return lresult;
  } catch (...) {
    return (Poppler::PSConverter::PSOptions *)0;
  }
}


EXPORT int _wrap_PSConverter_convert (Poppler::PSConverter *larg1) {
  int lresult = (int)0 ;
  Poppler::PSConverter *arg1 = (Poppler::PSConverter *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)(arg1)->convert();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_delete_PDFConverter (Poppler::PDFConverter *larg1) {
  Poppler::PDFConverter *arg1 = (Poppler::PDFConverter *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT void _wrap_PDFConverter_setPDFOptions (Poppler::PDFConverter *larg1, Poppler::PDFConverter::PDFOptions *larg2) {
  Poppler::PDFConverter *arg1 = (Poppler::PDFConverter *) 0 ;
  Poppler::PDFConverter::PDFOptions arg2 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    (arg1)->setPDFOptions(arg2);
    
  } catch (...) {
    
  }
}


EXPORT Poppler::PDFConverter::PDFOptions *_wrap_PDFConverter_pdfOptions (Poppler::PDFConverter *larg1) {
  Poppler::PDFConverter::PDFOptions * lresult = (Poppler::PDFConverter::PDFOptions *)0 ;
  Poppler::PDFConverter *arg1 = (Poppler::PDFConverter *) 0 ;
  Poppler::PDFConverter::PDFOptions result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::PDFConverter const *)arg1)->pdfOptions();
    lresult = new Poppler::PDFConverter::PDFOptions(result);
    return lresult;
  } catch (...) {
    return (Poppler::PDFConverter::PDFOptions *)0;
  }
}


EXPORT int _wrap_PDFConverter_convert (Poppler::PDFConverter *larg1) {
  int lresult = (int)0 ;
  Poppler::PDFConverter *arg1 = (Poppler::PDFConverter *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)(arg1)->convert();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT QDateTime *_wrap_convertDate (char *larg1) {
  QDateTime * lresult = (QDateTime *)0 ;
  char *arg1 = (char *) 0 ;
  QDateTime result;
  
  arg1 = larg1;
  try {
    result = Poppler::convertDate(arg1);
    lresult = new QDateTime(result);
    return lresult;
  } catch (...) {
    return (QDateTime *)0;
  }
}


EXPORT Poppler::SoundObject *_wrap_new_SoundObject (Sound *larg1) {
  Poppler::SoundObject * lresult = (Poppler::SoundObject *)0 ;
  Sound *arg1 = (Sound *) 0 ;
  Poppler::SoundObject *result = 0 ;
  
  arg1 = larg1;
  try {
    result = (Poppler::SoundObject *)new Poppler::SoundObject(arg1);
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::SoundObject *)0;
  }
}


EXPORT void _wrap_delete_SoundObject (Poppler::SoundObject *larg1) {
  Poppler::SoundObject *arg1 = (Poppler::SoundObject *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT Poppler::SoundObject::SoundType _wrap_SoundObject_soundType (Poppler::SoundObject *larg1) {
  Poppler::SoundObject::SoundType lresult = (Poppler::SoundObject::SoundType)0 ;
  Poppler::SoundObject *arg1 = (Poppler::SoundObject *) 0 ;
  Poppler::SoundObject::SoundType result;
  
  arg1 = larg1;
  try {
    result = (Poppler::SoundObject::SoundType)((Poppler::SoundObject const *)arg1)->soundType();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::SoundObject::SoundType)0;
  }
}


EXPORT QString *_wrap_SoundObject_url (Poppler::SoundObject *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::SoundObject *arg1 = (Poppler::SoundObject *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::SoundObject const *)arg1)->url();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT QByteArray *_wrap_SoundObject_data (Poppler::SoundObject *larg1) {
  QByteArray * lresult = (QByteArray *)0 ;
  Poppler::SoundObject *arg1 = (Poppler::SoundObject *) 0 ;
  QByteArray result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::SoundObject const *)arg1)->data();
    lresult = new QByteArray(result);
    return lresult;
  } catch (...) {
    return (QByteArray *)0;
  }
}


EXPORT double _wrap_SoundObject_samplingRate (Poppler::SoundObject *larg1) {
  double lresult = (double)0 ;
  Poppler::SoundObject *arg1 = (Poppler::SoundObject *) 0 ;
  double result;
  
  arg1 = larg1;
  try {
    result = (double)((Poppler::SoundObject const *)arg1)->samplingRate();
    lresult = result;
    return lresult;
  } catch (...) {
    return (double)0;
  }
}


EXPORT int _wrap_SoundObject_channels (Poppler::SoundObject *larg1) {
  int lresult = (int)0 ;
  Poppler::SoundObject *arg1 = (Poppler::SoundObject *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    result = (int)((Poppler::SoundObject const *)arg1)->channels();
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_SoundObject_bitsPerSample (Poppler::SoundObject *larg1) {
  int lresult = (int)0 ;
  Poppler::SoundObject *arg1 = (Poppler::SoundObject *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    result = (int)((Poppler::SoundObject const *)arg1)->bitsPerSample();
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT Poppler::SoundObject::SoundEncoding _wrap_SoundObject_soundEncoding (Poppler::SoundObject *larg1) {
  Poppler::SoundObject::SoundEncoding lresult = (Poppler::SoundObject::SoundEncoding)0 ;
  Poppler::SoundObject *arg1 = (Poppler::SoundObject *) 0 ;
  Poppler::SoundObject::SoundEncoding result;
  
  arg1 = larg1;
  try {
    result = (Poppler::SoundObject::SoundEncoding)((Poppler::SoundObject const *)arg1)->soundEncoding();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::SoundObject::SoundEncoding)0;
  }
}


EXPORT void _wrap_delete_MovieObject (Poppler::MovieObject *larg1) {
  Poppler::MovieObject *arg1 = (Poppler::MovieObject *) 0 ;
  
  arg1 = larg1;
  try {
    delete arg1;
    
  } catch (...) {
    
  }
}


EXPORT QString *_wrap_MovieObject_url (Poppler::MovieObject *larg1) {
  QString * lresult = (QString *)0 ;
  Poppler::MovieObject *arg1 = (Poppler::MovieObject *) 0 ;
  QString result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::MovieObject const *)arg1)->url();
    lresult = new QString(result);
    return lresult;
  } catch (...) {
    return (QString *)0;
  }
}


EXPORT QSize *_wrap_MovieObject_size (Poppler::MovieObject *larg1) {
  QSize * lresult = (QSize *)0 ;
  Poppler::MovieObject *arg1 = (Poppler::MovieObject *) 0 ;
  QSize result;
  
  arg1 = larg1;
  try {
    result = ((Poppler::MovieObject const *)arg1)->size();
    lresult = new QSize(result);
    return lresult;
  } catch (...) {
    return (QSize *)0;
  }
}


EXPORT int _wrap_MovieObject_rotation (Poppler::MovieObject *larg1) {
  int lresult = (int)0 ;
  Poppler::MovieObject *arg1 = (Poppler::MovieObject *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    result = (int)((Poppler::MovieObject const *)arg1)->rotation();
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_MovieObject_showControls (Poppler::MovieObject *larg1) {
  int lresult = (int)0 ;
  Poppler::MovieObject *arg1 = (Poppler::MovieObject *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    result = (bool)((Poppler::MovieObject const *)arg1)->showControls();
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT Poppler::MovieObject::PlayMode _wrap_MovieObject_playMode (Poppler::MovieObject *larg1) {
  Poppler::MovieObject::PlayMode lresult = (Poppler::MovieObject::PlayMode)0 ;
  Poppler::MovieObject *arg1 = (Poppler::MovieObject *) 0 ;
  Poppler::MovieObject::PlayMode result;
  
  arg1 = larg1;
  try {
    result = (Poppler::MovieObject::PlayMode)((Poppler::MovieObject const *)arg1)->playMode();
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::MovieObject::PlayMode)0;
  }
}



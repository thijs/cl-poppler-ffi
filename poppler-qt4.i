%module "poppler-qt4"


%{

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

%}



//%import "/usr/include/poppler/qt4/poppler-annotation.h"
//%import "/usr/include/poppler/qt4/poppler-link.h"
//%import "/usr/include/poppler/qt4/poppler-optcontent.h"


#define Q_DECLARE_FLAGS(Flags, Enum)\
typedef uint Flags;
#define Q_DECLARE_OPERATORS_FOR_FLAGS(Flags)

#define Q_DISABLE_COPY(Class)


#define Q_DECLARE_PRIVATE(Class) \
    inline Class##Private* d_func() { return reinterpret_cast<Class##Private *>(d_ptr); } \
    inline const Class##Private* d_func() const { return reinterpret_cast<const Class##Private *>(d_ptr); } \
    friend class Class##Private;

#define Q_DECLARE_PRIVATE_D(Dptr, Class) \
    inline Class##Private* d_func() { return reinterpret_cast<Class##Private *>(Dptr); } \
    inline const Class##Private* d_func() const { return reinterpret_cast<const Class##Private *>(Dptr); } \
    friend class Class##Private;

#define Q_DECLARE_PUBLIC(Class)                                    \
    inline Class* q_func() { return static_cast<Class *>(q_ptr); } \
    inline const Class* q_func() const { return static_cast<const Class *>(q_ptr); } \
    friend class Class;


//%import "/usr/include/qt4/Qt/qglobal.h"

%import "/usr/include/poppler/qt4/poppler-page-transition.h"
%import "/usr/include/poppler/qt4/poppler-export.h"


#%include "/usr/include/poppler/qt4/poppler-qt4-stripped.h"
%include "/usr/include/poppler/qt4/poppler-qt4.h"

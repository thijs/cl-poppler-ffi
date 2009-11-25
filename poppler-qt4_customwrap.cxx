#include <stdio.h>
#include <stdlib.h>

#include "poppler-qt4.h"

#include <Qt/QtGui>
#include <QtCore/QRectF>

#ifdef __cplusplus
#  define EXTERN   extern "C"
#else
#  define EXTERN   extern
#endif


EXTERN Poppler::Document *cl_poppler_ffi_Document_load (const char *larg1) {
  Poppler::Document *lresult = (Poppler::Document *)0;
  Poppler::Document *result = 0;

  QString fn = larg1;

  try {
    result = (Poppler::Document *)Poppler::Document::load( fn );
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Document *)0;
  }
}


EXTERN Poppler::Page *cl_poppler_ffi_Document_page_by_index (Poppler::Document *larg1, int index) {
  Poppler::Page *lresult = (Poppler::Page *)0;
  Poppler::Document *arg1 = (Poppler::Document *)0;
  Poppler::Page *result = 0 ;

  arg1 = larg1;
  try {
    //((Poppler::Document *)arg1)->setRenderBackend( Poppler::Document::ArthurBackend );
    //((Poppler::Document *)arg1)->setRenderHint( Poppler::Document::Antialiasing, true );
    //((Poppler::Document *)arg1)->setRenderHint( Poppler::Document::TextAntialiasing, true );

    result = (Poppler::Page *)((Poppler::Document const *)arg1)->page( index );
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Page *)0;
  }
}


EXTERN Poppler::Page *cl_poppler_ffi_Document_page_by_label (Poppler::Document *larg1, const char *larg2) {
  Poppler::Page *lresult = (Poppler::Page *)0;
  Poppler::Document *arg1 = (Poppler::Document *)0;
  Poppler::Page *result = 0;

  QString label = larg2;

  arg1 = larg1;
  try {
    result = (Poppler::Page *)((Poppler::Document const *)arg1)->page( label );
    lresult = result;
    return lresult;
  } catch (...) {
    return (Poppler::Page *)0;
  }
}


EXTERN int cl_poppler_ffi_Document_num_pages (Poppler::Document *larg1) {
  Poppler::Document *arg1 = (Poppler::Document *)0;
  int result;

  arg1 = larg1;
  try {
    return (int)((Poppler::Document const *)arg1)->numPages();
  } catch (...) {
    return (int)0;
  }
}


EXTERN void cl_poppler_ffi_Document_delete (Poppler::Document *larg1) {
  Poppler::Document *arg1 = (Poppler::Document *)0;

  arg1 = larg1;
  try {
    delete arg1;
    return;
  } catch (...) {
    return;
  }
}


EXTERN int cl_poppler_ffi_Page_render_to_image (Poppler::Page *larg1, int (*cb_send_size)(int), char * (*cb_remote_buff)(int)) {
  Poppler::Page *arg1 = (Poppler::Page *)0;
  QImage image;
  QByteArray ba;
  QBuffer buffer(&ba);

  arg1 = larg1;
  try {
    image = ((Poppler::Page const *)arg1)->renderToImage( 96.0, 96.0 );

    image.save( "cl-poppler-ffi_image_test_save.png", "PNG", 100 );

    buffer.open(QIODevice::WriteOnly);
    image.save(&buffer, "PNG", 80); // writes image into ba in PNG
                                    // format, at high quality

    QFile file("cl-poppler-ffi_test_logging_output.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
      return 0;

    QTextStream out(&file);

    int len = ba.size();
    out << "image len is: " << len << "\n";

    buffer.close();

    int ret = (*cb_send_size) ( len );
    if (ret != len) {
      out << "Returned length did not match: " << len << " != " << ret << "\n";
    }

    char * buff = (*cb_remote_buff) ( len );

    int i;
    for (i = 0; i < len; ++i) {
      buff[i] = ba.at(i);
    }

    out << "Written " << i << " bytes\n";

    file.close();

    return (int)i;
  } catch (...) {
    return (int)0;
  }
}


EXTERN int cl_poppler_ffi_Page_text (Poppler::Page *larg1, int (*cb_send_size)(int), char * (*cb_remote_buff)(int)) {
  Poppler::Page *arg1 = (Poppler::Page *) 0;
  QRectF no_rect;
  QRectF *pno_rect;

  pno_rect = &no_rect;
  arg1 = larg1;
  try {
    QString page_text = ((Poppler::Page const *)arg1)->text((QRectF const &)*pno_rect);

    QFile file("cl-poppler-ffi_test_logging_output.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
      return 0;

    QTextStream out(&file);

    int len = page_text.size();

    out << "text size is: " << len << "\n";

    int ret = (*cb_send_size) ( len );
    if (ret != len) {
      out << "Returned length did not match: " << len << " != " << ret << "\n";
      return (int)0;
    }

    char * buff = (*cb_remote_buff) ( len );
    if (!buff) {
      out << "failed to get buffer\n";
      return (int)0;
    }

    int i;
    for (i = 0; i < len; ++i) {
      buff[i] = page_text.at(i).toLatin1();
    }

    out << "Written " << i << " bytes\n";

    file.close();

    return (int)i;
  } catch (...) {
    return (int)0;
  }
}


EXTERN int cl_poppler_ffi_Document_get_embedded_file (Poppler::Document *larg1, int index, int (*cb_send_size)(int), char * (*cb_remote_buff)(int)) {
  Poppler::Document *arg1 = (Poppler::Document *)0;

  arg1 = larg1;
  try {
    QList<Poppler::EmbeddedFile *> list = ((Poppler::Document const *)arg1)->embeddedFiles();


    QFile file("cl-poppler-ffi_test_logging_output.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
      return 0;

    QTextStream out(&file);

    out << "get-emb-file: number of files: " << list.size() << "\n";

    QByteArray ba = list.at(index)->data();

    int len = ba.size();

    out << "get-emb-file: len buffer: " << len << "\n";

    int ret = (*cb_send_size) ( len );
    if (ret != len) {
      file.close();
      return (int)0;
    }

    out << "get-emb-file: ok sent len\n";

    char * buff = (*cb_remote_buff) ( len );
    if (!buff) {
      file.close();
      return 0;
    }

    out << "get-emb-file: ok got buffer\n";

    int i;
    for (i = 0; i < len; ++i) {
      buff[i] = ba.at(i);
    }

    out << "get-emb-file: wrote to buffer: " << i << "\n";

    return (int)i;
  } catch (...) {
    return (int)0;
  }
}


EXTERN int cl_poppler_ffi_Document_has_embedded_files (Poppler::Document *larg1) {
  Poppler::Document *arg1 = (Poppler::Document *)0;

  arg1 = larg1;
  try {
    bool result = (bool)((Poppler::Document const *)arg1)->hasEmbeddedFiles();

    QFile file("cl-poppler-ffi_test_logging_output.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
      return 0;

    QTextStream out(&file);

    out << "hasembeddedfiles: " << result << "\n";

    if (result) {
      QList<Poppler::EmbeddedFile *> list = ((Poppler::Document const *)arg1)->embeddedFiles();

      out << "embeddedFiles number: " << list.size() << "\n";
      file.close();

      return (int)list.size();
    }

    out << "falling through without embeddedFiles\n";
    file.close();

    return (int)0;
  } catch (...) {
    return (int)0;
  }
}


EXTERN void cl_poppler_ffi_Page_delete (Poppler::Page *larg1) {
  Poppler::Page *arg1 = (Poppler::Page *)0;

  arg1 = larg1;
  try {
    delete arg1;
    return;
  } catch (...) {
    return;
  }
}

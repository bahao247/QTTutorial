#ifndef SUBADDLIB_GLOBAL_H
#define SUBADDLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SUBADDLIB_LIBRARY)
#  define SUBADDLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SUBADDLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SUBADDLIB_GLOBAL_H
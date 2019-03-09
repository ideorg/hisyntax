
#ifndef syntaxhl_EXPORT_H
#define syntaxhl_EXPORT_H

#ifdef syntaxhl_STATIC_DEFINE
#  define syntaxhl_EXPORT
#  define syntaxhl_NO_EXPORT
#else
#  ifndef syntaxhl_EXPORT
#    ifdef KF5SyntaxHighlighting_EXPORTS
        /* We are building this library */
#      define syntaxhl_EXPORT
#    else
        /* We are using this library */
#      define syntaxhl_EXPORT
#    endif
#  endif

#  ifndef syntaxhl_NO_EXPORT
#    define syntaxhl_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef syntaxhl_DEPRECATED
#  define syntaxhl_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef syntaxhl_DEPRECATED_EXPORT
#  define syntaxhl_DEPRECATED_EXPORT syntaxhl_EXPORT syntaxhl_DEPRECATED
#endif

#ifndef syntaxhl_DEPRECATED_NO_EXPORT
#  define syntaxhl_DEPRECATED_NO_EXPORT syntaxhl_NO_EXPORT syntaxhl_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef syntaxhl_NO_DEPRECATED
#    define syntaxhl_NO_DEPRECATED
#  endif
#endif

#endif /* syntaxhl_EXPORT_H */

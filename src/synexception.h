#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <QException>

namespace syntaxhl {

class SynException: public QException
{
protected:
    int code;
    int level;
    /** Error message.     */
    char *msgbuf;
public:    
    /** Constructor (C++ STL strings).
     *  @param message The error message.
     */
    explicit SynException(const QString& message, int code=0, int level=0);

    ~SynException() override;

    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *          is in posession of the Exception object. Callers must
     *          not attempt to free the memory.
     */
    virtual const char* what() const noexcept override;


    int getCode() noexcept;

    int getLevel() noexcept;

    void raise() const override;
    SynException *clone() const override;
};

}

#endif // EXCEPTION_H

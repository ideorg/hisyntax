/*
    Copyright (C) 2016 Volker Krause <vkrause@kde.org>

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:

    The above copyright notice and this permission notice shall be included
    in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
    CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
    SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef syntaxhl_FOLDINGREGION_H
#define syntaxhl_FOLDINGREGION_H

#include "syntaxhl_export.h"

#include <QTypeInfo>

namespace syntaxhl {

/** Represents a begin or end of a folding region.
 *  @since 5.28 */
class syntaxhl_EXPORT FoldingRegion
{
public:
    /**
     * Defines whether a FoldingRegion starts or ends a folding region.
     */
    enum Type {
        //! Used internally as indicator for invalid FoldingRegion%s.
        None,
        //! Indicates the start of a FoldingRegion.
        Begin,
        //! Indicates the end of a FoldingRegion.
        End
    };

    /**
     * Constructs an invalid folding region, meaning that isValid() returns @e false.
     * To obtain valid instances, see AbstractHighlighter::applyFolding().
     */
    FoldingRegion();

    /** Compares two FoldingRegion instances for equality. */
    bool operator==(const FoldingRegion &other) const;

    /**
     * Returns @c true if this is a valid folding region.
     * A valid FoldingRegion is defined by a type() other than Type::None.
     *
     * @note The FoldingRegion%s passed in AbstractHighlighter::applyFolding()
     *       are always valid.
     */
    bool isValid() const;

    /**
     * Returns a unique identifier for this folding region.
     *
     * As example, the C/C++ highlighter starts and ends a folding region for
     * scopes, e.g.:
     * \code
     * void foo() {     // '{' starts a folding region
     *     if (bar()) { // '{' starts a (nested) folding region
     *     }            // '}' ends the (nested) folding region
     * }                // '}' ends the outer folding region
     * \endcode
     * In this example, all braces '{' and '}' have the same id(), meaning that
     * if you want to find the matching closing region for the first opening
     * brace, you need to do kind of a reference counting to find the correct
     * closing brace.
     */
    quint16 id() const;

    /**
     * Returns whether this is the begin or end of a region.
     *
     * @note The FoldingRegion%s passed in AbstractHighlighter::applyFolding()
     *       are always valid, i.e. either Type::Begin or Type::End.
     */
    Type type() const;

private:
    friend class Rule;
    FoldingRegion(Type type, quint16 id);

    quint16 m_type : 2;
    quint16 m_id: 14;
};

}

Q_DECLARE_TYPEINFO(syntaxhl::FoldingRegion, Q_PRIMITIVE_TYPE);

#endif

//
// The MIT License (MIT)
//
// Copyright (c) 2013 by Konstantin (Kosta) Baumann & Autodesk Inc.
//
// Permission is hereby granted, free of charge,  to any person obtaining a copy of
// this software and  associated documentation  files  (the "Software"), to deal in
// the  Software  without  restriction,  including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software,  and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this  permission notice  shall be included in all
// copies or substantial portions of the Software.
//
// THE  SOFTWARE  IS  PROVIDED  "AS IS",  WITHOUT  WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE  AND NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE  LIABLE FOR ANY CLAIM,  DAMAGES OR OTHER LIABILITY, WHETHER
// IN  AN  ACTION  OF  CONTRACT,  TORT  OR  OTHERWISE,  ARISING  FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#pragma once

#if defined(_MSC_VER) && (_MSC_VER < 1900)
#  define SIGNALS_CPP_NOEXCEPT throw()
#else // defined(_MSC_VER) && (_MSC_VER < 1900)
#  define SIGNALS_CPP_NOEXCEPT noexcept
#endif // defined(_MSC_VER) && (_MSC_VER < 1900)

#if defined(_MSC_VER) && (_MSC_VER < 1900)
#  define SIGNALS_CPP_NEED_EXPLICIT_MOVE
#endif // defined(_MSC_VER) && (_MSC_VER < 1900)

#if defined(__clang__) || (defined(_MSC_VER) && (_MSC_VER >= 1900))
#  define SIGNALS_CPP_HAVE_VARIADIC_TEMPLATES
#endif

namespace signals { }
namespace sigs = signals;

/*
    Copyright 2005-2007 Adobe Systems Incorporated
    Distributed under the MIT License (see accompanying file LICENSE_1_0_0.txt
    or a copy at http://stlab.adobe.com/licenses.html)
*/

/**************************************************************************************************/

#ifndef ADOBE_ARRAY_HPP
#define ADOBE_ARRAY_HPP

#include <adobe/config.hpp>

#include <adobe/array_fwd.hpp>

#include <adobe/any_regular.hpp>
#include <adobe/typeinfo.hpp>
#include <adobe/vector.hpp>

/**************************************************************************************************/

namespace adobe {
namespace version_1 {

/**************************************************************************************************/

template <typename T> // T models Regular
inline void push_back(array_t& v, T x)
{ v.push_back(any_regular_t(adobe::move(x))); }

inline void push_back(array_t& v, any_regular_t x)
{ v.push_back(adobe::move(x)); }

/**************************************************************************************************/

} // namespace version_1

using version_1::push_back;

} // namespace adobe

/**************************************************************************************************/

ADOBE_SHORT_NAME_TYPE('a','r','r','y', adobe::array_t)

/**************************************************************************************************/

#endif

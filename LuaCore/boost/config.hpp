//  Boost config.hpp configuration header file  ------------------------------//

//  (C) Copyright John Maddock 2002.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for most recent version.

//  Boost config.hpp policy and rationale documentation has been moved to
//  http://www.boost.org/libs/config
//
//  CAUTION: This file is intended to be completely stable -
//           DO NOT MODIFY THIS FILE!
//

#ifndef BOOST_CONFIG_HPP
#define BOOST_CONFIG_HPP

// if we don't have a user config, then use the default location:
#if !defined(BOOST_USER_CONFIG) && !defined(BOOST_NO_USER_CONFIG)
#  define BOOST_USER_CONFIG <boost/config/user.hpp>
#if 0
// For dependency trackers:
#  include <boost/config/user.hpp>
#endif
#endif
// include it first:
#ifdef BOOST_USER_CONFIG
#  include BOOST_USER_CONFIG
#endif

// if we don't have a compiler config set, try and find one:
#if !defined(BOOST_COMPILER_CONFIG) && !defined(BOOST_NO_COMPILER_CONFIG) && !defined(BOOST_NO_CONFIG)
#  include <boost/config/select_compiler_config.hpp>
#endif
// if we have a compiler config, include it now:
#ifdef BOOST_COMPILER_CONFIG
#  include BOOST_COMPILER_CONFIG
#endif

// if we don't have a std library config set, try and find one:
#if !defined(BOOST_STDLIB_CONFIG) && !defined(BOOST_NO_STDLIB_CONFIG) && !defined(BOOST_NO_CONFIG) && defined(__cplusplus)
#  include <boost/config/select_stdlib_config.hpp>
#endif
// if we have a std library config, include it now:
#ifdef BOOST_STDLIB_CONFIG
#  include BOOST_STDLIB_CONFIG
#endif

// if we don't have a platform config set, try and find one:
#if !defined(BOOST_PLATFORM_CONFIG) && !defined(BOOST_NO_PLATFORM_CONFIG) && !defined(BOOST_NO_CONFIG)
#  include <boost/config/select_platform_config.hpp>
#endif
// if we have a platform config, include it now:
#ifdef BOOST_PLATFORM_CONFIG
#  include BOOST_PLATFORM_CONFIG
#endif

// get config suffix code:
#include <boost/config/suffix.hpp>

#undef BOOST_NO_CXX11_ADDRESSOF
#undef BOOST_NO_CXX11_ALIGNAS
#undef BOOST_NO_CXX11_ALLOCATOR
#undef BOOST_NO_CXX11_ATOMIC_SMART_PTR
#undef BOOST_NO_CXX11_AUTO_DECLARATIONS
#undef BOOST_NO_CXX11_AUTO_MULTIDECLARATIONS
#undef BOOST_NO_CXX11_CHAR16_T
#undef BOOST_NO_CXX11_CHAR32_T
#undef BOOST_NO_CXX11_CONSTEXPR
#undef BOOST_NO_CXX11_DECLTYPE
#undef BOOST_NO_CXX11_DECLTYPE_N3276
#undef BOOST_NO_CXX11_DELETED_FUNCTIONS
#undef BOOST_NO_CXX11_DEFAULTED_FUNCTIONS
#undef BOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS
#undef BOOST_NO_CXX11_EXTERN_TEMPLATE
#undef BOOST_NO_CXX11_FINAL
#undef BOOST_NO_CXX11_FIXED_LENGTH_VARIADIC_TEMPLATE_EXPANSION_PACKS
#undef BOOST_NO_CXX11_FUNCTION_TEMPLATE_DEFAULT_ARGS
#undef BOOST_NO_CXX11_HDR_ATOMIC
#undef BOOST_NO_CXX11_HDR_ARRAY
#undef BOOST_NO_CXX11_HDR_CHRONO
#undef BOOST_NO_CXX11_HDR_CODECVT
#undef BOOST_NO_CXX11_HDR_CONDITION_VARIABLE
#undef BOOST_NO_CXX11_HDR_FORWARD_LIST
#undef BOOST_NO_CXX11_HDR_FUNCTIONAL
#undef BOOST_NO_CXX11_HDR_FUTURE
#undef BOOST_NO_CXX11_HDR_INITIALIZER_LIST
#undef BOOST_NO_CXX11_HDR_MUTEX
#undef BOOST_NO_CXX11_HDR_RANDOM
#undef BOOST_NO_CXX11_HDR_RATIO
#undef BOOST_NO_CXX11_HDR_REGEX
#undef BOOST_NO_CXX11_HDR_SYSTEM_ERROR
#undef BOOST_NO_CXX11_HDR_THREAD
#undef BOOST_NO_CXX11_HDR_TUPLE
#undef BOOST_NO_CXX11_HDR_TYPEINDEX
#undef BOOST_NO_CXX11_HDR_TYPE_TRAITS
#undef BOOST_NO_CXX11_HDR_UNORDERED_MAP
#undef BOOST_NO_CXX11_HDR_UNORDERED_SET
#undef BOOST_NO_CXX11_INLINE_NAMESPACES
#undef BOOST_NO_CXX11_LAMBDAS
#undef BOOST_NO_CXX11_LOCAL_CLASS_TEMPLATE_PARAMETERS
#undef BOOST_NO_CXX11_NON_PUBLIC_DEFAULTED_FUNCTIONS
#undef BOOST_NO_CXX11_NOEXCEPT
#undef BOOST_NO_CXX11_NULLPTR
#undef BOOST_NO_CXX11_NUMERIC_LIMITS
#undef BOOST_NO_CXX11_RANGE_BASED_FOR
#undef BOOST_NO_CXX11_RAW_LITERALS
#undef BOOST_NO_CXX11_REF_QUALIFIERS
#undef BOOST_NO_CXX11_RVALUE_REFERENCES
#undef BOOST_NO_CXX11_SCOPED_ENUMS
#undef BOOST_NO_CXX11_SMART_PTR
#undef BOOST_NO_CXX11_STATIC_ASSERT
#undef BOOST_NO_CXX11_STD_ALIGN
#undef BOOST_NO_CXX11_STD_UNORDERED
#undef BOOST_NO_CXX11_TEMPLATE_ALIASES
#undef BOOST_NO_CXX11_TRAILING_RESULT_TYPES
#undef BOOST_NO_CXX11_UNICODE_LITERALS
#undef BOOST_NO_CXX11_UNIFIED_INITIALIZATION_SYNTAX
#undef BOOST_NO_CXX11_USER_DEFINED_LITERALS
#undef BOOST_NO_CXX11_VARIADIC_TEMPLATES
#undef BOOST_NO_CXX11_VARIADIC_MACROS
#undef BOOST_NO_LONG_LONG

#ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif

#endif  // BOOST_CONFIG_HPP

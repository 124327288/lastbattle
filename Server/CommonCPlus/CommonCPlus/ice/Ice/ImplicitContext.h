// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `ImplicitContext.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice_ImplicitContext_h__
#define __Ice_ImplicitContext_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/LocalException.h>
#include <Ice/Current.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace Ice
{

class ImplicitContext;
bool operator==(const ImplicitContext&, const ImplicitContext&);
bool operator<(const ImplicitContext&, const ImplicitContext&);
ICE_API ::Ice::LocalObject* upCast(::Ice::ImplicitContext*);
typedef ::IceInternal::Handle< ::Ice::ImplicitContext> ImplicitContextPtr;

}

namespace Ice
{

class ICE_API ImplicitContext : virtual public ::Ice::LocalObject
{
public:

    typedef ImplicitContextPtr PointerType;

    virtual ::Ice::Context getContext() const = 0;

    virtual void setContext(const ::Ice::Context&) = 0;

    virtual bool containsKey(const ::std::string&) const = 0;

    virtual ::std::string get(const ::std::string&) const = 0;

    virtual ::std::string put(const ::std::string&, const ::std::string&) = 0;

    virtual ::std::string remove(const ::std::string&) = 0;
};

inline bool operator==(const ImplicitContext& l, const ImplicitContext& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

inline bool operator<(const ImplicitContext& l, const ImplicitContext& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

}

#endif

//===-- SwiftRemoteMirror/Platform.h - Remote Mirror Platform --*-- C++ -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_REMOTE_MIRROR_PLATFORM_H
#define SWIFT_REMOTE_MIRROR_PLATFORM_H

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(swiftRemoteMirror_EXPORTS)
# if defined(__ELF__)
#   define SWIFT_REMOTE_MIRROR_LINKAGE __attribute__((__visibility__("protected")))
# elif defined(__MACH__)
#   define SWIFT_REMOTE_MIRROR_LINKAGE __attribute__((__visibility__("default")))
# else
#   if defined(_WINDLL)
#     define SWIFT_REMOTE_MIRROR_LINKAGE __declspec(dllexport)
#   else
#     define SWIFT_REMOTE_MIRROR_LINKAGE
#   endif
# endif
#else
# if defined(__ELF__)
#   define SWIFT_REMOTE_MIRROR_LINKAGE __attribute__((__visibility__("default")))
# elif defined(__MACH__)
#   define SWIFT_REMOTE_MIRROR_LINKAGE __attribute__((__visibility__("default")))
# else
#   if defined(_WINDLL)
#     define SWIFT_REMOTE_MIRROR_LINKAGE __declspec(dllimport)
#   else
#     define SWIFT_REMOTE_MIRROR_LINKAGE
#   endif
# endif
#endif

#if defined(__cplusplus)
}
#endif

#endif




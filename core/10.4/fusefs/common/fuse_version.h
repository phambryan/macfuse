/*
 * Copyright (C) 2006-2007 Google. All Rights Reserved.
 * Amit Singh <singh@>
 */

#ifndef _FUSE_VERSION_H_
#define _FUSE_VERSION_H_

#define MACFUSE_STRINGIFY(s)         MACFUSE_STRINGIFY_BACKEND(s)
#define MACFUSE_STRINGIFY_BACKEND(s) #s

/* Add things here. */

#define MACFUSE_FS_TYPE_LITERAL fusefs
#define MACFUSE_FS_TYPE         MACFUSE_STRINGIFY(MACFUSE_FS_TYPE_LITERAL)

#define MACFUSE_BUNDLE_IDENTIFIER_LITERAL \
        com.google.filesystems.MACFUSE_FS_TYPE_LITERAL
#define MACFUSE_BUNDLE_IDENTIFIER \
        MACFUSE_STRINGIFY(MACFUSE_BUNDLE_IDENTIFIER_LITERAL)

#define MACFUSE_BUNDLE_IDENTIFIER_TRUNK_LITERAL  fusefs
#define MACFUSE_BUNDLE_IDENTIFIER_TRUNK \
        MACFUSE_STRINGIFY(MACFUSE_BUNDLE_IDENTIFIER_TRUNK_LITERAL)

#define MACFUSE_TIMESTAMP __DATE__ ", " __TIME__

#define MACFUSE_VERSION_LITERAL 1.9.4
#define MACFUSE_VERSION         MACFUSE_STRINGIFY(MACFUSE_VERSION_LITERAL)

#define FUSE_KPI_GEQ(M, m) \
    (FUSE_KERNEL_VERSION > (M) || \
    (FUSE_KERNEL_VERSION == (M) && FUSE_KERNEL_MINOR_VERSION >= (m)))

#endif /* _FUSE_VERSION_H_ */

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CAContextImpl : CAContext {
    struct Context { unsigned int x1; struct Context {} *x2; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_3_1_1; } x3; struct Weak<const void *> { id x_4_1_1; } x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; struct Context {} x9; struct CGColorSpace {} *x10; int x11; struct __CFDictionary {} *x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned int x20; struct ObjectCache {} *x21; int x22; id x23; struct Commit {} *x24; struct Generic { int (**x_25_1_1)(); struct Context {} *x_25_1_2; } x25; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; } * _impl;
}

- (BOOL)colorMatchUntaggedContent;
- (struct CGColorSpace { }*)colorSpace;
- (unsigned int)commitPriority;
- (id)contentsFormat;
- (unsigned int)contextId;
- (unsigned int)createFencePort;
- (unsigned int)createSlot;
- (void)dealloc;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)displayMask;
- (unsigned int)displayNumber;
- (unsigned int)eventMask;
- (id)initRemoteWithOptions:(id)arg1;
- (id)initWithCGSConnection:(unsigned int)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1 localContext:(bool)arg2;
- (void)invalidate;
- (void)invalidateFences;
- (id)layer;
- (id)options;
- (struct Context { }*)renderContext;
- (int)restrictedHostProcessId;
- (void)setColorMatchUntaggedContent:(BOOL)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setCommitPriority:(unsigned int)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setDisplayMask:(unsigned int)arg1;
- (void)setDisplayNumber:(unsigned int)arg1;
- (void)setEventMask:(unsigned int)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)setLayer:(id)arg1;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)setRestrictedHostProcessId:(int)arg1;
- (BOOL)valid;

@end
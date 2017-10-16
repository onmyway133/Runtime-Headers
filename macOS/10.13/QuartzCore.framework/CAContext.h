/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CAContext : NSObject

@property (getter=NS_defaultContentsScale, setter=NS_setDefaultContentsScale:, atomic, readwrite) double NS_defaultContentsScale;
@property (setter=NS_setVisibleRect:, atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } NS_visibleRect;
@property (atomic, readwrite) BOOL colorMatchUntaggedContent;
@property (atomic, readwrite) struct CGColorSpace { }*colorSpace;
@property (atomic, readwrite) unsigned int commitPriority;
@property (atomic, readwrite, copy) NSString *contentsFormat;
@property (atomic, readonly) unsigned int contextId;
@property (atomic, readwrite) unsigned int displayMask;
@property (atomic, readwrite) unsigned int displayNumber;
@property (atomic, readwrite) unsigned int eventMask;
@property (atomic, readwrite, retain) CALayer *layer;
@property (atomic, readonly) NSDictionary *options;
@property (atomic, readwrite) int restrictedHostProcessId;
@property (atomic, readonly) BOOL valid;

// Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore

+ (id)allContexts;
+ (BOOL)allowsCGSConnections;
+ (id)contextWithCGSConnection:(unsigned int)arg1 options:(id)arg2;
+ (id)currentContext;
+ (id)localContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)remoteContext;
+ (id)remoteContextWithOptions:(id)arg1;
+ (void)setAllowsCGSConnections:(BOOL)arg1;
+ (void)setClientPort:(unsigned int)arg1;

- (unsigned int)createFencePort;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (void)invalidate;
- (void)invalidateFences;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;

// Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit

// CAContext (NSDefaultContentsScale)

- (double)NS_defaultContentsScale;
- (void)NS_setDefaultContentsScale:(double)arg1;

// CAContext (NSFunctionRow)

+ (id)functionRowContext;

// CAContext (NSSuggestedContentsScale)

- (void)_NS_accumulateSuggestedScaleBelow:(double*)arg1 :(double*)arg2;

// CAContext (NSVisibleRect)

+ (BOOL)automaticallyNotifiesObserversOfNS_visibleRect;

- (void)NS_setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })NS_visibleRect;

// CAContext (_NSTiledLayer)

+ (id)keyPathsForValuesAffectingNS_tiledLayerVisibleRect;

@end

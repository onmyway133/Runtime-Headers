/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
 */

@interface VMUClassInfo : NSObject {
    unsigned int  _defaultScanType;
    NSString * _displayName;
    VMUClassInfo * _genericLayout;
    BOOL  _hasSpecificLayout;
    BOOL  _hasVariantLayout;
    unsigned int  _instanceSize;
    unsigned int  _ivarCount;
    id * _localIvarList;
    NSString * _remoteBinaryPath;
    NSString * _remoteClassName;
    unsigned long long  _remoteIsa;
    unsigned int  _remotePointerSize;
    unsigned int  _remoteType;
    unsigned int  _ro_flags;
    unsigned int  _rw_flags;
    const char * _strongLayout;
    VMUClassInfo * _superclassLayout;
    unsigned int  _superclassOffset;
    BOOL  _usesSwiftRefcounting;
    NSMutableArray * _variantActions;
    NSMutableDictionary * _variantCache;
    NSMutableArray * _variantEvaluators;
    const char * _weakLayout;
}

@property (nonatomic, readonly) NSString *binaryName;
@property (nonatomic, readonly) NSString *binaryPath;
@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) unsigned int defaultScanType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *fullIvarDescription;
@property (nonatomic, readonly) VMUClassInfo *genericInfo;
@property (atomic, readonly) BOOL hasCppConstructorOrDestructor;
@property (nonatomic, readonly) BOOL hasSpecificLayout;
@property (nonatomic, readonly) BOOL hasVariantLayout;
@property (atomic, readonly) int infoType;
@property (atomic, readonly) unsigned int instanceSize;
@property (atomic, readonly) BOOL isARR;
@property (atomic, readonly) BOOL isMetaClass;
@property (atomic, readonly) BOOL isRealized;
@property (atomic, readonly) BOOL isRootClass;
@property (nonatomic, readonly) unsigned int pointerSize;
@property (atomic, readonly) unsigned long long remoteIsa;
@property (nonatomic, readonly) NSString *shortIvarDescription;
@property (nonatomic, readonly) VMUClassInfo *superclassInfo;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) BOOL usesSwiftRefcounting;

+ (id)_genericBlockByrefInfo;
+ (id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3;
+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (void)initialize;
+ (unsigned long long)sizeofClassStructure:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_addFields:(id)arg1;
- (void)_addVariantAction:(id)arg1 withEvaluator:(id)arg2;
- (void)_applyExtendedLayout:(const char *)arg1 withSize:(unsigned int)arg2;
- (id)_copyWithInstanceSize:(unsigned int)arg1 superclassOffset:(unsigned int)arg2 asVariant:(BOOL)arg3 mutable:(BOOL)arg4;
- (void)_demangleClassName;
- (void)_freeLocalIvarList;
- (id)_initWithClass:(unsigned long long)arg1 realizedOnly:(BOOL)arg2 infoMap:(id)arg3 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg4 type:(int)arg5 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; }*)arg6 memoryReader:(id)arg7;
- (id)_ivarDescription:(unsigned int)arg1 withSpacing:(unsigned int)arg2;
- (void)_logDescriptionWithSuperclasses:(BOOL)arg1 indentation:(int)arg2 toLogger:(id)arg3;
- (void)_parseIvarsAndLayouts;
- (void)_processARRLayout:(const char *)arg1 scanType:(unsigned int)arg2;
- (void)_replaceField:(id)arg1 withFields:(id)arg2;
- (void)_setBinaryPath:(id)arg1;
- (void)_setClassNameWithAddress:(unsigned long long)arg1 reader:(id)arg2;
- (void)_setDefaultScanType:(unsigned int)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)_setFields:(id)arg1;
- (void)_setIsa:(unsigned long long)arg1;
- (void)_setSuperclassInfo:(id)arg1;
- (unsigned int)_totalIvarCount;
- (id)binaryName;
- (id)binaryPath;
- (id)className;
- (void)dealloc;
- (id)debugDescription;
- (unsigned int)defaultScanType;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAllFieldsWithBlock:(id)arg1;
- (void)enumerateClassHierarchyWithBlock:(id)arg1;
- (void)enumerateExternalValuesFromObject:(unsigned long long)arg1 withSize:(unsigned int)arg2 block:(id)arg3;
- (void)enumerateScanningLocationsForSize:(unsigned int)arg1 withBlock:(id)arg2;
- (void)enumerateStoredEntriesForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 externalValues:(id)arg3 block:(id)arg4;
- (void)enumerateSublayoutsForSize:(unsigned int)arg1 withBlock:(id)arg2;
- (void)enumerateTypeFieldsWithBlock:(id)arg1;
- (id)fieldAtOrBeforeOffset:(unsigned int)arg1;
- (id)firstFieldWithName:(id)arg1;
- (id)fullIvarDescription;
- (id)genericInfo;
- (BOOL)hasCppConstructorOrDestructor;
- (BOOL)hasSpecificLayout;
- (BOOL)hasVariantLayout;
- (unsigned long long)hash;
- (int)infoType;
- (id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg3 type:(int)arg4 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; }*)arg5 memoryReader:(id)arg6;
- (id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3;
- (id)initWithClosureContext:(unsigned long long)arg1 typeInfo:(struct swift_typeinfo { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 infoMap:(id)arg3 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; }*)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg3 type:(int)arg4 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); unsigned long long x17; unsigned long long x18; unsigned long long x19; bool x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned char x24; unsigned char x25; }*)arg5 memoryReader:(id)arg6;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (unsigned int)instanceSize;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 memoryReader:(id)arg3;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withScanner:(id)arg3 memoryReader:(id)arg4;
- (BOOL)isARR;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMetaClass;
- (BOOL)isRealized;
- (BOOL)isRootClass;
- (id)mutableCopy;
- (unsigned int)pointerSize;
- (unsigned long long)remoteIsa;
- (id)scanDescriptionWithSize:(unsigned int)arg1;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (id)shortIvarDescription;
- (id)superclassInfo;
- (id)type;
- (id)typeName;
- (BOOL)usesSwiftRefcounting;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSRemoteOpenCallApplicationParameters : NSObject <NSSecureCoding> {
    struct ProcessSerialNumber { 
        unsigned int highLongOfPSN; 
        unsigned int lowLongOfPSN; 
    }  _applicationPSN;
    NSURL * _applicationURL;
    NSArray * _architectures;
    void * _asyncLaunchRefCon;
    NSDictionary * _environment;
    unsigned int  _flags;
    BOOL  _hasApplicationPSN;
    NSAppleEventDescriptor * _initialEvent;
}

@property (nonatomic, readonly) const struct LSApplicationParameters_V1 { long long x1; unsigned int x2; struct FSRef {} *x3; void *x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; struct AEDesc {} *x7; struct __CFArray {} *x8; struct __CFURL {} *x9; struct ProcessSerialNumber {} *x10; }*applicationParameters;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (const struct LSApplicationParameters_V1 { long long x1; unsigned int x2; struct FSRef {} *x3; void *x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; struct AEDesc {} *x7; struct __CFArray {} *x8; struct __CFURL {} *x9; struct ProcessSerialNumber {} *x10; }*)applicationParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithApplicationParameters_V1:(const struct LSApplicationParameters_V1 { long long x1; unsigned int x2; struct FSRef {} *x3; void *x4; struct __CFDictionary {} *x5; struct __CFArray {} *x6; struct AEDesc {} *x7; struct __CFArray {} *x8; struct __CFURL {} *x9; struct ProcessSerialNumber {} *x10; }*)arg1;
- (id)initWithCoder:(id)arg1;

@end
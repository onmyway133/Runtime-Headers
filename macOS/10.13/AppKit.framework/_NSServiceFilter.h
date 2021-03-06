/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSServiceFilter : NSObject {
    id  bundleIdentifier;
    unsigned int  characterLimit;
    unsigned long long  desiredFilterMask;
    _NSServiceEntry * entry;
    id  fileType;
    struct { 
        unsigned int contentTypeWebURL : 1; 
        unsigned int contentTypeAnyURL : 1; 
        unsigned int contentTypeDate : 1; 
        unsigned int contentTypeAddress : 1; 
        unsigned int contentTypeFilePath : 1; 
        unsigned int contentTypeRadar : 1; 
        unsigned int contentTypeEmail : 1; 
        unsigned int requiresCJKInputSource : 1; 
        unsigned int requiresAnyCharacterBeHalfWidth : 1; 
        unsigned int requiresAnyCharacterBeFullWidth : 1; 
        unsigned int requiresNonIdentityTraditionalToSimpleConversion : 1; 
        unsigned int requiresNonIdentitySimpleToTraditionalConversion : 1; 
        unsigned int hasMenuLocation : 1; 
        unsigned int menuLocationServices : 1; 
        unsigned int menuLocationContext : 1; 
        unsigned int disqualified : 1; 
        unsigned int sense : 1; 
        unsigned int reserved : 15; 
    }  flags;
    NSArray * linkSchemes;
    NSArray * nonstandardContentTypes;
    id  textLanguage;
    id  textScript;
    unsigned int  wordLimit;
}

+ (BOOL)isCJKInputSourceEnabled;

- (id)_descriptionInnards;
- (id)dataDetectorTypes;
- (void)dealloc;
- (id)description;
- (id)descriptionForTracking;
- (unsigned long long)desiredFilterMask;
- (BOOL)hasDataDetectorTypes;
- (id)init;
- (BOOL)isRequiredContext;
- (unsigned long long)serviceCategory;

@end

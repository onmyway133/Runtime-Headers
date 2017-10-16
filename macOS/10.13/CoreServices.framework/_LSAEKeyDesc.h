/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _LSAEKeyDesc : NSObject <NSSecureCoding> {
    struct AEKeyDesc { 
        unsigned int descKey; 
        struct AEDesc { 
            unsigned int descriptorType; 
            struct OpaqueAEDataStorageType {} **dataHandle; 
        } descContent; 
    }  _keyDesc;
}

@property (nonatomic, readonly) const struct AEKeyDesc { unsigned int x1; struct AEDesc { unsigned int x_2_1_1; struct OpaqueAEDataStorageType {} **x_2_1_2; } x2; }*aeKeyDesc;

+ (BOOL)supportsSecureCoding;

- (const struct AEKeyDesc { unsigned int x1; struct AEDesc { unsigned int x_2_1_1; struct OpaqueAEDataStorageType {} **x_2_1_2; } x2; }*)aeKeyDesc;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAEKeyDesc:(const struct AEKeyDesc { unsigned int x1; struct AEDesc { unsigned int x_2_1_1; struct OpaqueAEDataStorageType {} **x_2_1_2; } x2; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyword:(unsigned int)arg1 aeDesc:(const struct AEDesc { unsigned int x1; struct OpaqueAEDataStorageType {} **x2; }*)arg2;
- (id)initWithKeyword:(unsigned int)arg1 descriptor:(id)arg2;

@end

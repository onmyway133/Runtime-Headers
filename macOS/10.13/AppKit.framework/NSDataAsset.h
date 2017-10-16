/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDataAsset : NSObject <NSCopying> {
    void * _namedData;
}

@property (atomic, readonly, copy) NSData *data;
@property (atomic, readonly, copy) NSString *name;
@property (atomic, readonly, copy) NSString *typeIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 bundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)typeIdentifier;

@end

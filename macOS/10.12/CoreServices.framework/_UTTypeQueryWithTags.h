/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _UTTypeQueryWithTags : _UTTypeQuery {
    NSString * _conformsTo;
    long long  _limit;
    NSString * _tag;
    NSString * _tagClass;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4;
- (BOOL)isEqual:(id)arg1;

@end

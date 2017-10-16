/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface _UTTypeQuery : _LSQuery {
    unsigned long long  _flags;
}

@property (setter=_setResolveInactiveDeclarations:, nonatomic, readwrite) BOOL _resolveInactiveDeclarations;

+ (id)typeQueryForAllDeclaredIdentifiers;
+ (id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned long long)arg2;
+ (id)typeQueryWithIdentifier:(id)arg1;
+ (id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3;
+ (id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4;

- (BOOL)_resolveInactiveDeclarations;
- (void)_setResolveInactiveDeclarations:(BOOL)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)resolve;

@end
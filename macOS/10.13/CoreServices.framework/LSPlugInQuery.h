/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
 */

@interface LSPlugInQuery : _LSQuery

+ (id)pluginQuery;
+ (id)pluginQueryWithIdentifier:(id)arg1;
+ (id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(id)arg2;
+ (id)pluginQueryWithURL:(id)arg1;
+ (id)pluginQueryWithUUID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id)arg2;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (BOOL)_shouldCacheResolvedResults;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)sort:(BOOL)arg1 pluginIDs:(id)arg2 andYield:(id)arg3 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg4;

@end

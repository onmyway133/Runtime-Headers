/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface WebDatabaseManager : NSObject

+ (id)sharedWebDatabaseManager;

- (id)databasesWithOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (void)deleteAllIndexedDatabases;
- (BOOL)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (BOOL)deleteOrigin:(id)arg1;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)init;
- (id)origins;

@end

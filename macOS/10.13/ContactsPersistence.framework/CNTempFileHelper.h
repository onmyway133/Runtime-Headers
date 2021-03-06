/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNTempFileHelper : NSObject

+ (BOOL)copyDatabaseAtURL:(id)arg1 toUrl:(id)arg2 withCoordinator:(id)arg3 error:(id*)arg4;
+ (id)createHashedMigrationDirectoryForDatabasePath:(id)arg1 error:(id*)arg2;
+ (id)standardizedPathForPath:(id)arg1;
+ (id)temporaryDatabaseUrlByCopyingDatabaseAtPath:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3;
+ (id)temporaryDatabaseUrlForDatabasePath:(id)arg1 error:(id*)arg2;
+ (id)temporaryTimeMachineDirectory;

@end

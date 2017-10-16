/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
 */

@interface CNPersistentStoreBuilderEnvironment : NSObject {
    <CNNSFileManager> * _fileManager;
    <CNNSWorkspace> * _workspace;
}

@property (atomic, readonly) <CNNSFileManager> *fileManager;
@property (atomic, readwrite, retain) <CNNSWorkspace> *workspace;

+ (id)makeProductionEnvironment;

- (void)dealloc;
- (id)description;
- (id)fileManager;
- (id)initWithFileManager:(id)arg1 workspace:(id)arg2;
- (void)setWorkspace:(id)arg1;
- (id)workspace;

@end

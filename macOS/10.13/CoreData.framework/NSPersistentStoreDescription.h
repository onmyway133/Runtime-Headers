/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSPersistentStoreDescription : NSObject <NSCopying> {
    NSString * _configuration;
    NSMutableDictionary * _options;
    NSString * _type;
    NSURL * _url;
}

@property (atomic, readwrite, copy) NSURL *URL;
@property (atomic, readwrite, copy) NSString *configuration;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (getter=isReadOnly, atomic, readwrite) BOOL readOnly;
@property (atomic, readwrite) BOOL shouldAddStoreAsynchronously;
@property (atomic, readwrite) BOOL shouldInferMappingModelAutomatically;
@property (atomic, readwrite) BOOL shouldMigrateStoreAutomatically;
@property (nonatomic, readonly, copy) NSDictionary *sqlitePragmas;
@property (atomic, readwrite) double timeout;
@property (atomic, readwrite, copy) NSString *type;

+ (id)inMemoryPersistentStoreDescription;
+ (id)persistentStoreDescriptionWithURL:(id)arg1;

- (id)URL;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReadOnly;
- (id)mirroringDelegate;
- (id)mirroringOptions;
- (id)options;
- (void)setConfiguration:(id)arg1;
- (void)setMirroringDelegate:(id)arg1;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (void)setOption:(id)arg1 forMirroringKey:(id)arg2;
- (void)setReadOnly:(BOOL)arg1;
- (void)setShouldAddStoreAsynchronously:(BOOL)arg1;
- (void)setShouldInferMappingModelAutomatically:(BOOL)arg1;
- (void)setShouldInvokeCompletionHandlerConcurrently:(BOOL)arg1;
- (void)setShouldMigrateStoreAutomatically:(BOOL)arg1;
- (void)setTimeout:(double)arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forPragmaNamed:(id)arg2;
- (BOOL)shouldAddStoreAsynchronously;
- (BOOL)shouldInferMappingModelAutomatically;
- (BOOL)shouldInvokeCompletionHandlerConcurrently;
- (BOOL)shouldMigrateStoreAutomatically;
- (id)sqlitePragmas;
- (double)timeout;
- (id)type;

@end

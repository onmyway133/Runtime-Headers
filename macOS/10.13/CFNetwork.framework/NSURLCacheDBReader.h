/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface NSURLCacheDBReader : NSObject {
    NSString * _dbPathDirectory;
    NSString * _dbPathFile;
    struct sqlite3 { } * _dbReadConnection;
    NSLock * _dbReadConnectionLock;
    BOOL  _isDBOpen;
    unsigned char  _performTimeRelativeLookups;
    NSMutableSet * _recentTimeStampLookups;
    long long  _schemaVersion;
    struct sqlite3_stmt { } * _sqlSelectStmt;
    struct sqlite3_stmt { } * _sqlSelectTimeStmt;
    NSLock * _timeRelativeLookupLock;
    NSMutableSet * recentTimeStampLookups;
}

@property (atomic, readwrite, retain) NSString *dbPathDirectory;
@property (atomic, readwrite, retain) NSString *dbPathFile;
@property (atomic, readwrite) BOOL isDBOpen;
@property (atomic, readwrite) unsigned char performTimeRelativeLookups;
@property (atomic, readwrite, retain) NSMutableSet *recentTimeStampLookups;

- (void)_closeDB;
- (void)_closeDBReadConnections;
- (BOOL)_finalizeAllDBStatements;
- (BOOL)_finalizeDBSelectStatements;
- (BOOL)_openDBReadConnections;
- (BOOL)_prepareDBSelectStatements;
- (BOOL)_prepareDBStatements;
- (void)cleanupAndShutdown_Lock;
- (id)createCachedResponseDictForTransmissionWithKey:(id)arg1 objectVersion:(long long)arg2 storagePolicy:(int)arg3 responseObjectBytes:(char *)arg4 responseObjectBytesLength:(int)arg5 protoProps:(char *)arg6 protoPropsLength:(int)arg7 receiverDataBytes:(char *)arg8 receiverDataLength:(int)arg9 requestObjectBytes:(char *)arg10 requestObjectBytesLength:(int)arg11 userInfoBytes:(const char *)arg12 useInfoLength:(int)arg13 isDataOnFS:(BOOL)arg14 cacheDirPath:(id)arg15 cacheFileName:(id)arg16;
- (struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFCachedURLResponse {} *x2; }*)createCachedResponseForKey:(id)arg1 cacheDataPath:(id*)arg2 cacheDataFile:(id*)arg3 caller:(struct _CFURLCache { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct shared_ptr<__CFURLCache> { struct __CFURLCache {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg4;
- (id)dbPathDirectory;
- (id)dbPathFile;
- (void)dealloc;
- (int)execSQLStatement:(const char *)arg1 onConnection:(struct sqlite3 { }*)arg2 toCompletionWithRetry:(long long)arg3 writeLockHeld:(BOOL)arg4;
- (id)init;
- (id)initWithDBPath:(id)arg1 maxSize:(long long)arg2;
- (BOOL)isDBOpen;
- (BOOL)openAndPrepareReadCacheDB;
- (void)performTimeRelativeLookupWithInitialTime:(id)arg1 caller:(struct _CFURLCache { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct shared_ptr<__CFURLCache> { struct __CFURLCache {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg2;
- (unsigned char)performTimeRelativeLookups;
- (id)recentTimeStampLookups;
- (void)setDbPathDirectory:(id)arg1;
- (void)setDbPathFile:(id)arg1;
- (void)setIsDBOpen:(BOOL)arg1;
- (void)setPerformTimeRelativeLookups:(unsigned char)arg1;
- (void)setRecentTimeStampLookups:(id)arg1;
- (int)stepSQLStatement:(struct sqlite3_stmt { }*)arg1 toCompletionWithRetry:(long long)arg2;

@end

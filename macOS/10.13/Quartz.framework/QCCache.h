/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCCache : NSObject <QCCache> {
    unsigned long long  _flags;
    int (* _function;
    unsigned long long  _hits;
    double  _maxAge;
    unsigned long long  _maxResources;
    double  _maxSize;
    unsigned long long  _md5Count;
    unsigned long long * _md5Indices;
    struct { unsigned char x1[16]; } * _md5List;
    struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } * _mutex;
    QCCache * _parent;
    unsigned long long  _position;
    unsigned long long  _resourceCount;
    struct QCResourceInfo {} ** _resources;
    QCCache * _root;
    float * _scores;
    double  _sizeUpdateTimestamp;
    unsigned long long  _statCount;
    double * _stats;
    unsigned long long  _successfulHits;
    double  _time;
    double  _timestamp;
    double  _totalSize;
    double  _totalSizeTimeStamp;
    void * _unused;
    void * _userInfo;
    int (* _userInfoReleaseCallback;
}

- (void)_addResource:(id)arg1 withSize:(double)arg2 cost:(double)arg3 md5List:(struct { unsigned char x1[16]; }*)arg4 count:(unsigned long long)arg5;
- (void)_finalize_QCCache;
- (id)_initWithOptionFlags:(unsigned long long)arg1 maxSize:(double)arg2 maxAge:(double)arg3 resources:(struct QCResourceInfo {}**)arg4 maxResources:(unsigned long long)arg5 parent:(id)arg6 root:(id)arg7 function:(int (*)arg8 userInfo:(void*)arg9 userInfoReleaseCallback:(int (*)arg10 md5List:(struct { unsigned char x1[16]; }*)arg11 md5Indices:(unsigned long long*)arg12 md5Count:(unsigned long long)arg13;
- (void)_updateStatsForResourceAtIndex:(unsigned long long)arg1;
- (void)addResource:(id)arg1 withSize:(double)arg2 cost:(double)arg3 md5List:(struct { unsigned char x1[16]; }*)arg4 count:(unsigned long long)arg5;
- (void)collectResources;
- (id)copyAllResources;
- (id)copyAnyResource;
- (id)copyBestResource:(float*)arg1;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)initWithMaximumSize:(double)arg1 maximumResourceAge:(double)arg2 options:(id)arg3;
- (void)removeAllResources;
- (void)removeResource:(id)arg1;
- (id)subcacheMatchingMd5List:(struct { unsigned char x1[16]; }*)arg1 forIndices:(unsigned long long*)arg2 count:(unsigned long long)arg3;
- (id)subcacheUsingFilteringFunction:(int (*)arg1 userInfo:(void*)arg2 userInfoReleaseCallback:(int (*)arg3;

// QCCache (Internal)

- (void)_filterAllResourcesIfNeeded;
- (BOOL)_isAtEnd;
- (BOOL)_needsUpdate;
- (id)_parent;
- (unsigned long long)_resourceCount;
- (void)_runGarbageCollection;
- (void)_runGarbageCollectionForAge;
- (void)_runGarbageCollectionForSize;
- (BOOL)_sizeNeedsUpdate;
- (double)_timestamp;
- (void)_updateSize;
- (void)_updateSizeIfNeeded;

// QCCache (Private)

- (void)_applyFunctionOnAllResources:(int (*)arg1 userInfo:(void*)arg2;
- (id)_branchDescription;
- (void)_collectResourcesForAge;
- (void)_collectResourcesForSize;
- (id)_copyCacheWithFunction:(int (*)arg1 userInfo:(void*)arg2 userInfoReleaseCallback:(int (*)arg3 md5List:(struct { unsigned char x1[16]; }*)arg4 md5Indices:(unsigned long long*)arg5 md5Count:(unsigned long long)arg6;
- (id)_listResources:(BOOL)arg1;
- (void)_recycleResource:(id)arg1;
- (void)_removeResourceAtIndex:(unsigned long long)arg1;
- (struct QCResourceInfo {}**)_resources;
- (id)ageStatistics;
- (id)branchDescription;
- (id)initWithOptionFlags:(unsigned long long)arg1 maxSize:(double)arg2 maxAge:(double)arg3;
- (BOOL)isEmpty;
- (id)listResources;
- (double)maximumAge;
- (unsigned long long)maximumSize;
- (id)performanceCounters;
- (void)setMaximumAge:(double)arg1;
- (void)setMaximumSize:(unsigned long long)arg1;
- (void)setSizeNeedsUpdate:(BOOL)arg1;
- (double)standardDeviation;
- (double)totalSize;

// QCCache (RectSupport)

- (id)subcacheUsingRectFilteringFunction:(int)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
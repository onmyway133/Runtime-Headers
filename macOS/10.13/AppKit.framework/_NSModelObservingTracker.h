/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSModelObservingTracker : NSObject {
    NSArray * _availableModelAndProxyKeys;
    NSArray * _indexReferenceModelObjectArray;
    NSMutableArray * _modelAndProxyKeysArray;
    id  _modelObserver;
    struct __modelObservingTrackerFlags { 
        unsigned int _multipleObservedModelObjects : 1; 
        unsigned int _reservedModelObservingTrackerFlags : 31; 
    }  _modelObservingTrackerFlags;
    NSMutableIndexSet * _observedModelIndexData;
    NSMutableDictionary * _observedModelKeyPathInfoTable;
    id  _observedModelObjectsData;
}

- (void)_dealloc;
- (void)_logObservingInfo;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForKeyPath:(id)arg2;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForKeyPath:(id)arg2 ofModelObject:(id)arg3;
- (void)_registerOrUnregister:(BOOL)arg1 observerNotificationsForModelObject:(id)arg2;
- (void)_startObservingModelObject:(id)arg1;
- (void)_stopObservingModelObject:(id)arg1;
- (void)addObservedKey:(id)arg1;
- (void)analyzeKeyPath:(id)arg1 registerOrUnregister:(BOOL)arg2;
- (void)clearAllModelObjectObserving;
- (void)dealloc;
- (id)indexReferenceModelObjectArray;
- (id)initWithModelObserver:(id)arg1 availableModelAndProxyKeys:(id)arg2;
- (id)modelAndProxyKeysObserved;
- (void)registerModelKeyPath:(id)arg1;
- (void)registerModelKeyPaths:(id)arg1 unregisterModelKeyPaths:(id)arg2;
- (void)removeObservedKey:(id)arg1;
- (void)replaceIndexReferenceModelObjectArrayWithEqualCopy:(id)arg1;
- (void)setIndexReferenceModelObjectArray:(id)arg1 clearAllModelObjectObserving:(BOOL)arg2;
- (void)setObservingToModelObjectsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)startObservingModelObject:(id)arg1;
- (void)startObservingModelObjectAtReferenceIndex:(unsigned long long)arg1;
- (void)startObservingModelObjectsAtReferenceIndexes:(id)arg1;
- (void)stopObservingModelObject:(id)arg1;
- (void)stopObservingModelObjectAtReferenceIndex:(unsigned long long)arg1;
- (void)stopObservingModelObjectsAtReferenceIndexes:(id)arg1;
- (void)unregisterModelKeyPath:(id)arg1;
- (void)updateReferenceIndexesToReflectInsertionAtIndex:(unsigned long long)arg1;
- (void)updateReferenceIndexesToReflectInsertionAtIndexes:(id)arg1;
- (void)updateReferenceIndexesToReflectRemovalAtIndex:(unsigned long long)arg1;
- (void)updateReferenceIndexesToReflectRemovalAtIndexes:(id)arg1;

@end
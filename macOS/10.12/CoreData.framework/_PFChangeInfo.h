/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface _PFChangeInfo : NSObject {
    unsigned long long  _changeType;
    NSIndexPath * _finalIndexPath;
    NSManagedObject * _object;
    _NSDefaultSectionInfo * _sectionInfo;
    NSIndexPath * _startIndexPath;
}

@property (nonatomic, readwrite) unsigned long long changeType;
@property (nonatomic, readwrite, retain) NSIndexPath *finalIndexPath;
@property (nonatomic, readonly, retain) NSManagedObject *object;
@property (nonatomic, readwrite, retain) _NSDefaultSectionInfo *sectionInfo;
@property (nonatomic, readwrite, retain) NSIndexPath *startIndexPath;

- (unsigned long long)changeType;
- (void)dealloc;
- (id)description;
- (id)finalIndexPath;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 changeType:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)object;
- (id)sectionInfo;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setFinalIndexPath:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setStartIndexPath:(id)arg1;
- (id)startIndexPath;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSCKMirroredRelationship : NSObject <PFAncillaryModelObject> {
    NSString * _ckRecordID;
    NSData * _ckRecordSystemFields;
    NSString * _entityName;
    NSNumber * _fetchedPKNum;
    BOOL  _isDeleted;
    BOOL  _isPending;
    BOOL  _isUploaded;
    NSString * _recordName;
    NSString * _relatedEntityName;
    NSString * _relatedRecordName;
    NSString * _relationshipName;
}

@property (nonatomic, readonly) NSString *ckRecordID;
@property (nonatomic, readonly) NSData *ckRecordSystemFields;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSNumber *fetchedPKNum;
@property (nonatomic, readonly) BOOL isDeleted;
@property (nonatomic, readonly) BOOL isPending;
@property (nonatomic, readonly) BOOL isUploaded;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, readonly) NSString *relatedEntityName;
@property (nonatomic, readonly) NSString *relatedRecordName;
@property (nonatomic, readonly) NSString *relationshipName;

- (id)ckRecordID;
- (id)ckRecordSystemFields;
- (void)dealloc;
- (id)entityName;
- (id)fetchedPKNum;
- (id)initWithFetchResult:(id)arg1 andSQLEntity:(id)arg2;
- (id)initWithMirroredManyToMany:(id)arg1;
- (BOOL)isDeleted;
- (BOOL)isPending;
- (BOOL)isUploaded;
- (id)recordName;
- (id)relatedEntityName;
- (id)relatedRecordName;
- (id)relationshipName;
- (void)setBindValue:(id)arg1;
- (void)setPending:(BOOL)arg1 deleted:(BOOL)arg2 uploaded:(BOOL)arg3;
- (void)updatePKNumFromInsert:(long long)arg1;
- (BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end

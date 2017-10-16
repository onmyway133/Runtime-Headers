/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext {
    NSManagedObjectID * _objectID;
    NSRelationshipDescription * _relationship;
}

@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) NSRelationshipDescription *relationship;
@property (nonatomic, readonly) NSSQLModel *sqlModel;

- (void)dealloc;
- (void)executeRequestCore:(id*)arg1;
- (id)initWithObjectID:(id)arg1 relationship:(id)arg2 context:(id)arg3 sqlCore:(id)arg4;
- (id)objectID;
- (id)relationship;
- (id)sqlModel;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {
    long long  _changeID;
    long long  _changeType;
    NSManagedObjectID * _changedObjectID;
    NSData * _columns;
    NSSQLEntity * _sqlEntity;
    NSDictionary * _tombstone;
    NSPersistentHistoryTransaction * _transaction;
}

+ (id)_dataMaskForEntity:(id)arg1 andDeltaMask:(struct __CFBitVector { }*)arg2;
+ (id)_mergeOldMask:(id)arg1 andNewMask:(id)arg2;
+ (id)_propertyDataForEntity:(id)arg1 withSetOfPropertyNames:(id)arg2;
+ (id)_updatedPropertiesForEntity:(id)arg1 andData:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (long long)changeID;
- (long long)changeType;
- (id)changedObjectID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChangeID:(long long)arg1 transaction:(id)arg2 objectID:(id)arg3 type:(long long)arg4 tombstone:(id)arg5 columns:(id)arg6 entity:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)tombstone;
- (id)transaction;
- (id)updatedProperties;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSEntityMapping : NSObject {
    NSMutableArray * _attributeMappings;
    NSString * _destinationEntityName;
    NSData * _destinationEntityVersionHash;
    struct __entityMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedEntityMapping : 31; 
    }  _entityMappingFlags;
    NSString * _entityMigrationPolicyClassName;
    unsigned long long  _mappingType;
    NSDictionary * _mappingsByName;
    NSString * _name;
    NSMutableArray * _relationshipMappings;
    void * _reserved;
    void * _reserved1;
    NSString * _sourceEntityName;
    NSData * _sourceEntityVersionHash;
    NSExpression * _sourceExpression;
    NSDictionary * _userInfo;
}

@property (atomic, readwrite, retain) NSArray *attributeMappings;
@property (atomic, readwrite, copy) NSString *destinationEntityName;
@property (atomic, readwrite, copy) NSData *destinationEntityVersionHash;
@property (atomic, readwrite, copy) NSString *entityMigrationPolicyClassName;
@property (atomic, readwrite) unsigned long long mappingType;
@property (atomic, readwrite, copy) NSString *name;
@property (atomic, readwrite, retain) NSArray *relationshipMappings;
@property (atomic, readwrite, copy) NSString *sourceEntityName;
@property (atomic, readwrite, copy) NSData *sourceEntityVersionHash;
@property (atomic, readwrite, retain) NSExpression *sourceExpression;
@property (nonatomic, readwrite, retain) NSDictionary *userInfo;

+ (void)initialize;

- (id)attributeMappings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationEntityName;
- (id)destinationEntityVersionHash;
- (void)encodeWithCoder:(id)arg1;
- (id)entityMigrationPolicyClassName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)mappingType;
- (id)name;
- (id)relationshipMappings;
- (void)setAttributeMappings:(id)arg1;
- (void)setDestinationEntityName:(id)arg1;
- (void)setDestinationEntityVersionHash:(id)arg1;
- (void)setEntityMigrationPolicyClassName:(id)arg1;
- (void)setMappingType:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setRelationshipMappings:(id)arg1;
- (void)setSourceEntityName:(id)arg1;
- (void)setSourceEntityVersionHash:(id)arg1;
- (void)setSourceExpression:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)sourceEntityName;
- (id)sourceEntityVersionHash;
- (id)sourceExpression;
- (id)userInfo;

// NSEntityMapping (_NSInternalMethods)

- (void)_addAttributeMapping:(id)arg1;
- (void)_addRelationshipMapping:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (BOOL)_hasInferredMappingNeedingValidation;
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;
- (id)_mappingsByName;
- (id)_migrationPolicy;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (BOOL)isEditable;

@end

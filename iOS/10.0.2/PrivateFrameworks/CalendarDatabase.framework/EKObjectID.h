/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {
    int  _entityType;
    int  _rowID;
    bool  _temporary;
}

+ (id)objectIDWithCADObjectID:(struct { int x1; int x2; })arg1;
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2;
+ (id)objectIDWithURL:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)temporaryObjectIDWithEntityType:(int)arg1;

- (struct { int x1; int x2; })CADObjectID;
- (id)URIRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (int)entityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTemporary;
- (int)rowID;
- (id)stringRepresentation;

@end
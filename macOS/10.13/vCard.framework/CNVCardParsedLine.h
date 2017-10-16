/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
 */

@interface CNVCardParsedLine : NSObject {
    NSString * _grouping;
    BOOL  _isPrimary;
    NSString * _name;
    NSArray * _parameters;
    id  _value;
}

@property (atomic, readwrite, copy) NSString *grouping;
@property (atomic, readwrite) BOOL isPrimary;
@property (atomic, readonly, copy) NSString *name;
@property (atomic, readwrite, copy) NSArray *parameters;
@property (atomic, readwrite, retain) id value;

- (void).cxx_destruct;
- (id)description;
- (id)grouping;
- (id)initWithName:(id)arg1;
- (BOOL)isPrimary;
- (id)name;
- (id)parameters;
- (void)setGrouping:(id)arg1;
- (void)setIsPrimary:(BOOL)arg1;
- (void)setParameters:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
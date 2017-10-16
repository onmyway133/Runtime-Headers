/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
 */

@interface MTLStructTypeInternal : MTLStructType {
    unsigned long long  _dataType;
    NSDictionary * _dictionary;
    BOOL  _isIndirectArgumentBuffer;
    NSArray * _members;
}

@property (atomic, readwrite) BOOL isIndirectArgumentBuffer;

- (unsigned long long)dataType;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2;
- (BOOL)isIndirectArgumentBuffer;
- (id)memberByName:(id)arg1;
- (id)members;
- (void)setIsIndirectArgumentBuffer:(BOOL)arg1;

@end
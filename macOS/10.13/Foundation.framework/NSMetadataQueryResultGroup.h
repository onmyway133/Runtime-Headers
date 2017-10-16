/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSMetadataQueryResultGroup : NSObject {
    /* Warning: unhandled array encoding: '[9@]' */ id  _private;
    unsigned long long  _private2;
    void * _reserved;
}

@property (atomic, readonly, copy) NSString *attribute;
@property (atomic, readonly) unsigned long long resultCount;
@property (atomic, readonly, copy) NSArray *results;
@property (atomic, readonly, copy) NSArray *subgroups;
@property (atomic, readonly, retain) id value;

- (void)_addResult:(unsigned long long)arg1;
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4;
- (void)_zapResultArray;
- (id)attribute;
- (void)dealloc;
- (id)resultAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultCount;
- (id)results;
- (id)subgroups;
- (id)value;

@end

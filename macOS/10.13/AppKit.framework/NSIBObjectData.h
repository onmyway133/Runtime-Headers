/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSIBObjectData : NSObject <NSCoding> {
    id  _document;
    NSIBObjectDataAuxilary * _objectDataAuxilary;
    NSMapTable * classTable;
    NSMutableArray * connections;
    id  firstResponder;
    id  fontManager;
    NSMapTable * instantiatedObjectTable;
    NSMapTable * nameTable;
    unsigned long long  nextOid;
    NSMapTable * objectTable;
    NSMapTable * oidTable;
    id  rootObject;
    NSString * targetFramework;
    NSMutableSet * visibleWindows;
}

+ (void)initialize;

- (void)_addEarlyDecodingObjectsFromObjectList:(id)arg1 toConnections:(id)arg2;
- (void)_removeEarlyDecodingObjectConnectionsFromConnections:(id)arg1;
- (id)classTable;
- (id)connections;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)firstResponder;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instantiateObject:(id)arg1;
- (id)nameTable;
- (long long)nextObjectID;
- (void)nibInstantiateWithOwner:(id)arg1;
- (void)nibInstantiateWithOwner:(id)arg1 options:(id)arg2 topLevelObjects:(id)arg3;
- (void)nibInstantiateWithOwner:(id)arg1 topLevelObjects:(id)arg2;
- (id)objectTable;
- (id)oidTable;
- (id)rootObject;
- (void)setConnections:(id)arg1;
- (void)setFirstResponder:(id)arg1;
- (void)setNextObjectID:(unsigned long long)arg1;
- (void)setRootObject:(id)arg1;
- (void)setShouldEncodeDesigntimeData:(BOOL)arg1;
- (void)setTargetFramework:(id)arg1;
- (void)setVisibleWindows:(id)arg1;
- (BOOL)shouldEncodeDesigntimeData;
- (id)targetFramework;
- (id)visibleWindows;

// NSIBObjectData (NSCompatibility)

- (void)_assignObjectIds;
- (void)_encodeIntValuedMapTable:(id)arg1 withCoder:(id)arg2;
- (void)_encodeMapTable:(id)arg1 forTypes:(const char *)arg2 withCoder:(id)arg3;
- (void)_encodeObjectValuedMapTable:(id)arg1 withCoder:(id)arg2;
- (void)_readVersion0:(id)arg1;

@end
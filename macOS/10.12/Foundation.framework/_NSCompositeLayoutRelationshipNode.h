/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface _NSCompositeLayoutRelationshipNode : _NSLayoutRelationshipNode <_NSLayoutRelationshipNodeParent> {
    NSMutableArray * _childNodes;
}

@property (atomic, readonly, copy) NSArray *_childRelationshipNodes;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)_addChildRelationshipNode:(id)arg1;
- (id)_childRelationshipNodes;
- (void)_removeChildRelationshipNode:(id)arg1;
- (id)childNodesCreatingIfNecessary;
- (void)dealloc;
- (id)debugDescription;

@end

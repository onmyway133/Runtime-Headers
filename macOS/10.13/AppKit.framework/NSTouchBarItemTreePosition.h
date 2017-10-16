/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarItemTreePosition : NSObject <NSCopying> {
    long long  _indexInParent;
    NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> * _parentNode;
}

@property (atomic, readonly) long long indexInParent;
@property (atomic, readonly, copy) NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *parentNode;

+ (id)positionInParentNode:(id)arg1 atIndex:(long long)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)indexInParent;
- (BOOL)isEqual:(id)arg1;
- (id)parentNode;

@end

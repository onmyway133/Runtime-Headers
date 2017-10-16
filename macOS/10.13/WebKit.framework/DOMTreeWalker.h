/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface DOMTreeWalker : DOMObject

@property (atomic, readwrite, retain) DOMNode *currentNode;
@property (atomic, readonly) BOOL expandEntityReferences;
@property (atomic, readonly) <DOMNodeFilter> *filter;
@property (atomic, readonly) DOMNode *root;
@property (atomic, readonly) unsigned int whatToShow;

- (id)currentNode;
- (void)dealloc;
- (BOOL)expandEntityReferences;
- (id)filter;
- (id)firstChild;
- (id)lastChild;
- (id)nextNode;
- (id)nextSibling;
- (id)parentNode;
- (id)previousNode;
- (id)previousSibling;
- (id)root;
- (void)setCurrentNode:(id)arg1;
- (unsigned int)whatToShow;

@end

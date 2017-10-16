/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface DOMNamedNodeMap : DOMObject

@property (atomic, readonly) unsigned int length;

- (void)dealloc;
- (id)getNamedItem:(id)arg1;
- (id)getNamedItemNS:(id)arg1 localName:(id)arg2;
- (id)item:(unsigned int)arg1;
- (unsigned int)length;
- (id)removeNamedItem:(id)arg1;
- (id)removeNamedItemNS:(id)arg1 localName:(id)arg2;
- (id)setNamedItem:(id)arg1;
- (id)setNamedItemNS:(id)arg1;

// DOMNamedNodeMap (DOMNamedNodeMapDeprecated)

- (id)getNamedItemNS:(id)arg1 :(id)arg2;
- (id)removeNamedItemNS:(id)arg1 :(id)arg2;

@end

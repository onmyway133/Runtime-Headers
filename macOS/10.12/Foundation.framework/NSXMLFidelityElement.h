/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSXMLFidelityElement : NSXMLElement {
    NSString * _endWhitespace;
    unsigned long long  _fidelity;
    NSString * _startWhitespace;
}

- (void)_XMLStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)_canonicalXMLStringPreservingComments:(BOOL)arg1 namespaceString:(id)arg2 relationships:(id)arg3;
- (BOOL)_setPrefix:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)fidelity;
- (id)init;
- (void)setEndWhitespace:(id)arg1;
- (void)setFidelity:(unsigned long long)arg1;
- (void)setWhitespace:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTDataReferenceEnumerator : NSEnumerator {
    NSEnumerator * _enumerator;
    QTMedia * _media;
    long long  _reserved1;
    long long  _reserved2;
    long long  _reserved3;
    unsigned int  index;
}

+ (id)dataReferenceEnumeratorWithQTMedia:(id)arg1;
+ (id)dataReferenceEnumeratorWithQTMovie:(id)arg1;

- (void)dealloc;
- (id)initWithQTMedia:(id)arg1;
- (id)initWithQTMovie:(id)arg1;
- (id)nextObject;

// QTDataReferenceEnumerator (QTDataReferenceEnumerator_Private)

- (void)setEnumerator:(id)arg1;
- (void)setMedia:(id)arg1;

@end

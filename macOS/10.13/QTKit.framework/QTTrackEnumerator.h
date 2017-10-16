/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTTrackEnumerator : NSEnumerator {
    unsigned int  _index;
    QTMovie * _movie;
    long long  _reserved1;
    long long  _reserved2;
    long long  _reserved3;
}

+ (id)trackEnumeratorWithMovie:(id)arg1;

- (void)dealloc;
- (void)finalize;
- (id)initWithMovie:(id)arg1;
- (id)nextObject;

// QTTrackEnumerator (QTTrackEnumerator_Private)

- (void)setMovie:(id)arg1;

@end
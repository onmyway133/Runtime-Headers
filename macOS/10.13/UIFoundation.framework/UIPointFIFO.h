/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface UIPointFIFO : NSObject {
    UIPointFIFO * _nextFIFO;
}

@property (nonatomic, readwrite, retain) UIPointFIFO *nextFIFO;

- (void)addPoint;
- (void)clear;
- (void)dealloc;
- (void)emitPoint;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)nextFIFO;
- (void)setNextFIFO:(id)arg1;

@end
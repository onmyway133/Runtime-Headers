/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCDemultiplexer : QCPatch {
    QCPort * _inPort;
    NSMutableArray * _outPorts;
    QCPort * _resetPort;
    QCIndexPort * inputIndex;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;

- (void)dealloc;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (unsigned long long)outputCount;
- (Class)portClass;
- (BOOL)resetOutputs;
- (void)setOutputCount:(unsigned long long)arg1;
- (void)setPortClass:(Class)arg1;
- (void)setResetOutputs:(BOOL)arg1;
- (BOOL)setState:(id)arg1;
- (id)state;

// QCDemultiplexer (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end
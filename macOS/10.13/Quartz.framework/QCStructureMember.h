/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCStructureMember : QCPatch {
    QCPort * _inPort;
    QCStructurePort * inputStructure;
    QCVirtualPort * outputMember;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;

- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)setState:(id)arg1;
- (id)state;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
 */

@interface ICScannerFeatureTemplateProps : NSObject {
    ICScannerFunctionalUnit * _fu;
    int  _numberOfTargets;
    NSArray * _targets;
}

@property (atomic, readwrite) ICScannerFunctionalUnit *fu;
@property (atomic, readwrite) int numberOfTargets;
@property (atomic, readwrite, retain) NSArray *targets;

- (void)dealloc;
- (void)finalize;
- (id)fu;
- (int)numberOfTargets;
- (void)setFu:(id)arg1;
- (void)setNumberOfTargets:(int)arg1;
- (void)setTargets:(id)arg1;
- (id)targets;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject {
    struct OpaqueFigVideoCompositorFrame { } * _compositionFrame;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _compositionTime;
    <AVVideoCompositionInstruction> * _instruction;
    BOOL  _isFinished;
    AVVideoCompositionRenderContext * _renderContext;
    AVWeakReference * _session;
    NSArray * _sourceTrackIDsInClientOrder;
    NSDictionary * _sourcesByTrackID;
}

@property (nonatomic, readwrite) struct OpaqueFigVideoCompositorFrame { }*compositionFrame;
@property (nonatomic, readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } compositionTime;
@property (nonatomic, readwrite, retain) <AVVideoCompositionInstruction> *instruction;
@property (nonatomic, readwrite) BOOL isFinished;
@property (nonatomic, readwrite, retain) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic, readwrite, retain) AVWeakReference *session;
@property (nonatomic, readwrite, retain) NSArray *sourceTrackIDsInClientOrder;
@property (nonatomic, readwrite, retain) NSDictionary *sourcesByTrackID;

- (struct OpaqueFigVideoCompositorFrame { }*)compositionFrame;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })compositionTime;
- (void)dealloc;
- (id)instruction;
- (BOOL)isFinished;
- (id)renderContext;
- (id)session;
- (void)setCompositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg1;
- (void)setCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInstruction:(id)arg1;
- (void)setIsFinished:(BOOL)arg1;
- (void)setRenderContext:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSourceTrackIDsInClientOrder:(id)arg1;
- (void)setSourcesByTrackID:(id)arg1;
- (id)sourceTrackIDsInClientOrder;
- (id)sourcesByTrackID;

@end

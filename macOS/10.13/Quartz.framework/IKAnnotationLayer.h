/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
 */

@interface IKAnnotationLayer : CALayer {
    CALayer * _activeAnnotation;
    int  _annotationType;
    IKComposer * _composer;
    NSString * _undoString;
}

@property (atomic, readwrite) int annotationType;
@property (atomic, readwrite, copy) NSString *undoString;

+ (id)addAnnotationLayer:(id)arg1;
+ (double)fadeDuration;
+ (BOOL)registerLayerWithView:(id)arg1;

- (void)addCursorRects;
- (int)annotationType;
- (void)changeColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)clearAnnotation;
- (BOOL)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)createAnnotationWithEvent:(id)arg1;
- (void)deleteSelectedAnnotations;
- (void)drawInContext:(struct CGContext { }*)arg1 drawSelection:(BOOL)arg2;
- (BOOL)ikKeyDown:(id)arg1;
- (void)ikMouseDown:(id)arg1;
- (BOOL)ikPerformKeyEquivalent:(id)arg1;
- (void)initialAddAnnotation:(id)arg1;
- (void)mouseDownOutsideSelection:(id)arg1;
- (void)mouseUpOnAddingLayer:(id)arg1;
- (void)moveAnnotationByX:(int)arg1 Y:(int)arg2;
- (void)selectLayer:(id)arg1 extendSelection:(BOOL)arg2;
- (void)setAnnotationType:(int)arg1;
- (void)setUndoString:(id)arg1;
- (void)setup:(id)arg1;
- (void)toggleArrowAtEnd;
- (void)toggleArrowAtStart;
- (void)toggleDash;
- (void)toggleShadow;
- (void)toolmodeWillChangeFrom:(long long)arg1 to:(long long)arg2;
- (id)undoString;
- (void)updateBorderWidth:(int)arg1;
- (void)willBeRemovedFromSuperlayer;

@end

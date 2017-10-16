/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSPressGestureRecognizer : NSGestureRecognizer <NSCoding> {
    double  _allowableMovement;
    long long  _buttonCount;
    unsigned long long  _buttonMask;
    long long  _lcflags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _minimumPressDuration;
    id  _reserved1;
}

@property (atomic, readwrite) double allowableMovement;
@property (atomic, readwrite) unsigned long long buttonMask;
@property (atomic, readwrite) BOOL cancelPastAllowableMovement;
@property (atomic, readwrite) double minimumPressDuration;
@property (atomic, readwrite) long long numberOfTouchesRequired;
@property (atomic, readonly, retain) NSArray *touches;

- (void)_appendSubclassDescription:(id)arg1;
- (double)allowableMovement;
- (unsigned long long)buttonMask;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)cancelPastAllowableMovement;
- (void)clearTimer;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)minimumPressDuration;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (long long)numberOfTouchesRequired;
- (void)otherMouseDown:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)reset;
- (void)rightMouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)setAllowableMovement:(double)arg1;
- (void)setButtonMask:(unsigned long long)arg1;
- (void)setCancelPastAllowableMovement:(BOOL)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setNumberOfTouchesRequired:(long long)arg1;
- (void)startTimer;
- (id)touches;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;

// NSPressGestureRecognizer (NSPressGestureRecognizer_Private_FOR_IB)

- (BOOL)_hasCustomAllowableMovement;
- (BOOL)_hasCustomMinimumPressDuration;
- (void)_setHasCustomAllowableMovement:(BOOL)arg1;
- (void)_setHasCustomMinimumPressDuration:(BOOL)arg1;

// NSPressGestureRecognizer (_NSTouchBarLoggingExtentions)

- (id)_descriptionForTouchBarLogging;

@end

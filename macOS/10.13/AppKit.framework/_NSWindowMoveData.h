/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSWindowMoveData : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  catchupSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  lastEventLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  newEventLocation;
    struct CGSize { 
        double width; 
        double height; 
    }  offset;
    struct CGPoint { 
        double x; 
        double y; 
    }  startingEventLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  startingOrigin;
}

@property (atomic, readwrite) struct CGSize { double x1; double x2; } catchupSize;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } lastEventLocation;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } newEventLocation;
@property (atomic, readwrite) struct CGSize { double x1; double x2; } offset;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } startingEventLocation;
@property (atomic, readwrite) struct CGPoint { double x1; double x2; } startingOrigin;

- (struct CGSize { double x1; double x2; })catchupSize;
- (struct CGPoint { double x1; double x2; })lastEventLocation;
- (struct CGPoint { double x1; double x2; })newEventLocation;
- (struct CGSize { double x1; double x2; })offset;
- (void)setCatchupSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastEventLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNewEventLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setStartingEventLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartingOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startingEventLocation;
- (struct CGPoint { double x1; double x2; })startingOrigin;

@end

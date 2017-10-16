/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTHUDTimeline : QTHUDSlider <QTHUDTimelineCellDelegate> {
    <QTHUDTimelineDelegate> * _delegate;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

+ (void)initialize;

- (struct { long long x1; long long x2; long long x3; })QTTimeValue;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)exposedBindings;
- (id)highlightedTimeRanges;
- (id)initWithCoder:(id)arg1;
- (BOOL)isBordered;
- (void)setBordered:(BOOL)arg1;
- (void)setCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightedTimeRanges:(id)arg1;
- (void)setQTTimeValue:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; long long x_1_1_2; long long x_1_1_3; } x1; struct { long long x_2_1_1; long long x_2_1_2; long long x_2_1_3; } x2; })arg1;
- (void)takeQTTimeValueFrom:(id)arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; long long x_1_1_3; } x1; struct { long long x_2_1_1; long long x_2_1_2; long long x_2_1_3; } x2; })timeRange;

// QTHUDTimeline (QTHUDTimelineCellDelegate)

- (struct { long long x1; long long x2; long long x3; })timelineCell:(id)arg1 willChangeTimeValue:(struct { long long x1; long long x2; long long x3; })arg2;

@end

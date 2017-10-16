/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
 */

@interface QFilterComponentDefaultProfile : QFilterComponent

+ (BOOL)isUsedInFilter:(struct QFilterInfo { id x1; struct QuartzFilterOptions {} x2; struct QuartzFilterOptionsInfo {} *x3; id x4; id x5; BOOL x6[5]; struct AssignComponentInfo { id x_7_1_1; id x_7_1_2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x_7_1_3; void*x_7_1_4; int x_7_1_5; void*x_7_1_6; int x_7_1_7[12]; long long x_7_1_8[12]; int x_7_1_9[4][5]; } x7; struct DefaultComponentInfo { id x_8_1_1; id x_8_1_2; void*x_8_1_3; void*x_8_1_4; int x_8_1_5; void*x_8_1_6; int x_8_1_7[12]; long long x_8_1_8[12]; int x_8_1_9[4][5]; } x8; struct IntermediateComponentInfo { id x_9_1_1; void*x_9_1_2; void*x_9_1_3; int x_9_1_4; void*x_9_1_5; int x_9_1_6[16]; int x_9_1_7[16]; long long x_9_1_8[16]; int x_9_1_9[16][7]; int x_9_1_10[4][5]; } x9; struct TargetComponentInfo { id x_10_1_1; void*x_10_1_2; void*x_10_1_3; int x_10_1_4; void*x_10_1_5; int x_10_1_6[16]; long long x_10_1_7[16]; int x_10_1_8[4][5]; } x10; struct RenderingIntentInfo { int x_11_1_1[16]; int x_11_1_2[16]; unsigned int x_11_1_3[16]; } x11; id x12; }*)arg1;
+ (id)newWithFilterInfo:(struct QFilterInfo { id x1; struct QuartzFilterOptions {} x2; struct QuartzFilterOptionsInfo {} *x3; id x4; id x5; BOOL x6[5]; struct AssignComponentInfo { id x_7_1_1; id x_7_1_2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x_7_1_3; void*x_7_1_4; int x_7_1_5; void*x_7_1_6; int x_7_1_7[12]; long long x_7_1_8[12]; int x_7_1_9[4][5]; } x7; struct DefaultComponentInfo { id x_8_1_1; id x_8_1_2; void*x_8_1_3; void*x_8_1_4; int x_8_1_5; void*x_8_1_6; int x_8_1_7[12]; long long x_8_1_8[12]; int x_8_1_9[4][5]; } x8; struct IntermediateComponentInfo { id x_9_1_1; void*x_9_1_2; void*x_9_1_3; int x_9_1_4; void*x_9_1_5; int x_9_1_6[16]; int x_9_1_7[16]; long long x_9_1_8[16]; int x_9_1_9[16][7]; int x_9_1_10[4][5]; } x9; struct TargetComponentInfo { id x_10_1_1; void*x_10_1_2; void*x_10_1_3; int x_10_1_4; void*x_10_1_5; int x_10_1_6[16]; long long x_10_1_7[16]; int x_10_1_8[4][5]; } x10; struct RenderingIntentInfo { int x_11_1_1[16]; int x_11_1_2[16]; unsigned int x_11_1_3[16]; } x11; id x12; }*)arg1 upperItem:(id)arg2;

- (BOOL)addCell;
- (BOOL)addCellWithSettings:(int)arg1 data:(int)arg2 profile:(long long)arg3;
- (id)initWithFilterInfo:(struct QFilterInfo { id x1; struct QuartzFilterOptions {} x2; struct QuartzFilterOptionsInfo {} *x3; id x4; id x5; BOOL x6[5]; struct AssignComponentInfo { id x_7_1_1; id x_7_1_2; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x_7_1_3; void*x_7_1_4; int x_7_1_5; void*x_7_1_6; int x_7_1_7[12]; long long x_7_1_8[12]; int x_7_1_9[4][5]; } x7; struct DefaultComponentInfo { id x_8_1_1; id x_8_1_2; void*x_8_1_3; void*x_8_1_4; int x_8_1_5; void*x_8_1_6; int x_8_1_7[12]; long long x_8_1_8[12]; int x_8_1_9[4][5]; } x8; struct IntermediateComponentInfo { id x_9_1_1; void*x_9_1_2; void*x_9_1_3; int x_9_1_4; void*x_9_1_5; int x_9_1_6[16]; int x_9_1_7[16]; long long x_9_1_8[16]; int x_9_1_9[16][7]; int x_9_1_10[4][5]; } x9; struct TargetComponentInfo { id x_10_1_1; void*x_10_1_2; void*x_10_1_3; int x_10_1_4; void*x_10_1_5; int x_10_1_6[16]; long long x_10_1_7[16]; int x_10_1_8[4][5]; } x10; struct RenderingIntentInfo { int x_11_1_1[16]; int x_11_1_2[16]; unsigned int x_11_1_3[16]; } x11; id x12; }*)arg1 upperItem:(id)arg2;
- (void)resetCellInfo:(id)arg1;
- (void)resetOptionsInfo;
- (void)updateOptionsInfo:(id)arg1;
- (void)updateProfileInfo;
- (void)updateUI;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSStackInContainerRule : NSObject <NSLayoutRule> {
    NSLayoutRect * _containingRect;
    long long  _orientation;
    double  _spacing;
    NSArray * _stackedRects;
}

@property (atomic, readonly, copy) NSLayoutRect *containingRect;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly, copy) NSString *identifier;
@property (atomic, readonly) long long orientation;
@property (atomic, readonly, copy) NSString *ruleDescription;
@property (atomic, readonly) double spacing;
@property (atomic, readonly, copy) NSArray *stackedRects;
@property (atomic, readonly) Class superclass;

+ (id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;
+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4;
+ (id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;

- (id)containingRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 containingRect:(id)arg3 spacing:(double)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)makeChildRules;
- (long long)orientation;
- (id)ruleDescription;
- (double)spacing;
- (id)stackedRects;

@end

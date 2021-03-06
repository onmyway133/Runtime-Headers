/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDUnaryOperator : DDBasicRegexp <NSCopying> {
    DDBindableRegexp * _subPattern;
}

- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2 operator:(id)arg3;
- (id)argument;
- (void)dealloc;
- (id)initWithPattern:(id)arg1;
- (id)prettyPrintWithPriority:(int)arg1 operatorPriority:(int)arg2 operator:(id)arg3;
- (int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2;

// DDUnaryOperator (DDASTCopy)

- (id)copyWithZone:(struct _NSZone { }*)arg1;

// DDUnaryOperator (DDASTToICU)

+ (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 argument:(id)arg4 operatorString:(id)arg5;

// DDUnaryOperator (TypeBuilder)

- (id)computeTypeFromParent:(id)arg1 withManager:(id)arg2;
- (id)computeTypeFromParent:(id)arg1 withManager:(id)arg2 kind:(int)arg3;

@end

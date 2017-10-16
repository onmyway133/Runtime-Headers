/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents> {
    NSArray * _continueFormats;
    NSArray * _maneuverFormats;
    NSArray * _mergeFormats;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readwrite, retain) NSArray *continueFormats;
@property (nonatomic, readonly) BOOL hasServerContent;
@property (nonatomic, readwrite, retain) NSArray *maneuverFormats;
@property (nonatomic, readwrite, retain) NSArray *mergeFormats;
@property (nonatomic, readwrite, retain) NSString *roadName;
@property (nonatomic, readwrite) BOOL suppressFallback;
@property (nonatomic, readwrite) BOOL suppressNames;

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3;

- (void).cxx_destruct;
- (id)_instructionsForFormats:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (long long)context;
- (id)continueFormats;
- (id)description;
- (BOOL)hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)maneuverFormats;
- (id)mergeFormats;
- (void)setContinueFormats:(id)arg1;
- (void)setManeuverFormats:(id)arg1;
- (void)setMergeFormats:(id)arg1;

@end
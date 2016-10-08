/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUILocationSearchABSearchMatchProcessor : NSObject {
    id /* block */  _completion;
    unsigned long long  _currentIndex;
    NSMutableArray * _matchesToProcess;
    NSMutableArray * _processedMatches;
    NSTimer * _timer;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic, retain) NSMutableArray *matchesToProcess;
@property (nonatomic, retain) NSMutableArray *processedMatches;
@property (nonatomic, retain) NSTimer *timer;

- (void).cxx_destruct;
- (void)_finishedProcessing;
- (void)_processResultAtIndex:(unsigned long long)arg1;
- (void)_processResults;
- (void)_reset;
- (void)_scheduleWithDelay:(double)arg1;
- (void)addMatchesToProcess:(id)arg1;
- (void)cancel;
- (id /* block */)completion;
- (unsigned long long)currentIndex;
- (id)initWithCompletion:(id /* block */)arg1;
- (id)matchesToProcess;
- (id)processedMatches;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)setMatchesToProcess:(id)arg1;
- (void)setProcessedMatches:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end

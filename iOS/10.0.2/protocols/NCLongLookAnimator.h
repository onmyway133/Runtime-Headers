/* Generated by RuntimeBrowser.
 */

@protocol NCLongLookAnimator <NCViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>

@required

- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (bool)isCancelled;
- (bool)isPresenting;
- (void)setTransitionAnimatorDelegate:(id <NCLongLookAnimatorDelegate>)arg1;
- (<NCLongLookAnimatorDelegate> *)transitionAnimatorDelegate;
- (void)updateInteractiveTransition:(double)arg1;

@end

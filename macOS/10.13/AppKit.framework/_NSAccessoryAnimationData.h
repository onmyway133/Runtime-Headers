/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSAccessoryAnimationData : NSObject {
    <NSAnimationContextCompletionHandlerSuspension> * _animationContextResumeKey;
    NSDictionary * _animationsDictionary;
    id  _animator;
    NSAnimation * _visibilityAnimation;
}

@property (atomic, readwrite, retain) <NSAnimationContextCompletionHandlerSuspension> *animationContextResumeKey;
@property (atomic, readwrite, copy) NSDictionary *animationsDictionary;
@property (atomic, readwrite) id animator;
@property (atomic, readwrite, retain) NSAnimation *visibilityAnimation;

- (void).cxx_destruct;
- (id)animationContextResumeKey;
- (id)animationsDictionary;
- (id)animator;
- (void)dealloc;
- (void)setAnimationContextResumeKey:(id)arg1;
- (void)setAnimationsDictionary:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void)setVisibilityAnimation:(id)arg1;
- (id)visibilityAnimation;

@end

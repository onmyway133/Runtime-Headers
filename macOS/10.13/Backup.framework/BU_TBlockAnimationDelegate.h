/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
 */

@interface BU_TBlockAnimationDelegate : NSObject <NSAnimationDelegate> {
    struct function<void (NSAnimation *, float)>="__buf_"{type="__lx"[32C] {}  _progressCallback;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (id)init;
- (id)initWithAnimation:(id)arg1 progressCallback:(struct function<void (NSAnimation *, float)>={type=[32C] {})arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface _ACComponentWrapper : NSObject {
    struct shared_ptr<APComponent> { 
        struct APComponent {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mComponent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponent:(struct shared_ptr<APComponent> { struct APComponent {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

@end

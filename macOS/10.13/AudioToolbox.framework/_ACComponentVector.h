/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox
 */

@interface _ACComponentVector : NSObject {
    struct AudioComponentVector { 
        struct shared_ptr<APComponent> {} *__begin_; 
        struct shared_ptr<APComponent> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { 
            struct shared_ptr<APComponent> {} *__first_; 
        } __end_cap_; 
        bool mSorted; 
    }  mVector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVector:(const struct AudioComponentVector { struct shared_ptr<APComponent> {} *x1; struct shared_ptr<APComponent> {} *x2; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> {} *x_3_1_1; } x3; bool x4; }*)arg1;

@end

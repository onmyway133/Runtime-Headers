/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTHUDGroupViewItem : NSObject <NSCoding> {
    struct { 
        unsigned int hidden : 1; 
        unsigned int reserved : 31; 
    }  _flags;
    QTHUDGroupView * _groupView;
    double  _margins;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    void * _observationInfo;
    NSView * _view;
}

+ (BOOL)automaticallyNotifiesObserversOfGroupView;
+ (BOOL)automaticallyNotifiesObserversOfHidden;
+ (BOOL)automaticallyNotifiesObserversOfMaxSize;
+ (BOOL)automaticallyNotifiesObserversOfMinSize;
+ (BOOL)automaticallyNotifiesObserversOfView;
+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isHidden;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (void*)observationInfo;
- (void)setGroupView:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end

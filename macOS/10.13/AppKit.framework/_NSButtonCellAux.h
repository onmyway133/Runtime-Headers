/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSButtonCellAux : NSObject {
    double  _acceleratorClickTimestamp;
    _NSAcceleratorButtonHelper * _acceleratorHelper;
    NSMutableArray * _animatingOutImageViews;
    NSMutableArray * _animatingOutTextFields;
    _NSButtonAnimationView * _animator;
    NSColor * _bezelTintColor;
    unsigned char  _buttonType;
    NSUserInterfaceCompressionOptions * _compressibleOptions;
    double  _doubleValue;
    struct { 
        unsigned int exceededInitialValue : 1; 
        unsigned int springLoaded : 1; 
        unsigned int springLoadingEmphasized : 1; 
        unsigned int animationsAllowed : 1; 
        unsigned int hasBeenSnoopingAroundPrivateFlags : 1; 
        unsigned int showsDisclosureChevron : 1; 
        unsigned int guarded : 1; 
        unsigned int _reserved : 25; 
    }  _flags;
    long long  _maxAcceleratorLevel;
    double  _minimumPressDuration;
    unsigned long long  _modelImagePosition;
}

@property (atomic, readwrite, retain) NSMutableArray *animatingOutImageViews;
@property (atomic, readwrite, retain) NSMutableArray *animatingOutTextFields;
@property (atomic, readwrite, retain) _NSButtonAnimationView *animator;
@property (atomic, readwrite, copy) NSColor *bezelTintColor;
@property (atomic, readwrite) double minimumPressDuration;

- (id)animatingOutImageViews;
- (id)animatingOutTextFields;
- (id)animator;
- (id)bezelTintColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (double)minimumPressDuration;
- (void)setAnimatingOutImageViews:(id)arg1;
- (void)setAnimatingOutTextFields:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void)setBezelTintColor:(id)arg1;
- (void)setMinimumPressDuration:(double)arg1;

@end

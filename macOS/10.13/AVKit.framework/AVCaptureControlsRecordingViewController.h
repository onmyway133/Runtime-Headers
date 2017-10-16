/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVCaptureControlsRecordingViewController : AVCaptureControlsViewController {
    BOOL  _optionKeyPressed;
    NSButton * _recordButton;
    BOOL  _recordButtonEnabled;
    NSImage * _recordButtonImage;
    BOOL  _redDotHidden;
    AVTouchBarRecordingControlsProvider * _touchBarRecordingControlsProvider;
}

@property (nonatomic, readwrite) BOOL optionKeyPressed;
@property (nonatomic, readwrite, retain) NSButton *recordButton;
@property (nonatomic, readwrite) BOOL recordButtonEnabled;
@property (nonatomic, readwrite, retain) NSImage *recordButtonImage;
@property (getter=isRedDotHidden, nonatomic, readwrite) BOOL redDotHidden;

+ (id)keyPathsForValuesAffectingRecordButtonEnabled;
+ (id)keyPathsForValuesAffectingRecordButtonImage;

- (void).cxx_destruct;
- (void)dealloc;
- (void)flagsChanged:(id)arg1;
- (id)init;
- (BOOL)isRedDotHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)optionKeyPressed;
- (id)recordButton;
- (BOOL)recordButtonEnabled;
- (id)recordButtonImage;
- (id)recordButtonPauseImage;
- (id)recordButtonRecordImage;
- (id)recordButtonStopImage;
- (void)setOptionKeyPressed:(BOOL)arg1;
- (void)setRecordButton:(id)arg1;
- (void)setRecordButtonEnabled:(BOOL)arg1;
- (void)setRecordButtonImage:(id)arg1;
- (void)setRedDotHidden:(BOOL)arg1;
- (void)syncRecordButtonWithCaptureStatus;
- (id)touchBar;
- (id)touchBarRecordingControlsProvider;

@end

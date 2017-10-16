/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell <MKMultiLineLabelContainer> {
    NSLayoutConstraint * _imageToLabelConstraint;
    MKImageView * _shieldImageView;
    _MKUILabel * _systemLabel;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite, retain) NSImage *systemArtwork;
@property (nonatomic, readwrite, copy) NSString *systemName;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)multilineTextFieldsWithinContainer;
- (void)setSystemArtwork:(id)arg1;
- (void)setSystemName:(id)arg1;
- (id)systemArtwork;
- (id)systemName;

@end

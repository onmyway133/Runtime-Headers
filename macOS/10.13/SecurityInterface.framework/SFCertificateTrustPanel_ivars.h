/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
 */

@interface SFCertificateTrustPanel_ivars : NSObject {
    NSBox * _aboveContentBox;
    NSBox * _belowContentBox;
    BOOL  _certificatesDisclosed;
    NSString * _defaultInformation;
    NSString * _defaultMessage;
    NSBox * _discloseContentBox;
    NSLayoutConstraint * _discloseContentHeightConstraint;
    BOOL  _forceAdminTrust;
    SFIconView * _iconView;
    NSTextField * _informationField;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastDiscloseRect;
    NSTextField * _messageField;
    NSWindow * _offScreenWindow;
    BOOL  _savingTrustSettings;
    NSButton * _showCertButton;
    BOOL  _showsCertButton;
    BOOL  _showsTrustButton;
    NSSplitView * _splitView;
    NSStackView * _stackView;
    NSArray * _topLevelObjects;
    NSButton * _trustButton;
    long long  _trustButtonState;
}

- (void)dealloc;

@end
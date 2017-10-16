/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKMapAttribution : NSObject {
    NSImage * _providerImage;
    NSString * _providerName;
    NSString * _providerString;
    NSAttributedString * _string;
    NSURL * _url;
}

@property (nonatomic, readonly) NSAttributedString *disclosureArrow;
@property (nonatomic, readonly) NSImage *providerImage;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSString *providerString;
@property (nonatomic, readonly) NSAttributedString *string;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)attributedStringWithImage:(id)arg1;
- (id)disclosureArrow;
- (id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3;
- (id)providerImage;
- (id)providerName;
- (id)providerString;
- (id)string;
- (id)url;

@end

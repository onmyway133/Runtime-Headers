/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCloudSharingParticipantDetails : NSObject <NSSecureCoding> {
    NSString * _detailText;
    CKShareParticipant * _participant;
    NSColor * _participantColor;
}

@property (atomic, readonly, copy) NSString *detailText;
@property (atomic, readonly) CKShareParticipant *participant;
@property (atomic, readwrite, copy) NSColor *participantColor;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)detailText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipant:(id)arg1 detailText:(id)arg2;
- (id)participant;
- (id)participantColor;
- (void)setParticipantColor:(id)arg1;

@end

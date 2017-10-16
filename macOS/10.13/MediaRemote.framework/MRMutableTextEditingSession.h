/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRMutableTextEditingSession : MRTextEditingSession

@property (nonatomic, readwrite, retain) MRTextEditingAttributes *attributes;
@property (getter=isEditing, nonatomic, readwrite) BOOL editing;
@property (nonatomic, readwrite, copy) NSString *text;

- (void)setAttributes:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setText:(id)arg1;

@end

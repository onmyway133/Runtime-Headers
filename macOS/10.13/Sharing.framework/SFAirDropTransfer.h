/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface SFAirDropTransfer : NSObject <NSCopying, NSSecureCoding> {
    SFAirDropAction * _cancelAction;
    NSArray * _completedURLs;
    NSString * _contentsDescription;
    NSString * _contentsTitle;
    NSURL * _customDestinationURL;
    NSError * _error;
    NSString * _identifier;
    SFAirDropTransferMetaData * _metaData;
    NSArray * _possibleActions;
    id  _progressToken;
    SFAirDropAction * _selectedAction;
    NSProgress * _transferProgress;
    unsigned long long  _transferState;
    unsigned long long  _userResponse;
}

@property (nonatomic, readwrite, retain) SFAirDropAction *cancelAction;
@property (nonatomic, readwrite, copy) NSArray *completedURLs;
@property (nonatomic, readwrite, copy) NSString *contentsDescription;
@property (nonatomic, readwrite, copy) NSString *contentsTitle;
@property (nonatomic, readwrite, copy) NSURL *customDestinationURL;
@property (nonatomic, readwrite, retain) NSError *error;
@property (nonatomic, readwrite, copy) NSString *identifier;
@property (nonatomic, readwrite, retain) SFAirDropTransferMetaData *metaData;
@property (nonatomic, readonly) BOOL needsAction;
@property (nonatomic, readwrite, retain) NSArray *possibleActions;
@property (nonatomic, readwrite, retain) id progressToken;
@property (nonatomic, readwrite, retain) SFAirDropAction *selectedAction;
@property (nonatomic, readwrite, retain) NSProgress *transferProgress;
@property (nonatomic, readwrite) unsigned long long transferState;
@property (nonatomic, readwrite) unsigned long long userResponse;

+ (BOOL)automaticallyNotifiesObserversOfTransferState;
+ (BOOL)automaticallyNotifiesObserversOfUserResponse;
+ (id)keyPathsForValuesAffectingNeedsAction;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cancelAction;
- (id)completedURLs;
- (id)contentsDescription;
- (id)contentsTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDestinationURL;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 initialInformation:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)metaData;
- (BOOL)needsAction;
- (id)possibleActions;
- (id)progressToken;
- (id)selectedAction;
- (void)setCancelAction:(id)arg1;
- (void)setCompletedURLs:(id)arg1;
- (void)setContentsDescription:(id)arg1;
- (void)setContentsTitle:(id)arg1;
- (void)setCustomDestinationURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetaData:(id)arg1;
- (void)setPossibleActions:(id)arg1;
- (void)setProgressToken:(id)arg1;
- (void)setSelectedAction:(id)arg1;
- (void)setTransferProgress:(id)arg1;
- (void)setTransferState:(unsigned long long)arg1;
- (void)setUpProgress;
- (void)setUpProgressToBroadcast:(BOOL)arg1;
- (void)setUserResponse:(unsigned long long)arg1;
- (id)transferProgress;
- (unsigned long long)transferState;
- (BOOL)updateUsingCoder:(id)arg1;
- (void)updateWithInformation:(id)arg1;
- (BOOL)updateWithTransfer:(id)arg1;
- (unsigned long long)userResponse;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface LOGMSGEVENTLogMsgEventTableBookingSession : PBCodable <NSCopying> {
    BOOL  _addedSpecialRequest;
    long long  _blurredBookingTimestamp;
    long long  _blurredReservationTimestamp;
    NSString * _bookTableAppId;
    NSString * _bookTableSessionId;
    double  _durationOfSessionInSeconds;
    int  _endState;
    int  _endView;
    NSMutableArray * _errorMessages;
    struct { 
        unsigned int blurredBookingTimestamp : 1; 
        unsigned int blurredReservationTimestamp : 1; 
        unsigned int durationOfSessionInSeconds : 1; 
        unsigned int muid : 1; 
        unsigned int endState : 1; 
        unsigned int endView : 1; 
        unsigned int tableSize : 1; 
        unsigned int addedSpecialRequest : 1; 
        unsigned int installCompleted : 1; 
        unsigned int installNeeded : 1; 
        unsigned int swipedAvailableTimes : 1; 
        unsigned int tappedDatePicker : 1; 
    }  _has;
    BOOL  _installCompleted;
    BOOL  _installNeeded;
    NSString * _installNeededTappedAppId;
    unsigned long long  _muid;
    BOOL  _swipedAvailableTimes;
    unsigned int  _tableSize;
    BOOL  _tappedDatePicker;
}

@property (nonatomic, readwrite) BOOL addedSpecialRequest;
@property (nonatomic, readwrite) long long blurredBookingTimestamp;
@property (nonatomic, readwrite) long long blurredReservationTimestamp;
@property (nonatomic, readwrite, retain) NSString *bookTableAppId;
@property (nonatomic, readwrite, retain) NSString *bookTableSessionId;
@property (nonatomic, readwrite) double durationOfSessionInSeconds;
@property (nonatomic, readwrite) int endState;
@property (nonatomic, readwrite) int endView;
@property (nonatomic, readwrite, retain) NSMutableArray *errorMessages;
@property (nonatomic, readwrite) BOOL hasAddedSpecialRequest;
@property (nonatomic, readwrite) BOOL hasBlurredBookingTimestamp;
@property (nonatomic, readwrite) BOOL hasBlurredReservationTimestamp;
@property (nonatomic, readonly) BOOL hasBookTableAppId;
@property (nonatomic, readonly) BOOL hasBookTableSessionId;
@property (nonatomic, readwrite) BOOL hasDurationOfSessionInSeconds;
@property (nonatomic, readwrite) BOOL hasEndState;
@property (nonatomic, readwrite) BOOL hasEndView;
@property (nonatomic, readwrite) BOOL hasInstallCompleted;
@property (nonatomic, readwrite) BOOL hasInstallNeeded;
@property (nonatomic, readonly) BOOL hasInstallNeededTappedAppId;
@property (nonatomic, readwrite) BOOL hasMuid;
@property (nonatomic, readwrite) BOOL hasSwipedAvailableTimes;
@property (nonatomic, readwrite) BOOL hasTableSize;
@property (nonatomic, readwrite) BOOL hasTappedDatePicker;
@property (nonatomic, readwrite) BOOL installCompleted;
@property (nonatomic, readwrite) BOOL installNeeded;
@property (nonatomic, readwrite, retain) NSString *installNeededTappedAppId;
@property (nonatomic, readwrite) unsigned long long muid;
@property (nonatomic, readwrite) BOOL swipedAvailableTimes;
@property (nonatomic, readwrite) unsigned int tableSize;
@property (nonatomic, readwrite) BOOL tappedDatePicker;

+ (Class)errorMessageType;

- (void).cxx_destruct;
- (int)StringAsEndState:(id)arg1;
- (int)StringAsEndView:(id)arg1;
- (void)addErrorMessage:(id)arg1;
- (BOOL)addedSpecialRequest;
- (long long)blurredBookingTimestamp;
- (long long)blurredReservationTimestamp;
- (id)bookTableAppId;
- (id)bookTableSessionId;
- (void)clearErrorMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationOfSessionInSeconds;
- (int)endState;
- (id)endStateAsString:(int)arg1;
- (int)endView;
- (id)endViewAsString:(int)arg1;
- (id)errorMessageAtIndex:(unsigned long long)arg1;
- (id)errorMessages;
- (unsigned long long)errorMessagesCount;
- (BOOL)hasAddedSpecialRequest;
- (BOOL)hasBlurredBookingTimestamp;
- (BOOL)hasBlurredReservationTimestamp;
- (BOOL)hasBookTableAppId;
- (BOOL)hasBookTableSessionId;
- (BOOL)hasDurationOfSessionInSeconds;
- (BOOL)hasEndState;
- (BOOL)hasEndView;
- (BOOL)hasInstallCompleted;
- (BOOL)hasInstallNeeded;
- (BOOL)hasInstallNeededTappedAppId;
- (BOOL)hasMuid;
- (BOOL)hasSwipedAvailableTimes;
- (BOOL)hasTableSize;
- (BOOL)hasTappedDatePicker;
- (unsigned long long)hash;
- (BOOL)installCompleted;
- (BOOL)installNeeded;
- (id)installNeededTappedAppId;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (BOOL)readFrom:(id)arg1;
- (void)setAddedSpecialRequest:(BOOL)arg1;
- (void)setBlurredBookingTimestamp:(long long)arg1;
- (void)setBlurredReservationTimestamp:(long long)arg1;
- (void)setBookTableAppId:(id)arg1;
- (void)setBookTableSessionId:(id)arg1;
- (void)setDurationOfSessionInSeconds:(double)arg1;
- (void)setEndState:(int)arg1;
- (void)setEndView:(int)arg1;
- (void)setErrorMessages:(id)arg1;
- (void)setHasAddedSpecialRequest:(BOOL)arg1;
- (void)setHasBlurredBookingTimestamp:(BOOL)arg1;
- (void)setHasBlurredReservationTimestamp:(BOOL)arg1;
- (void)setHasDurationOfSessionInSeconds:(BOOL)arg1;
- (void)setHasEndState:(BOOL)arg1;
- (void)setHasEndView:(BOOL)arg1;
- (void)setHasInstallCompleted:(BOOL)arg1;
- (void)setHasInstallNeeded:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasSwipedAvailableTimes:(BOOL)arg1;
- (void)setHasTableSize:(BOOL)arg1;
- (void)setHasTappedDatePicker:(BOOL)arg1;
- (void)setInstallCompleted:(BOOL)arg1;
- (void)setInstallNeeded:(BOOL)arg1;
- (void)setInstallNeededTappedAppId:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setSwipedAvailableTimes:(BOOL)arg1;
- (void)setTableSize:(unsigned int)arg1;
- (void)setTappedDatePicker:(BOOL)arg1;
- (BOOL)swipedAvailableTimes;
- (unsigned int)tableSize;
- (BOOL)tappedDatePicker;
- (void)writeTo:(id)arg1;

@end

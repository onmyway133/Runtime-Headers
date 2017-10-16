/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEODirectionsFeedbackLogMessage : PBCodable <NSCopying> {
    BOOL  _arrivedAtDestination;
    NSMutableArray * _directionsFeedbacks;
    double  _durationOfTrip;
    GEOLocation * _finalLocation;
    struct { 
        unsigned int navigationAudioFeedback : 1; 
        unsigned int durationOfTrip : 1; 
        unsigned int arrivedAtDestination : 1; 
    }  _has;
    struct GEONavigationAudioFeedback { 
        int _currentRouteTypeAtEndOfNav; 
        unsigned int _manuallyChangedRouteCount; 
        unsigned int _manuallyDisabledHFPCount; 
        unsigned int _manuallyEnabledHFPCount; 
        unsigned int _spokenPromptsCount; 
        BOOL _bTHFPAvailableAtEndOfNav; 
        BOOL _bTHFPRoutesAvailable; 
        BOOL _currentRouteHFPEnabledAtEndOfNav; 
        BOOL _everManuallyChangedRoute; 
        BOOL _everManuallyEnabledHFPRoute; 
        BOOL _everViewedAudioSheet; 
        BOOL _everViewedAudioSheetBTAny; 
        BOOL _everViewedAudioSheetBTHFP; 
        BOOL _pauseSpokenAudioEnabled; 
        BOOL _viewedAudioSheet; 
        BOOL _viewedAudioSheetBTAny; 
        BOOL _viewedAudioSheetBTHFP; 
        BOOL _wirelessRoutesAvailable; 
        struct { 
            unsigned int currentRouteTypeAtEndOfNav : 1; 
            unsigned int manuallyChangedRouteCount : 1; 
            unsigned int manuallyDisabledHFPCount : 1; 
            unsigned int manuallyEnabledHFPCount : 1; 
            unsigned int spokenPromptsCount : 1; 
            unsigned int bTHFPAvailableAtEndOfNav : 1; 
            unsigned int bTHFPRoutesAvailable : 1; 
            unsigned int currentRouteHFPEnabledAtEndOfNav : 1; 
            unsigned int everManuallyChangedRoute : 1; 
            unsigned int everManuallyEnabledHFPRoute : 1; 
            unsigned int everViewedAudioSheet : 1; 
            unsigned int everViewedAudioSheetBTAny : 1; 
            unsigned int everViewedAudioSheetBTHFP : 1; 
            unsigned int pauseSpokenAudioEnabled : 1; 
            unsigned int viewedAudioSheet : 1; 
            unsigned int viewedAudioSheetBTAny : 1; 
            unsigned int viewedAudioSheetBTHFP : 1; 
            unsigned int wirelessRoutesAvailable : 1; 
        } _has; 
    }  _navigationAudioFeedback;
}

@property (nonatomic, readwrite) BOOL arrivedAtDestination;
@property (nonatomic, readwrite, retain) NSMutableArray *directionsFeedbacks;
@property (nonatomic, readwrite) double durationOfTrip;
@property (nonatomic, readwrite, retain) GEOLocation *finalLocation;
@property (nonatomic, readwrite) BOOL hasArrivedAtDestination;
@property (nonatomic, readwrite) BOOL hasDurationOfTrip;
@property (nonatomic, readonly) BOOL hasFinalLocation;
@property (nonatomic, readwrite) BOOL hasNavigationAudioFeedback;
@property (nonatomic, readwrite) struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; } navigationAudioFeedback;

+ (Class)directionsFeedbackType;

- (void).cxx_destruct;
- (void)addDirectionsFeedback:(id)arg1;
- (BOOL)arrivedAtDestination;
- (void)clearDirectionsFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsFeedbackAtIndex:(unsigned long long)arg1;
- (id)directionsFeedbacks;
- (unsigned long long)directionsFeedbacksCount;
- (double)durationOfTrip;
- (id)finalLocation;
- (BOOL)hasArrivedAtDestination;
- (BOOL)hasDurationOfTrip;
- (BOOL)hasFinalLocation;
- (BOOL)hasNavigationAudioFeedback;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })navigationAudioFeedback;
- (BOOL)readFrom:(id)arg1;
- (void)setArrivedAtDestination:(BOOL)arg1;
- (void)setDirectionsFeedbacks:(id)arg1;
- (void)setDurationOfTrip:(double)arg1;
- (void)setFinalLocation:(id)arg1;
- (void)setHasArrivedAtDestination:(BOOL)arg1;
- (void)setHasDurationOfTrip:(BOOL)arg1;
- (void)setHasNavigationAudioFeedback:(BOOL)arg1;
- (void)setNavigationAudioFeedback:(struct GEONavigationAudioFeedback { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; struct { unsigned int x_19_1_1 : 1; unsigned int x_19_1_2 : 1; unsigned int x_19_1_3 : 1; unsigned int x_19_1_4 : 1; unsigned int x_19_1_5 : 1; unsigned int x_19_1_6 : 1; unsigned int x_19_1_7 : 1; unsigned int x_19_1_8 : 1; unsigned int x_19_1_9 : 1; unsigned int x_19_1_10 : 1; unsigned int x_19_1_11 : 1; unsigned int x_19_1_12 : 1; unsigned int x_19_1_13 : 1; unsigned int x_19_1_14 : 1; unsigned int x_19_1_15 : 1; unsigned int x_19_1_16 : 1; unsigned int x_19_1_17 : 1; unsigned int x_19_1_18 : 1; } x19; })arg1;
- (void)writeTo:(id)arg1;

@end

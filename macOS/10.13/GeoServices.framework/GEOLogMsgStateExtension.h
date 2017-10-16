/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgStateExtension : PBCodable <NSCopying> {
    struct { 
        unsigned int hasRideBookingAppEnabled : 1; 
        unsigned int hasRideBookingAppInstalled : 1; 
        unsigned int hasTableBookingAppEnabled : 1; 
        unsigned int hasTableBookingAppInstalled : 1; 
    }  _has;
    BOOL  _hasRideBookingAppEnabled;
    BOOL  _hasRideBookingAppInstalled;
    BOOL  _hasTableBookingAppEnabled;
    BOOL  _hasTableBookingAppInstalled;
}

@property (nonatomic, readwrite) BOOL hasHasRideBookingAppEnabled;
@property (nonatomic, readwrite) BOOL hasHasRideBookingAppInstalled;
@property (nonatomic, readwrite) BOOL hasHasTableBookingAppEnabled;
@property (nonatomic, readwrite) BOOL hasHasTableBookingAppInstalled;
@property (nonatomic, readwrite) BOOL hasRideBookingAppEnabled;
@property (nonatomic, readwrite) BOOL hasRideBookingAppInstalled;
@property (nonatomic, readwrite) BOOL hasTableBookingAppEnabled;
@property (nonatomic, readwrite) BOOL hasTableBookingAppInstalled;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHasRideBookingAppEnabled;
- (BOOL)hasHasRideBookingAppInstalled;
- (BOOL)hasHasTableBookingAppEnabled;
- (BOOL)hasHasTableBookingAppInstalled;
- (BOOL)hasRideBookingAppEnabled;
- (BOOL)hasRideBookingAppInstalled;
- (BOOL)hasTableBookingAppEnabled;
- (BOOL)hasTableBookingAppInstalled;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasHasRideBookingAppEnabled:(BOOL)arg1;
- (void)setHasHasRideBookingAppInstalled:(BOOL)arg1;
- (void)setHasHasTableBookingAppEnabled:(BOOL)arg1;
- (void)setHasHasTableBookingAppInstalled:(BOOL)arg1;
- (void)setHasRideBookingAppEnabled:(BOOL)arg1;
- (void)setHasRideBookingAppInstalled:(BOOL)arg1;
- (void)setHasTableBookingAppEnabled:(BOOL)arg1;
- (void)setHasTableBookingAppInstalled:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end

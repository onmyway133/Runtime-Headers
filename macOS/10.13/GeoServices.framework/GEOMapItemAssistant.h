/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapItemAssistant : GEOBaseMapItem {
    NSDictionary * _addressDictionary;
    GEOAddressObject * _addressObject;
    NSString * _attributionID;
    NSURL * _businessURL;
    GEOLocation * _location;
    unsigned long long  _muid;
    NSString * _name;
    float  _normalizedUserRatingScore;
    NSString * _phoneNumber;
    GEOPlace * _place;
    unsigned int  _sampleSizeForUserRatingScore;
}

- (void).cxx_destruct;
- (id)_businessURL;
- (BOOL)_hasMUID;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasUserRatingScore;
- (unsigned long long)_muid;
- (float)_normalizedUserRatingScore;
- (id)_place;
- (BOOL)_responseStatusIsIncomplete;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)addressDictionary;
- (id)addressObject;
- (struct { double x1; double x2; })coordinate;
- (id)description;
- (id)geoAddress;
- (id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
- (BOOL)isValid;
- (id)name;
- (id)weatherDisplayName;

@end

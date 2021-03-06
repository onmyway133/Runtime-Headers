/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKTransitDeparturesSectionController : MKTransitSectionController {
    BOOL  _departuresAreVehicleSpecific;
    NSString * _direction;
    BOOL  _needsFindDeparturesAreVehicleSpecific;
    BOOL  _needsFindRowForServiceGap;
    NSArray * _sequences;
    NSMapTable * _sequencesToInclude;
    NSDictionary * _serviceGapStrings;
}

@property (nonatomic, readonly) BOOL departuresAreVehicleSpecific;
@property (nonatomic, readonly) BOOL showOperatingHours;

- (void).cxx_destruct;
- (void)_buildRows;
- (id)_descriptionForDepartureDate:(id)arg1 canIncludeDate:(BOOL)arg2;
- (BOOL)_isDateLastDeparture:(id)arg1 withNextDepartureDate:(id)arg2 forSequence:(id)arg3;
- (id)_nextLastDepartureDateForSequence:(id)arg1 afterDate:(id)arg2;
- (id)_pagingFilter;
- (void)_serviceGapDate:(out id*)arg1 string:(out id*)arg2 forSequence:(id)arg3 withDepartureIndex:(unsigned long long)arg4;
- (void)_setNeedsBuildRows;
- (BOOL)departuresAreVehicleSpecific;
- (id)init;
- (id)initWithMapItem:(id)arg1 system:(id)arg2;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3;
- (id)sequenceForRow:(long long)arg1 outIsNewLine:(out BOOL*)arg2 outNextLineIsSame:(out BOOL*)arg3;
- (id)sequences;
- (id)serviceGapDescriptionForRow:(long long)arg1;
- (BOOL)showOperatingHours;

@end

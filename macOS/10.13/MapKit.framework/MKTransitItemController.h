/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKTransitItemController : NSObject {
    NSMapTable * _containers;
    NSMutableDictionary * _lineItemLookups;
    NSMutableDictionary * _mapItemLookups;
    NSDate * _referenceDate;
    NSTimer * _updateTimer;
}

@property (nonatomic, readonly) NSDate *referenceDate;

+ (id)sharedController;

- (void).cxx_destruct;
- (BOOL)_needsUpdateReferenceDate;
- (void)_scheduleReferenceDateUpdate;
- (void)_timerFired;
- (void)_updateReferenceDate;
- (void)addDynamicTransitUIContainer:(id)arg1;
- (id)referenceDate;
- (void)removeDynamicTransitUIContainer:(id)arg1;
- (BOOL)updateTransitLineItemIfNeeded:(id)arg1 completion:(id)arg2;
- (BOOL)updateTransitMapItemIfNeeded:(id)arg1 updateForIncidents:(BOOL)arg2 completion:(id)arg3;

@end

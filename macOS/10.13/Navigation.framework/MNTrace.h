/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNTrace : NSObject {
    NSArray * _annotatedUserBehavior;
    NSArray * _annotatedUserEnvironments;
    NSArray * _bookmarkImages;
    NSArray * _bookmarks;
    NSArray * _commuteDestinations;
    NSArray * _commuteDirectionsRequests;
    BOOL  _copyToCrashReporter;
    struct sqlite3 { } * _db;
    NSArray * _directions;
    NSData * _endWaypointData;
    NSArray * _etaUpdates;
    NSArray * _headingData;
    double  _initialCourse;
    BOOL  _isRouteGenius;
    BOOL  _isSimulation;
    NSArray * _locations;
    NSArray * _motionData;
    unsigned long long  _originalVersion;
    NSArray * _routeSelections;
    NSArray * _significantEvents;
    NSData * _startWaypointData;
    NSString * _tracePath;
    BOOL  _usesCLMapCorrection;
    NSArray * _vehicleHeadingData;
    NSArray * _vehicleSpeedData;
    unsigned long long  _version;
    NSObject<OS_dispatch_group> * _writeGroup;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readwrite, retain) NSArray *annotatedUserBehavior;
@property (nonatomic, readwrite, retain) NSArray *annotatedUserEnvironments;
@property (nonatomic, readwrite, retain) NSArray *bookmarkImages;
@property (nonatomic, readwrite, retain) NSArray *bookmarks;
@property (nonatomic, readwrite, retain) NSArray *commuteDestinations;
@property (nonatomic, readwrite, retain) NSArray *commuteDirectionsRequests;
@property (nonatomic, readwrite) BOOL copyToCrashReporter;
@property (nonatomic, readonly) struct sqlite3 { }*db;
@property (nonatomic, readwrite, retain) NSArray *directions;
@property (nonatomic, readwrite, retain) NSData *endWaypointData;
@property (nonatomic, readwrite, retain) NSArray *etaUpdates;
@property (nonatomic, readwrite, retain) NSArray *headingData;
@property (nonatomic, readwrite) double initialCourse;
@property (nonatomic, readwrite) BOOL isRouteGenius;
@property (nonatomic, readwrite) BOOL isSimulation;
@property (nonatomic, readwrite, retain) NSArray *locations;
@property (nonatomic, readwrite, retain) NSArray *motionData;
@property (nonatomic, readwrite) unsigned long long originalVersion;
@property (nonatomic, readwrite, retain) NSArray *routeSelections;
@property (nonatomic, readwrite, retain) NSArray *significantEvents;
@property (nonatomic, readwrite, retain) NSData *startWaypointData;
@property (nonatomic, readonly) NSString *tracePath;
@property (nonatomic, readwrite) BOOL usesCLMapCorrection;
@property (nonatomic, readwrite, retain) NSArray *vehicleHeadingData;
@property (nonatomic, readwrite, retain) NSArray *vehicleSpeedData;
@property (nonatomic, readwrite) unsigned long long version;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *writeGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *writeQueue;

- (void).cxx_destruct;
- (id)_handleOpenErrorWithPath:(id)arg1;
- (id)annotatedUserBehavior;
- (id)annotatedUserEnvironments;
- (id)bookmarkImages;
- (id)bookmarks;
- (BOOL)closeTrace;
- (id)commuteDestinations;
- (id)commuteDirectionsRequests;
- (BOOL)copyToCrashReporter;
- (void)copyTraceToCrashReporter;
- (BOOL)createTempTraceForRecording;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (id)directions;
- (id)endWaypointData;
- (id)etaUpdates;
- (id)headingData;
- (id)init;
- (double)initialCourse;
- (BOOL)isRouteGenius;
- (BOOL)isSimulation;
- (id)locations;
- (id)motionData;
- (BOOL)openTrace:(id)arg1 outError:(id*)arg2;
- (unsigned long long)originalVersion;
- (id)routeSelections;
- (void)setAnnotatedUserBehavior:(id)arg1;
- (void)setAnnotatedUserEnvironments:(id)arg1;
- (void)setBookmarkImages:(id)arg1;
- (void)setBookmarks:(id)arg1;
- (void)setCommuteDestinations:(id)arg1;
- (void)setCommuteDirectionsRequests:(id)arg1;
- (void)setCopyToCrashReporter:(BOOL)arg1;
- (void)setDirections:(id)arg1;
- (void)setEndWaypointData:(id)arg1;
- (void)setEtaUpdates:(id)arg1;
- (void)setHeadingData:(id)arg1;
- (void)setInitialCourse:(double)arg1;
- (void)setIsRouteGenius:(BOOL)arg1;
- (void)setIsSimulation:(BOOL)arg1;
- (void)setLocations:(id)arg1;
- (void)setMotionData:(id)arg1;
- (void)setOriginalVersion:(unsigned long long)arg1;
- (void)setRouteSelections:(id)arg1;
- (void)setSignificantEvents:(id)arg1;
- (void)setStartWaypointData:(id)arg1;
- (void)setUsesCLMapCorrection:(BOOL)arg1;
- (void)setVehicleHeadingData:(id)arg1;
- (void)setVehicleSpeedData:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)significantEvents;
- (id)startWaypointData;
- (BOOL)startWritingTraceToFile:(id)arg1;
- (id)tracePath;
- (BOOL)usesCLMapCorrection;
- (id)vehicleHeadingData;
- (id)vehicleSpeedData;
- (unsigned long long)version;
- (id)writeGroup;
- (id)writeQueue;

// MNTrace (MNTraceBookmarkExtras)

- (id)serializableBookmarks;

// MNTrace (Testing)

+ (id)routeSetsFromTraceAtPath:(id)arg1;

- (id)_routeSetFromDirectionsRow:(id)arg1;
- (id)routeSetsFromResponse;

@end

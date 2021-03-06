/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNAnnouncementConflict : NSObject {
    BOOL  _announcementsAreSimilar;
    double  _desiredTimeGap;
    MNAnnouncementPlanEvent * _firstEvent;
    MNAnnouncementPlanEvent * _secondEvent;
    double  _timeGap;
}

@property (nonatomic, readwrite) BOOL announcementsAreSimilar;
@property (nonatomic, readwrite) double desiredTimeGap;
@property (nonatomic, readwrite, retain) MNAnnouncementPlanEvent *firstEvent;
@property (nonatomic, readwrite, retain) MNAnnouncementPlanEvent *secondEvent;
@property (nonatomic, readwrite) double timeGap;

- (void).cxx_destruct;
- (BOOL)announcementsAreSimilar;
- (id)description;
- (double)desiredTimeGap;
- (id)firstEvent;
- (id)secondEvent;
- (void)setAnnouncementsAreSimilar:(BOOL)arg1;
- (void)setDesiredTimeGap:(double)arg1;
- (void)setFirstEvent:(id)arg1;
- (void)setSecondEvent:(id)arg1;
- (void)setTimeGap:(double)arg1;
- (double)timeGap;

@end

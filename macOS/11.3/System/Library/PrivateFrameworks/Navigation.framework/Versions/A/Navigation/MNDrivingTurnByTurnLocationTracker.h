/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTurnByTurnLocationTracker.h>
#import <libobjc.A.dylib/MNTrafficIncidentAlertUpdaterDelegate.h>
#import <libobjc.A.dylib/MNTunnelLocationProjectorDelegate.h>

@class MNTunnelLocationProjector, MNAlternateRoutesUpdater, MNTrafficIncidentAlertUpdater, NSMutableArray, NSString;

@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate> {

	MNTunnelLocationProjector* _tunnelLocationProjector;
	MNAlternateRoutesUpdater* _alternateRoutesUpdater;
	MNTrafficIncidentAlertUpdater* _trafficIncidentAlertUpdater;
	int _detectedTransportType;
	char _exitedVehicle;
	unsigned long long _vehicleExitConfidence;
	SCD_Struct_MN6 _vehicleExitCoordinate;
	NSMutableArray* _etauPositions;
	double _lastKnownCourse;
	double _consecutiveValidCourseCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)transportType;
-(void)startTracking;
-(void)stopTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(void)updateManager:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3 ;
-(char)wantsETAUpdates;
-(id)userLocationForUpdateManager:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(char)shouldProjectAlongRoute;
-(void)tracePaused;
-(void)_updateForArrivalAtLegIndex:(unsigned long long)arg1 ;
-(void)_updateForAlternateRoutes:(id)arg1 ;
-(void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(id)_overrideLocationForLocation:(id)arg1 ;
-(void)_updateForLocation:(id)arg1 ;
-(void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(char)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
-(id)_alternateRouteForOffRouteLocation:(id)arg1 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(char)arg3 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2 ;
-(void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 forAlert:(id)arg3 ;
-(double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1 ;
-(double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1 ;
-(double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1 ;
-(char)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1 ;
@end


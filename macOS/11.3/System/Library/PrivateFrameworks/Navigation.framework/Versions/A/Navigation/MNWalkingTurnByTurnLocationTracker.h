/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTurnByTurnLocationTracker.h>

@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {

	int _detectedTransportType;
	SCD_Struct_MN6 _detectedTransportTypeOrigin;

}
-(int)transportType;
-(id)initWithNavigationSession:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg1 ;
-(int)_detectedMotionForLocation:(id)arg1 ;
-(char)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2 ;
@end


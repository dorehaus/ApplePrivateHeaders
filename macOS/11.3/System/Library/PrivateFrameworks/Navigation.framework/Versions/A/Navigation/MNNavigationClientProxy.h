/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOApplicationAuditToken, MNDirectionsRequestManager;

@interface MNNavigationClientProxy : NSObject {

	GEOApplicationAuditToken* _auditToken;
	MNDirectionsRequestManager* _directionsRequestManager;

}
-(id)init;
-(void)requestDirections:(id)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)cancelDirectionsRequestWithIdentifier:(id)arg1 ;
-(id)_directionsRequestManager;
@end


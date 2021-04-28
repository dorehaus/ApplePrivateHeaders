/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitVehicleUpdaterDelegate;
@class NSSet;

@interface GEOTransitVehicleUpdater : NSObject {

	id<GEOTransitVehicleUpdaterDelegate> _delegate;
	char _active;
	NSSet* _tripIDs;

}

@property (assign,nonatomic,__weak) id<GEOTransitVehicleUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * tripIDs;                                                     //@synthesize tripIDs=_tripIDs - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                       //@synthesize active=_active - In the implementation block
-(void)dealloc;
-(id<GEOTransitVehicleUpdaterDelegate>)delegate;
-(void)setDelegate:(id<GEOTransitVehicleUpdaterDelegate>)arg1 ;
-(char)isActive;
-(void)setActive:(char)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSSet *)tripIDs;
-(void)setTripIDs:(NSSet *)arg1 ;
@end

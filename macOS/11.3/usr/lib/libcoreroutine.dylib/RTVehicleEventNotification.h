/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTVehicleEventNotification : RTNotification {

	NSArray* _vehicleEvents;

}

@property (nonatomic,readonly) NSArray * vehicleEvents;              //@synthesize vehicleEvents=_vehicleEvents - In the implementation block
-(NSArray *)vehicleEvents;
-(id)initWithVehicleEvents:(id)arg1 ;
@end

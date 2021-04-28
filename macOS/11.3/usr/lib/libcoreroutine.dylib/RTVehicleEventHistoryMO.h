/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber;

@interface RTVehicleEventHistoryMO : NSManagedObject

@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSDate * locDate; 
@property (nonatomic,retain) NSNumber * locLatitude; 
@property (nonatomic,retain) NSNumber * locLongitude; 
@property (nonatomic,retain) NSNumber * locUncertainty; 
+(id)managedObjectWithVehicleEvent:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end


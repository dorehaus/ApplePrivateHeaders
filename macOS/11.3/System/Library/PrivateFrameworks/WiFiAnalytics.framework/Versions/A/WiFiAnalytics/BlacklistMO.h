/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet;

@interface BlacklistMO : NSManagedObject

@property (assign,nonatomic) short reason; 
@property (assign,nonatomic) short subReason; 
@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,retain) NSSet * bss; 
@property (nonatomic,retain) NSSet * network; 
+(id)entityName;
+(id)fetchRequest;
@end


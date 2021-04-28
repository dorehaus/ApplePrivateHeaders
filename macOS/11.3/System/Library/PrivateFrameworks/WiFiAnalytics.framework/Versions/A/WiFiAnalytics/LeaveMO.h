/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSObject, BSSMO;

@interface LeaveMO : NSManagedObject

@property (assign,nonatomic) double assocDuration; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,retain) NSObject * histBcnPer; 
@property (nonatomic,retain) NSObject * histBcnSched; 
@property (nonatomic,retain) NSObject * histCca; 
@property (nonatomic,retain) NSObject * histFwTxFrames; 
@property (nonatomic,retain) NSObject * histFwTxPer; 
@property (nonatomic,retain) NSObject * histFwTxRetrans; 
@property (nonatomic,retain) NSObject * histRssi; 
@property (nonatomic,retain) NSObject * histRxFrames; 
@property (nonatomic,retain) NSObject * histSnr; 
@property (nonatomic,retain) NSObject * histTxFrames; 
@property (nonatomic,retain) NSObject * histTxPer; 
@property (nonatomic,retain) NSObject * histTxRetrans; 
@property (assign,nonatomic) char isInVoluntary; 
@property (assign,nonatomic) short motionState; 
@property (assign,nonatomic) int reason; 
@property (assign,nonatomic) int subReason; 
@property (nonatomic,retain) BSSMO * bss; 
+(id)entityName;
+(id)fetchRequest;
@end


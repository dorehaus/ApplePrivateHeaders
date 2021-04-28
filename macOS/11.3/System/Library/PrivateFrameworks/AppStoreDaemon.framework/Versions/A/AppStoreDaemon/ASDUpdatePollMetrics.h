/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSArray;

@interface ASDUpdatePollMetrics : NSObject {

	NSDate* _pollTime;
	NSString* _reason;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSDate * pollTime;                //@synthesize pollTime=_pollTime - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
-(id)init;
-(NSString *)reason;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(NSArray *)bundleIDs;
-(NSDate *)pollTime;
-(void)setPollTime:(NSDate *)arg1 ;
@end

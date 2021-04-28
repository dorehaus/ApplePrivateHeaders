/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CalendarStore.framework/Versions/A/CalendarStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarStore/CalendarStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate;

@interface CalAlarm : NSObject <NSCopying> {

	id _objectID;
	void* _reserved;
	NSString* _action;
	NSString* _sound;
	NSString* _emailAddress;
	NSURL* _url;
	double _relativeTrigger;
	NSDate* _absoluteTrigger;

}

@property (nonatomic,copy) NSString * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * sound;                      //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;               //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) double relativeTrigger;              //@synthesize relativeTrigger=_relativeTrigger - In the implementation block
@property (nonatomic,copy) NSDate * absoluteTrigger;              //@synthesize absoluteTrigger=_absoluteTrigger - In the implementation block
+(id)alarm;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)action;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)sound;
-(void)setSound:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)_createReservedDictionaryIfNeeded;
-(void)setAbsoluteTrigger:(NSDate *)arg1 ;
-(void)setRelativeTrigger:(double)arg1 ;
-(double)relativeTrigger;
-(NSDate *)absoluteTrigger;
-(id)acknowledged;
-(void)setAcknowledged:(id)arg1 ;
-(void)setRelatedTo:(id)arg1 ;
-(id)relatedTo;
-(id)triggerDateRelativeTo:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClockItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSUUID, NSURL, NSDate, NSString;

@interface AFClockTimer : NSObject <AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	char _isFiring;
	NSUUID* _timerID;
	NSURL* _timerURL;
	NSString* _title;
	long long _state;
	double _duration;
	long long _type;
	double _fireTimeInterval;
	NSDate* _fireDate;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,readonly) NSUUID * itemID; 
@property (nonatomic,readonly) NSURL * itemURL; 
@property (nonatomic,readonly) char isFiring; 
@property (nonatomic,copy,readonly) NSDate * firedDate; 
@property (nonatomic,copy,readonly) NSDate * dismissedDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * timerID;                       //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * timerURL;                       //@synthesize timerURL=_timerURL - In the implementation block
@property (nonatomic,readonly) char isFiring;                               //@synthesize isFiring=_isFiring - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double fireTimeInterval;                     //@synthesize fireTimeInterval=_fireTimeInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fireDate;                      //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * firedDate;                     //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dismissedDate;                 //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSDate *)fireDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(long long)type;
-(NSUUID *)itemID;
-(double)duration;
-(NSString *)title;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSUUID *)timerID;
-(NSDate *)lastModifiedDate;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(char)isFiring;
-(NSURL *)itemURL;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(double)fireTimeInterval;
-(NSURL *)timerURL;
-(NSDate *)firedDate;
-(NSDate *)dismissedDate;
-(id)initWithTimerID:(id)arg1 timerURL:(id)arg2 isFiring:(char)arg3 title:(id)arg4 state:(long long)arg5 duration:(double)arg6 type:(long long)arg7 fireTimeInterval:(double)arg8 fireDate:(id)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12 ;
@end


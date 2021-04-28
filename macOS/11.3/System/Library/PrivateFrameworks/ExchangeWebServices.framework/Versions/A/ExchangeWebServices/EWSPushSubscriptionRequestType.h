/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseSubscriptionRequestType.h>

@class NSString;

@interface EWSPushSubscriptionRequestType : EWSBaseSubscriptionRequestType {

	char _StatusFrequencyIsSpecified;
	long long _StatusFrequency;
	NSString* _URL;

}

@property (assign,setter=tatusFrequency,nonatomic) long long StatusFrequency;                               //@synthesize StatusFrequency=_StatusFrequency - In the implementation block
@property (assign,setter=tatusFrequencyIsSpecified,nonatomic) char StatusFrequencyIsSpecified;              //@synthesize StatusFrequencyIsSpecified=_StatusFrequencyIsSpecified - In the implementation block
@property (nonatomic,copy) NSString * URL;                                                                  //@synthesize URL=_URL - In the implementation block
+(id)definition;
-(NSString *)URL;
-(void)setURL:(NSString *)arg1 ;
-(long long)StatusFrequency;
-(void)setStatusFrequency:(long long)arg1 ;
-(char)StatusFrequencyIsSpecified;
-(void)setStatusFrequencyIsSpecified:(char)arg1 ;
@end


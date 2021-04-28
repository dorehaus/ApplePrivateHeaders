/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSString;

@interface EWSSubscribeResponseMessageType : EWSResponseMessageType {

	NSString* _SubscriptionId;
	NSString* _Watermark;

}

@property (setter=ubscriptionId,nonatomic,copy) NSString * SubscriptionId;              //@synthesize SubscriptionId=_SubscriptionId - In the implementation block
@property (nonatomic,copy) NSString * Watermark;                                        //@synthesize Watermark=_Watermark - In the implementation block
+(id)definition;
-(NSString *)Watermark;
-(void)setWatermark:(NSString *)arg1 ;
-(NSString *)SubscriptionId;
-(void)setSubscriptionId:(NSString *)arg1 ;
@end


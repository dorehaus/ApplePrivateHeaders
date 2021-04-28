/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteItemType : EWSBaseRequestType {

	NSArray* _ItemIds;
	long long _DeleteType;
	long long _SendMeetingCancellations;
	long long _AffectedTaskOccurrences;

}

@property (nonatomic,copy) NSArray * ItemIds;                                                                //@synthesize ItemIds=_ItemIds - In the implementation block
@property (assign,nonatomic) long long DeleteType;                                                           //@synthesize DeleteType=_DeleteType - In the implementation block
@property (assign,setter=endMeetingCancellations,nonatomic) long long SendMeetingCancellations;              //@synthesize SendMeetingCancellations=_SendMeetingCancellations - In the implementation block
@property (assign,nonatomic) long long AffectedTaskOccurrences;                                              //@synthesize AffectedTaskOccurrences=_AffectedTaskOccurrences - In the implementation block
+(id)definition;
-(void)setItemIds:(NSArray *)arg1 ;
-(void)setDeleteType:(long long)arg1 ;
-(void)setSendMeetingCancellations:(long long)arg1 ;
-(void)setAffectedTaskOccurrences:(long long)arg1 ;
-(NSArray *)ItemIds;
-(long long)DeleteType;
-(long long)SendMeetingCancellations;
-(long long)AffectedTaskOccurrences;
@end


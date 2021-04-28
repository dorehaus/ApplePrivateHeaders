/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSDateInterval, NSNumber;


@protocol SPConnectionMaterial <NSObject>
@property (nonatomic,copy,readonly) NSData * address; 
@property (nonatomic,copy,readonly) NSData * connectionToken; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSNumber * primaryIndex; 
@property (nonatomic,copy,readonly) NSNumber * secondaryIndex; 
@required
-(long long)type;
-(NSData *)address;
-(NSDateInterval *)dateInterval;
-(NSData *)connectionToken;
-(NSNumber *)primaryIndex;
-(NSNumber *)secondaryIndex;

@end


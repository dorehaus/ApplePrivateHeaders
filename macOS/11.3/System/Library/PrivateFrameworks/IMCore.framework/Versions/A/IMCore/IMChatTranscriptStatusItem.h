/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol IMChatTranscriptStatusItem <IMChatTranscriptItem>
@property (nonatomic,readonly) long long statusType; 
@property (nonatomic,readonly) long long expireStatusType; 
@property (nonatomic,readonly) NSDate * dateOfStatus; 
@required
-(long long)statusType;
-(long long)expireStatusType;
-(NSDate *)dateOfStatus;

@end


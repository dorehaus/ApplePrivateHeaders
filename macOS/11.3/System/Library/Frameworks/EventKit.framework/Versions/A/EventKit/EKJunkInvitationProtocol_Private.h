/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, EKEventStore;


@protocol EKJunkInvitationProtocol_Private <NSObject>
@property (nonatomic,readonly) NSString * sendersEmail; 
@property (nonatomic,readonly) NSString * sendersPhoneNumber; 
@property (nonatomic,readonly) char supportsJunkReporting; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@required
-(EKEventStore *)eventStore;
-(char)couldBeJunk;
-(NSString *)sendersEmail;
-(NSString *)sendersPhoneNumber;
-(char)supportsJunkReporting;

@end


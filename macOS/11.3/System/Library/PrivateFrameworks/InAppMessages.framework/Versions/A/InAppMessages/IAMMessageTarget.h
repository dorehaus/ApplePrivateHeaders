/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/Versions/A/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IAMMessageTarget <NSObject>
@property (nonatomic,readonly) NSString * targetIdentifier; 
@property (nonatomic,readonly) char shouldBeNotifiedOfNilPriorityMessageAfterRegistration; 
@optional
-(char)shouldBeNotifiedOfNilPriorityMessageAfterRegistration;

@required
-(NSString *)targetIdentifier;
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;

@end


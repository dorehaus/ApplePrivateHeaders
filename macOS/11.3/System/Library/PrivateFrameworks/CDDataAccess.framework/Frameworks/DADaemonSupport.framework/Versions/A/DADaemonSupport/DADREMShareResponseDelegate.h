/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/Versions/A/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DADREMXPCPerformerDelegate.h>
#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer.h>

@class NSString;

@interface DADREMShareResponseDelegate : DADREMXPCPerformerDelegate <DAEventsCalendarSharingResponseConsumer> {

	NSString* _calendarID;
	NSString* _shareID;

}

@property (nonatomic,retain) NSString * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,retain) NSString * shareID;                    //@synthesize shareID=_shareID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(NSString *)shareID;
-(void)setShareID:(NSString *)arg1 ;
-(NSString *)calendarID;
-(void)shareResponseFinishedWithError:(id)arg1 ;
-(void)setCalendarID:(NSString *)arg1 ;
-(void)_doResponseWithBlock:(/*^block*/id)arg1 ;
-(id)initWithAccountID:(id)arg1 calendarID:(id)arg2 ;
-(void)respondToShareRequestWithResponse:(long long)arg1 ;
-(void)reportAsJunk;
@end


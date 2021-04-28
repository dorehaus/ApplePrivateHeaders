/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSArray;

@interface CalAgentLinkLaunchExternalSyncOperation : CalAgentLinkOneWayOperation {

	NSArray* _launchArguments;
	char _delay;

}

@property (nonatomic,retain) NSArray * launchArguments;              //@synthesize launchArguments=_launchArguments - In the implementation block
@property (assign) char delay;                                       //@synthesize delay=_delay - In the implementation block
-(id)description;
-(id)init;
-(char)delay;
-(void)setDelay:(char)arg1 ;
-(id)initWithLaunchArguments:(id)arg1 shouldDelay:(char)arg2 ;
-(NSArray *)launchArguments;
-(id)inputPayload;
-(void)setLaunchArguments:(NSArray *)arg1 ;
@end


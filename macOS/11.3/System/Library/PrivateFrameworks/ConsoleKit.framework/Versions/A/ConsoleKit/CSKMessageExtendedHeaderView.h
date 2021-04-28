/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConsoleKit/CSKMessageHeaderView.h>

@class NSTextField;

@interface CSKMessageExtendedHeaderView : CSKMessageHeaderView {

	NSTextField* _activityIDTextField;
	NSTextField* _threadIDTextField;
	NSTextField* _PIDTextField;

}

@property (assign,nonatomic,__weak) NSTextField * activityIDTextField;              //@synthesize activityIDTextField=_activityIDTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * threadIDTextField;                //@synthesize threadIDTextField=_threadIDTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * PIDTextField;                     //@synthesize PIDTextField=_PIDTextField - In the implementation block
-(void)updateViewWithMessage:(id)arg1 ;
-(NSTextField *)threadIDTextField;
-(NSTextField *)PIDTextField;
-(void)setThreadIDTextField:(NSTextField *)arg1 ;
-(void)setPIDTextField:(NSTextField *)arg1 ;
-(NSTextField *)activityIDTextField;
-(void)setActivityIDTextField:(NSTextField *)arg1 ;
@end


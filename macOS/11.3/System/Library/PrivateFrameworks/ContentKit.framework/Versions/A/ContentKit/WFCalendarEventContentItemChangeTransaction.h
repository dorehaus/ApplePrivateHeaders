/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItemChangeTransaction.h>

@class EKEvent;

@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction {

	EKEvent* _mutableEvent;

}

@property (nonatomic,readonly) EKEvent * mutableEvent;              //@synthesize mutableEvent=_mutableEvent - In the implementation block
-(id)initWithContentItem:(id)arg1 ;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 isNew:(char)arg2 ;
-(EKEvent *)mutableEvent;
@end


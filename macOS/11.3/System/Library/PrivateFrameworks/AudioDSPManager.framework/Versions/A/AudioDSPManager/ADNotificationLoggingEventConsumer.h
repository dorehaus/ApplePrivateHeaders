/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADNotificationHandler.h>

@class NSString;

@interface ADNotificationLoggingEventConsumer : NSObject <ADNotificationHandler> {

	NSString* _topic;

}

@property (nonatomic,retain) NSString * topic;                      //@synthesize topic=_topic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleEvent:(id)arg1 ;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
@end


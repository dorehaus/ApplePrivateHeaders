/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, DDMBook;

@interface DDMTopicPreloadOperation : NSOperation {

	NSString* _topicID;
	DDMBook* _book;
	char _executing;
	char _finished;

}

@property (getter=isExecuting,readonly) char executing; 
@property (getter=isFinished,readonly) char finished; 
+(id)operationWithTopicID:(id)arg1 book:(id)arg2 ;
-(void)start;
-(void)main;
-(void)setFinished:(char)arg1 ;
-(char)isFinished;
-(char)isExecuting;
-(void)setExecuting:(char)arg1 ;
-(id)initWithTopicID:(id)arg1 book:(id)arg2 ;
@end


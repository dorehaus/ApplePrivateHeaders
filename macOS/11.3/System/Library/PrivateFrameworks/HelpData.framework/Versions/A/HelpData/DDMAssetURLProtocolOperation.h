/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface DDMAssetURLProtocolOperation : NSOperation {

	char _executing;
	char _finished;
	/*^block*/id _resumeBlock;

}

@property (assign,nonatomic) char executing;              //@synthesize executing=_executing - In the implementation block
@property (assign,nonatomic) char finished;               //@synthesize finished=_finished - In the implementation block
@property (copy) id resumeBlock;                          //@synthesize resumeBlock=_resumeBlock - In the implementation block
-(void)start;
-(void)main;
-(void)setFinished:(char)arg1 ;
-(char)finished;
-(char)isFinished;
-(char)isExecuting;
-(char)isAsynchronous;
-(char)executing;
-(void)setExecuting:(char)arg1 ;
-(void)finishOperation;
-(id)initWithProtocolResumeBlock:(/*^block*/id)arg1 ;
-(id)resumeBlock;
-(void)setResumeBlock:(id)arg1 ;
@end


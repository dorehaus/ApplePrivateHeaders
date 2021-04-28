/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCActivityDelegate;
@class NSProgress;

@interface MCActivity : NSObject {

	char _isFinished;
	id<MCActivityDelegate> _delegate;
	NSProgress* _progress;
	long long _qualityOfService;

}

@property (nonatomic,retain) NSProgress * progress;                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) char isFinished;                                     //@synthesize isFinished=_isFinished - In the implementation block
@property (assign,nonatomic,__weak) id<MCActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                          //@synthesize qualityOfService=_qualityOfService - In the implementation block
-(void)dealloc;
-(id)init;
-(id<MCActivityDelegate>)delegate;
-(void)setDelegate:(id<MCActivityDelegate>)arg1 ;
-(void)resume;
-(void)setQualityOfService:(long long)arg1 ;
-(void)cancel;
-(void)suspend;
-(char)isFinished;
-(long long)qualityOfService;
-(NSProgress *)progress;
-(void)end;
-(void)begin;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setIsFinished:(char)arg1 ;
@end


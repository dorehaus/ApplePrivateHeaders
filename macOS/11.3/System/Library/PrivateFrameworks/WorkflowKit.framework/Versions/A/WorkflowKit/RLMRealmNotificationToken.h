/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

@interface RLMRealmNotificationToken : RLMNotificationToken {

	RLMRealm* _realm;
	/*^block*/id _block;

}

@property (nonatomic,retain) RLMRealm * realm;              //@synthesize realm=_realm - In the implementation block
@property (nonatomic,copy) id block;                        //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(RLMRealm *)realm;
-(void)setRealm:(RLMRealm *)arg1 ;
-(void)suppressNextNotification;
@end

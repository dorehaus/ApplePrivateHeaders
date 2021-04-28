/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFLoggable.h>

@protocol ECLocalActionReplayerDelegate;
@class ECLocalMessageAction, NSError, NSString;

@interface ECLocalActionReplayer : NSObject <EFLoggable> {

	id<ECLocalActionReplayerDelegate> _delegate;
	ECLocalMessageAction* _action;
	NSError* _error;

}

@property (assign,nonatomic,__weak) id<ECLocalActionReplayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ECLocalMessageAction * action;                                  //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)init;
-(id<ECLocalActionReplayerDelegate>)delegate;
-(void)setDelegate:(id<ECLocalActionReplayerDelegate>)arg1 ;
-(NSError *)error;
-(ECLocalMessageAction *)action;
-(void)setError:(NSError *)arg1 ;
-(void)setAction:(ECLocalMessageAction *)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)replayAction;
-(id)failActionWithError:(id)arg1 ;
@end

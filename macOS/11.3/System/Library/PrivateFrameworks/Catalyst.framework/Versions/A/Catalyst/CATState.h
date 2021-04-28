/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface CATState : NSObject {

	NSMutableDictionary* mTransitionByTriggeringEvent;
	NSString* _name;
	SEL _enterAction;
	SEL _exitAction;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SEL enterAction;                     //@synthesize enterAction=_enterAction - In the implementation block
@property (assign,nonatomic) SEL exitAction;                      //@synthesize exitAction=_exitAction - In the implementation block
+(id)new;
-(id)description;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 action:(SEL)arg3 ;
-(void)addTransitionToState:(id)arg1 triggeringEvent:(id)arg2 ;
-(id)transitionWithTriggeringEvent:(id)arg1 ;
-(SEL)enterAction;
-(void)setEnterAction:(SEL)arg1 ;
-(SEL)exitAction;
-(void)setExitAction:(SEL)arg1 ;
@end


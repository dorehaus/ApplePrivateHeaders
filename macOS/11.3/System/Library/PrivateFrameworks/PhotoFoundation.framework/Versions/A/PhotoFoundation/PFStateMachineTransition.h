/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PFStateMachineTransition : NSObject {

	NSString* _eventName;
	NSString* _destinationName;
	/*^block*/id _action;

}

@property (readonly) NSString * eventName;                    //@synthesize eventName=_eventName - In the implementation block
@property (readonly) NSString * destinationName;              //@synthesize destinationName=_destinationName - In the implementation block
+(id)transitionOn:(id)arg1 to:(id)arg2 ;
+(id)transitionOn:(id)arg1 to:(id)arg2 action:(/*^block*/id)arg3 ;
+(id)returnTransitionOn:(id)arg1 ;
+(id)transitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3 ;
-(id)description;
-(void)setAction:(/*^block*/id)arg1 ;
-(void)performAction:(id)arg1 ;
-(NSString *)eventName;
-(NSString *)destinationName;
-(id)destination:(id)arg1 ;
-(id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3 ;
-(id)initWithEventName:(id)arg1 to:(id)arg2 action:(/*^block*/id)arg3 ;
-(id)_dotReachableNodes:(id)arg1 ;
@end

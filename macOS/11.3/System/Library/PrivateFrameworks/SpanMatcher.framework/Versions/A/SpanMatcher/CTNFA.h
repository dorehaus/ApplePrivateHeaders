/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpanMatcher.framework/Versions/A/SpanMatcher
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CTNFAState;

@interface CTNFA : NSObject {

	NSMutableDictionary* _CTstates;
	CTNFAState* _CTstart;

}

@property (nonatomic,retain) id startState; 
-(id)description;
-(id)init;
-(id)startState;
-(void)setStartState:(id)arg1 ;
-(id)_CTaddState:(id)arg1 ;
-(id)edgesFromState:(id)arg1 ;
-(id)followingStatesFrom:(id)arg1 withSymbol:(id)arg2 ;
-(void)addFinalState:(id)arg1 ;
-(char)isFinalState:(id)arg1 ;
-(void)addEdge:(id)arg1 fromState:(id)arg2 toState:(id)arg3 ;
-(id)epsilonStates:(id)arg1 ;
@end


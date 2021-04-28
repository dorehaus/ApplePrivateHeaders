/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CXTransactionGroup : NSObject {

	NSMutableDictionary* _callSourceIdentifierToTransaction;
	NSMutableArray* _mutableCallSources;

}

@property (nonatomic,readonly) NSMutableDictionary * callSourceIdentifierToTransaction;              //@synthesize callSourceIdentifierToTransaction=_callSourceIdentifierToTransaction - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableCallSources;                                  //@synthesize mutableCallSources=_mutableCallSources - In the implementation block
@property (getter=isComplete,nonatomic,readonly) char complete; 
@property (nonatomic,copy,readonly) NSArray * callSources; 
@property (nonatomic,copy,readonly) NSArray * transactions; 
@property (nonatomic,copy,readonly) NSArray * allActions; 
-(id)description;
-(id)init;
-(char)isComplete;
-(NSArray *)transactions;
-(NSArray *)allActions;
-(NSMutableArray *)mutableCallSources;
-(NSArray *)callSources;
-(void)addAction:(id)arg1 forCallSource:(id)arg2 ;
-(id)transactionForCallSource:(id)arg1 ;
-(NSMutableDictionary *)callSourceIdentifierToTransaction;
@end


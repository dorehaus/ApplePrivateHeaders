/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTMatchingElementIterator.h>

@protocol XCTElementSetTransformer;
@class XCElementSnapshot, XCTElementIndexingTransformer, NSMutableSet, NSSet, NSString;

@interface XCTIndexingTransformerIterator : NSObject <XCTMatchingElementIterator> {

	char _hasMatched;
	XCElementSnapshot* _input;
	id<XCTElementSetTransformer> _transformer;
	XCElementSnapshot* _currentMatch;
	XCTElementIndexingTransformer* _indexingTransformer;
	unsigned long long _count;
	NSMutableSet* _mutableRelatedElements;

}

@property (readonly) XCTElementIndexingTransformer * indexingTransformer;              //@synthesize indexingTransformer=_indexingTransformer - In the implementation block
@property (retain) XCElementSnapshot * input;                                          //@synthesize input=_input - In the implementation block
@property (assign) unsigned long long count;                                           //@synthesize count=_count - In the implementation block
@property (readonly) char hasMatched;                                                  //@synthesize hasMatched=_hasMatched - In the implementation block
@property (retain) XCElementSnapshot * currentMatch;                                   //@synthesize currentMatch=_currentMatch - In the implementation block
@property (readonly) NSMutableSet * mutableRelatedElements;                            //@synthesize mutableRelatedElements=_mutableRelatedElements - In the implementation block
@property (readonly) NSSet * currentRelatedElements; 
@property (readonly) id<XCTElementSetTransformer> transformer;                         //@synthesize transformer=_transformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(XCElementSnapshot *)input;
-(id<XCTElementSetTransformer>)transformer;
-(void)setInput:(XCElementSnapshot *)arg1 ;
-(void)setCurrentMatch:(XCElementSnapshot *)arg1 ;
-(XCElementSnapshot *)currentMatch;
-(id)nextMatch;
-(NSSet *)currentRelatedElements;
-(id)initWithInput:(id)arg1 filteringTransformer:(id)arg2 ;
-(char)hasMatched;
-(XCTElementIndexingTransformer *)indexingTransformer;
-(NSMutableSet *)mutableRelatedElements;
@end


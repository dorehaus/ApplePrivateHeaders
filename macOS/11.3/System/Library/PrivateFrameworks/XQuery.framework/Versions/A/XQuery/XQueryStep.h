/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface XQueryStep : NSObject {

	id _expr;
	id _next;
	NSArray* _predicates;

}
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)next;
-(void)setPredicates:(id)arg1 ;
-(id)predicates;
-(void)setNext:(id)arg1 ;
-(void)setLast:(id)arg1 ;
-(void)bindInfoForProlog:(id)arg1 ;
-(id)initWithExpr:(id)arg1 ;
-(id)expr;
-(id)handlePreicatesFromIndex:(unsigned long long)arg1 items:(id)arg2 context:(id)arg3 ;
-(void)processItems:(id)arg1 toResults:(id)arg2 forContext:(id)arg3 validate:(char)arg4 ;
@end

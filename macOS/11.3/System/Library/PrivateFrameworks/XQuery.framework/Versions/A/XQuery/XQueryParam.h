/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XQuery/XQueryExpr.h>
#import <XQuery/XQueryExprBehavior.h>

@class NSString, XQueryTypeDeclaration;

@interface XQueryParam : XQueryExpr <XQueryExprBehavior> {

	NSString* _name;
	XQueryTypeDeclaration* _type;
	long long _varID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paramWithName:(id)arg1 type:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(id)type;
-(id)initWithName:(id)arg1 type:(id)arg2 ;
-(id)evaluateWithContext:(id)arg1 ;
-(void)bindInfoForProlog:(id)arg1 ;
-(long long)varID;
@end


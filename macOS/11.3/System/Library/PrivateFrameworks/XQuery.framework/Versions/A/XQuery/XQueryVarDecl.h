/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class XQueryQName, XQueryTypeDeclaration;

@interface XQueryVarDecl : NSObject {

	XQueryQName* _name;
	XQueryTypeDeclaration* _type;
	id _expr;
	id _prolog;

}
+(id)varDecl:(id)arg1 forType:(id)arg2 withExpr:(id)arg3 prolog:(id)arg4 ;
-(void)finalize;
-(void)dealloc;
-(id)name;
-(id)type;
-(char)isExternal;
-(id)expr;
-(id)prolog;
-(id)initWithName:(id)arg1 forType:(id)arg2 withExpr:(id)arg3 prolog:(id)arg4 ;
@end

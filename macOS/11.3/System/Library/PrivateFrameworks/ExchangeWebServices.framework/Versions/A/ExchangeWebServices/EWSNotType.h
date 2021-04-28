/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSSearchExpressionType.h>
#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSSearchExpressionType, NSString;

@interface EWSNotType : EWSSearchExpressionType <XSDefinitionProvider> {

	EWSSearchExpressionType* _SearchExpression;

}

@property (setter=earchExpression,nonatomic,retain) EWSSearchExpressionType * SearchExpression;              //@synthesize SearchExpression=_SearchExpression - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)setSearchExpression:(EWSSearchExpressionType *)arg1 ;
-(EWSSearchExpressionType *)SearchExpression;
@end


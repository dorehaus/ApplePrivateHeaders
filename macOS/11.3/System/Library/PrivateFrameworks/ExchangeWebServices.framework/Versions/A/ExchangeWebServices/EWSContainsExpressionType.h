/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSSearchExpressionType.h>
#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSConstantValueType, EWSBasePathToElementType, NSString;

@interface EWSContainsExpressionType : EWSSearchExpressionType <XSDefinitionProvider> {

	EWSConstantValueType* _Constant;
	long long _ContainmentComparison;
	long long _ContainmentMode;
	EWSBasePathToElementType* _Path;

}

@property (nonatomic,retain) EWSConstantValueType * Constant;              //@synthesize Constant=_Constant - In the implementation block
@property (assign,nonatomic) long long ContainmentComparison;              //@synthesize ContainmentComparison=_ContainmentComparison - In the implementation block
@property (assign,nonatomic) long long ContainmentMode;                    //@synthesize ContainmentMode=_ContainmentMode - In the implementation block
@property (nonatomic,retain) EWSBasePathToElementType * Path;              //@synthesize Path=_Path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)setPath:(EWSBasePathToElementType *)arg1 ;
-(void)setConstant:(EWSConstantValueType *)arg1 ;
-(void)setContainmentComparison:(long long)arg1 ;
-(void)setContainmentMode:(long long)arg1 ;
-(EWSBasePathToElementType *)Path;
-(EWSConstantValueType *)Constant;
-(long long)ContainmentComparison;
-(long long)ContainmentMode;
@end


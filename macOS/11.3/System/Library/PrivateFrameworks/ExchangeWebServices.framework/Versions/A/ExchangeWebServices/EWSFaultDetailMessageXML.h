/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSFaultDetailMessageXMLValue, NSString;

@interface EWSFaultDetailMessageXML : NSObject <XSDefinitionProvider> {

	EWSFaultDetailMessageXMLValue* _Value;

}

@property (nonatomic,retain) EWSFaultDetailMessageXMLValue * Value;              //@synthesize Value=_Value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setValue:(EWSFaultDetailMessageXMLValue *)arg1 ;
-(EWSFaultDetailMessageXMLValue *)Value;
@end


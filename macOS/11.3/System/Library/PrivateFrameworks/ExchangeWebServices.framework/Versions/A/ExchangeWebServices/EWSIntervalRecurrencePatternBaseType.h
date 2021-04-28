/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSRecurrencePatternBaseType.h>
#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSString;

@interface EWSIntervalRecurrencePatternBaseType : EWSRecurrencePatternBaseType <XSDefinitionProvider> {

	long long _Interval;

}

@property (assign,nonatomic) long long Interval;                    //@synthesize Interval=_Interval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(NSString *)description;
-(void)setInterval:(long long)arg1 ;
-(long long)Interval;
@end

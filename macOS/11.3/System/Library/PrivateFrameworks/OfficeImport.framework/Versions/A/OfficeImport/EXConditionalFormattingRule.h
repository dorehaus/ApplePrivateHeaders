/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXConditionalFormattingRule : NSObject
+(void)readFrom:(xmlNode*)arg1 x14:(char)arg2 edConditionalFormatting:(id)arg3 edReference:(id)arg4 state:(id)arg5 ;
+(int)edRuleTypeFromXmlRuleTypeString:(id)arg1 ;
+(int)edOperatorFromXmlOperatorString:(id)arg1 ;
+(int)edTimePeriodFromXmlTimePeriodString:(id)arg1 ;
+(id)timePeriodEnumMap;
+(id)operatorStringEnumMap;
+(id)conditionalFormattingRuleTypeEnumMap;
@end


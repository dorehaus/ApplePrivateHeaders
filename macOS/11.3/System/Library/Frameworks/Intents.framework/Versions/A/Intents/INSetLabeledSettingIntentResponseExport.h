/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INSetLabeledSettingIntentResponseExport <NSObject,JSExport>
@property (readonly) long long code; 
@property (copy) NSString * oldValue; 
@property (copy) NSString * updatedValue; 
@property (copy) NSString * errorDetail; 
@required
-(long long)code;
-(void)setOldValue:(id)arg1;
-(NSString *)oldValue;
-(NSString *)updatedValue;
-(void)setUpdatedValue:(id)arg1;
-(NSString *)errorDetail;
-(void)setErrorDetail:(id)arg1;

@end


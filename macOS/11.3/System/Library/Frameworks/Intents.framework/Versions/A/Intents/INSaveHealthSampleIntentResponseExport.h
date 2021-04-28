/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INDateComponentsRange, NSString;


@protocol INSaveHealthSampleIntentResponseExport <NSObject,JSExport>
@property (readonly) long long code; 
@property (copy) NSArray * sampleUuids; 
@property (copy) INDateComponentsRange * recordDate; 
@property (copy) NSString * defaultUnit; 
@property (copy) NSArray * valuesDefaultUnits; 
@property (copy) NSString * userProvidedUnit; 
@property (copy) NSArray * valuesUserProvidedUnits; 
@property (copy) NSString * punchoutUrl; 
@required
-(long long)code;
-(NSArray *)sampleUuids;
-(void)setSampleUuids:(id)arg1;
-(INDateComponentsRange *)recordDate;
-(void)setRecordDate:(id)arg1;
-(NSString *)defaultUnit;
-(void)setDefaultUnit:(id)arg1;
-(NSArray *)valuesDefaultUnits;
-(void)setValuesDefaultUnits:(id)arg1;
-(NSString *)userProvidedUnit;
-(void)setUserProvidedUnit:(id)arg1;
-(NSArray *)valuesUserProvidedUnits;
-(void)setValuesUserProvidedUnits:(id)arg1;
-(NSString *)punchoutUrl;
-(void)setPunchoutUrl:(id)arg1;

@end


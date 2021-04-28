/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INDateComponentsRange, NSArray, HKUnit;


@protocol INSaveHealthSampleIntentExport <NSObject,JSExport>
@property (copy) INDateComponentsRange * recordDate; 
@property (assign) long long objectType; 
@property (copy) NSArray * values; 
@property (copy) HKUnit * unit; 
@property (copy) NSArray * sampleMetadatas; 
@required
-(id)init;
-(NSArray *)values;
-(HKUnit *)unit;
-(void)setUnit:(id)arg1;
-(void)setValues:(id)arg1;
-(long long)objectType;
-(void)setObjectType:(long long)arg1;
-(INDateComponentsRange *)recordDate;
-(void)setRecordDate:(id)arg1;
-(NSArray *)sampleMetadatas;
-(void)setSampleMetadatas:(id)arg1;

@end


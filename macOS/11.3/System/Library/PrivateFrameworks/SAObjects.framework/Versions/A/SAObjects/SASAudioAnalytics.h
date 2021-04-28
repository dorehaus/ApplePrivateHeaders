/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SASAudioAnalytics : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * acousticFeatures; 
@property (nonatomic,copy) NSDictionary * speechRecognitionFeatures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioAnalytics;
+(id)audioAnalyticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_audioAnalytics;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDictionary *)acousticFeatures;
-(void)setAcousticFeatures:(NSDictionary *)arg1 ;
-(NSDictionary *)speechRecognitionFeatures;
-(void)setSpeechRecognitionFeatures:(NSDictionary *)arg1 ;
@end


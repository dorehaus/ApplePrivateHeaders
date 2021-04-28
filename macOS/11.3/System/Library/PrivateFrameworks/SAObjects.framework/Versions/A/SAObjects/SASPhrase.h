/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASPhrase : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * interpretations; 
@property (assign,nonatomic) char lowConfidence; 
@property (assign,nonatomic) char speechRepairApplied; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phrase;
+(id)phraseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechInterpretations;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)interpretations;
-(void)setInterpretations:(NSArray *)arg1 ;
-(char)lowConfidence;
-(void)setLowConfidence:(char)arg1 ;
-(char)speechRepairApplied;
-(void)setSpeechRepairApplied:(char)arg1 ;
@end

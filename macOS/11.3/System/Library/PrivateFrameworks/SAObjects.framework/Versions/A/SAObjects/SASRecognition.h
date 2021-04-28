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

@interface SASRecognition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * phrases; 
@property (assign,nonatomic) long long sentenceConfidence; 
@property (nonatomic,copy) NSArray * utterances; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recognition;
+(id)recognitionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechPhrases;
-(id)af_speechUtterances;
-(id)af_correctionContextWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)af_userUtteranceValueWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)af_bestTextInterpretationWithRefId:(id)arg1 sessionId:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)phrases;
-(void)setPhrases:(NSArray *)arg1 ;
-(long long)sentenceConfidence;
-(void)setSentenceConfidence:(long long)arg1 ;
-(NSArray *)utterances;
-(void)setUtterances:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSArray * tokens; 
+(id)createUsingPhrases:(id)arg1 andUtterances:(id)arg2 ;
+(id)speechPartialResult;
+(id)speechPartialResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_correctionContext;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(id)af_tokens;
-(id)af_speechModel;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)tokens;
-(void)setTokens:(NSArray *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
@end

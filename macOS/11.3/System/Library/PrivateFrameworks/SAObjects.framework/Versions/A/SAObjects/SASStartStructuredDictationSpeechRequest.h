/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeechRequest.h>

@class NSString;

@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest

@property (nonatomic,copy) NSString * structuredDictationType; 
+(id)startStructuredDictationSpeechRequest;
+(id)startStructuredDictationSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)structuredDictationType;
-(void)setStructuredDictationType:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol INSpeakable <NSObject>
@property (readonly) NSString * spokenPhrase; 
@property (readonly) NSString * pronunciationHint; 
@property (readonly) NSString * vocabularyIdentifier; 
@property (readonly) NSArray * alternativeSpeakableMatches; 
@property (readonly) NSString * identifier; 
@optional
-(NSString *)identifier;

@required
-(NSString *)spokenPhrase;
-(NSString *)vocabularyIdentifier;
-(NSString *)pronunciationHint;
-(NSArray *)alternativeSpeakableMatches;

@end


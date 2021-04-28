/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/AMWorkflowMetaData.h>

@class NSString, NSDate;

@interface AMDictationCommandWorkflowMetaData : AMWorkflowMetaData {

	char _dictationCommandEnabled;
	NSString* _dictationCommandTitle;
	NSString* _dictationCommandIdentifier;
	NSString* _dictationCommandWorkflowURLString;
	NSDate* _dictationCommandTimeStamp;

}

@property (assign) char dictationCommandEnabled;                            //@synthesize dictationCommandEnabled=_dictationCommandEnabled - In the implementation block
@property (copy) NSString * dictationCommandTitle;                          //@synthesize dictationCommandTitle=_dictationCommandTitle - In the implementation block
@property (copy) NSString * dictationCommandIdentifier;                     //@synthesize dictationCommandIdentifier=_dictationCommandIdentifier - In the implementation block
@property (copy) NSString * dictationCommandWorkflowURLString;              //@synthesize dictationCommandWorkflowURLString=_dictationCommandWorkflowURLString - In the implementation block
@property (retain) NSDate * dictationCommandTimeStamp;                      //@synthesize dictationCommandTimeStamp=_dictationCommandTimeStamp - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)metaData;
-(id)initWithPersonality:(id)arg1 ;
-(void)setFromDictionary:(id)arg1 ;
-(NSString *)dictationCommandTitle;
-(NSString *)dictationCommandIdentifier;
-(char)dictationCommandEnabled;
-(void)setDictationCommandTitle:(NSString *)arg1 ;
-(void)setDictationCommandIdentifier:(NSString *)arg1 ;
-(void)setDictationCommandEnabled:(char)arg1 ;
-(void)setDictationCommandWorkflowURLString:(NSString *)arg1 ;
-(void)setDictationCommandTimeStamp:(NSDate *)arg1 ;
-(void)updateDictationCommandProperties:(id)arg1 ;
-(NSString *)dictationCommandWorkflowURLString;
-(NSDate *)dictationCommandTimeStamp;
-(void)updateDictationCommandPropertiesWithURL:(id)arg1 ;
-(void)syncMetaDataForWorkflow:(id)arg1 atURL:(id)arg2 ;
@end

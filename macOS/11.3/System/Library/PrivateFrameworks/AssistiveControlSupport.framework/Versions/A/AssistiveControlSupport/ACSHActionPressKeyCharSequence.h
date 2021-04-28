/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/ACSHAction.h>

@class NSString;

@interface ACSHActionPressKeyCharSequence : ACSHAction {

	NSString* _charString;

}

@property (nonatomic,retain) NSString * charString;              //@synthesize charString=_charString - In the implementation block
+(id)actionWithString:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)performWithEventSourceData:(id)arg1 ;
-(void)_configureWithPlistDictionary:(id)arg1 ;
-(id)paramDictionaryForSaving;
-(void)setCharString:(NSString *)arg1 ;
-(NSString *)charString;
@end


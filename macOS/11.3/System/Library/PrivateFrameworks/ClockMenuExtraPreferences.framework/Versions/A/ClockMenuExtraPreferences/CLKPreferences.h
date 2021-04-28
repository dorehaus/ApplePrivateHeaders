/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClockMenuExtraPreferences.framework/Versions/A/ClockMenuExtraPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLKPreferences : NSObject {

	char isAnalog;
	NSString* dateFormat;
	char flashDateSeparators;

}

@property (assign) char isAnalog; 
@property (retain) NSString * dateFormat; 
@property (assign,nonatomic) char flashDateSeparators; 
+(id)_defaultDateFormatWithLocale:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setDateFormat:(NSString *)arg1 ;
-(NSString *)dateFormat;
-(id)initWithLocale:(id)arg1 ;
-(char)isAnalog;
-(void)setIsAnalog:(char)arg1 ;
-(void)setFlashDateSeparators:(char)arg1 ;
-(char)flashDateSeparators;
-(id)_extraDescription;
@end

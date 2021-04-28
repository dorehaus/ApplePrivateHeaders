/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject {

	NSArray* _validatedFonts;
	NSString* _languageTag;

}

@property (readonly) NSArray * fonts; 
@property (readonly) NSArray * possibleFonts; 
@property (copy,readonly) NSString * languageTag;              //@synthesize languageTag=_languageTag - In the implementation block
-(id)init;
-(NSArray *)fonts;
-(NSString *)languageTag;
-(id)fontWithFontFamilyName:(id)arg1 ;
-(id)defaultFontForLanguageTag:(id)arg1 ;
-(void)_fontDownloadDidFinish:(id)arg1 ;
-(NSArray *)possibleFonts;
-(void)updateLanguageTag:(id)arg1 ;
@end


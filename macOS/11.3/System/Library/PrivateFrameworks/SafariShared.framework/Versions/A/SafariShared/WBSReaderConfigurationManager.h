/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, WBSReaderFontManager, NSDictionary;

@interface WBSReaderConfigurationManager : NSObject {

	long long _textZoomIndex;
	long long _theme;
	long long _darkModeTheme;
	NSMutableDictionary* _fontFamilyNameForLanguageTag;
	WBSReaderFontManager* _fontManager;
	char _prefersLargerDefaultFontSize;
	char _javaScriptEnabled;
	char _darkModeEnabled;

}

@property (nonatomic,readonly) NSDictionary * configurationToSave; 
@property (nonatomic,readonly) NSDictionary * configurationToSendToWebPage; 
@property (assign,nonatomic) char javaScriptEnabled;                                     //@synthesize javaScriptEnabled=_javaScriptEnabled - In the implementation block
@property (assign,nonatomic) char darkModeEnabled;                                       //@synthesize darkModeEnabled=_darkModeEnabled - In the implementation block
@property (nonatomic,readonly) char canMakeTextBigger; 
@property (nonatomic,readonly) char canMakeTextSmaller; 
@property (nonatomic,readonly) char resettingTextSizeWouldHaveEffect; 
-(void)setJavaScriptEnabled:(char)arg1 ;
-(char)canMakeTextSmaller;
-(char)javaScriptEnabled;
-(long long)_defaultTextZoomIndex;
-(void)_migrateToVersion5IfNecessary;
-(id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2 prefersLargerDefaultFontSize:(char)arg3 ;
-(long long)_effectiveTextZoomIndex;
-(long long)_defaultThemeForAppearance:(long long)arg1 ;
-(char)canMakeTextBigger;
-(id)initWithPersistedSettingsAsDictionaryRepresentation:(id)arg1 fontManager:(id)arg2 ;
-(NSDictionary *)configurationToSave;
-(NSDictionary *)configurationToSendToWebPage;
-(char)resettingTextSizeWouldHaveEffect;
-(void)makeTextBigger;
-(void)makeTextSmaller;
-(void)resetTextSize;
-(void)setFont:(id)arg1 forLanguageTag:(id)arg2 ;
-(id)fontForLanguageTag:(id)arg1 ;
-(void)setTheme:(long long)arg1 forAppearance:(long long)arg2 ;
-(long long)themeForAppearance:(long long)arg1 ;
-(char)darkModeEnabled;
-(void)setDarkModeEnabled:(char)arg1 ;
@end


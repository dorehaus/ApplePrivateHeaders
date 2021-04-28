/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HIToolbox/PluginReaderGenericModule.h>

@class PluginParser, NSArray, NSString, NSMutableDictionary;

@interface PluginReaderOpenVanillaFileModule : PluginReaderGenericModule {

	PluginParser* _parser;
	NSArray* _encodingNames;
	char _parsedDictionary;
	NSString* _IMEnglishName;
	NSString* _IMChineseName;
	NSString* _selectionKeys;
	int _encoding;
	NSString* _validInputKeys;
	NSString* _keyPrompt;
	NSMutableDictionary* _keyboardLayout;

}
-(id)initForBasicPropertiesWithFile:(id)arg1 ;
-(char)parseForBasicProperties;
-(void)_initParsingInformation;
-(void)setIMEnglishName:(id)arg1 ;
-(void)setIMChineseName:(id)arg1 ;
-(void)parseKeyName:(id)arg1 ;
-(char)parseCharDef:(id)arg1 ;
-(void)writePluginInformationIntoDictionary;
-(void)setKeyPrompt:(id)arg1 ;
-(void)dealloc;
-(char)parse;
-(id)initWithFile:(id)arg1 ;
-(void)setSelectionKeys:(id)arg1 ;
-(void)setValidInputKeys:(id)arg1 ;
@end


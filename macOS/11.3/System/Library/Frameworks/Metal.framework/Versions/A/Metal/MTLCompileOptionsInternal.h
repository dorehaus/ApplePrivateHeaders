/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLCompileOptions.h>

@class NSDictionary, NSString, NSArray;

@interface MTLCompileOptionsInternal : MTLCompileOptions {

	char _userSetLanguageVersion;
	NSDictionary* _preprocessorMacros;
	char _fastMathEnabled;
	char _framebufferReadEnabled;
	char _tracingEnabled;
	char _debuggingEnabled;
	unsigned long long _languageVersion;
	char _compileTimeStatisticsEnabled;
	NSString* _additionalCompilerArguments;
	unsigned char _sourceLanguage;
	long long _libraryType;
	NSArray* _libraries;
	NSString* _installName;
	char _preserveInvariance;

}
-(char)framebufferReadEnabled;
-(char)compileTimeStatisticsEnabled;
-(char)fastMathEnabled;
-(unsigned long long)languageVersion;
-(char)preserveInvariance;
-(void)setFramebufferReadEnabled:(char)arg1 ;
-(void)setCompileTimeStatisticsEnabled:(char)arg1 ;
-(void)setInstallName:(id)arg1 ;
-(id)exportDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)installName;
-(id)additionalCompilerArguments;
-(void)setAdditionalCompilerArguments:(id)arg1 ;
-(id)libraries;
-(void)setLibraries:(id)arg1 ;
-(void)importDictionary:(id)arg1 ;
-(void)setDebuggingEnabled:(char)arg1 ;
-(void)setPreserveInvariance:(char)arg1 ;
-(void)setFastMathEnabled:(char)arg1 ;
-(id)preprocessorMacros;
-(void)setPreprocessorMacros:(id)arg1 ;
-(void)setLanguageVersion:(unsigned long long)arg1 ;
-(long long)libraryType;
-(void)setSourceLanguage:(unsigned char)arg1 ;
-(unsigned char)sourceLanguage;
-(char)debuggingEnabled;
-(void)setLibraryType:(long long)arg1 ;
-(void)setTracingEnabled:(char)arg1 ;
-(char)tracingEnabled;
@end


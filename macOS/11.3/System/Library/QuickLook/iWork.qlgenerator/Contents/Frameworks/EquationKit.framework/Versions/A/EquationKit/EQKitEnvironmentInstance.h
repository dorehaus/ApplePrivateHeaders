/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/EquationKit.framework/Versions/A/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <EquationKit/EQKitEnvironment.h>

@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment {

	NSDictionary* mConfig;
	Dictionary* mOperatorDictionary;
	Manager* mFontManager;
	Manager* mKerningManager;
	Config* mLayoutConfig;
	Config* mBlahtexConfig;

}

@property (assign,nonatomic) char kerning; 
+(id)defaultEnvironment;
+(id)environmentFromData:(id)arg1 ;
+(id)dataForEnvironment:(id)arg1 ;
+(id)dataForDefaultEnvironment;
-(void)dealloc;
-(const Manager*)fontManager;
-(id)initWithConfig:(id)arg1 ;
-(char)kerning;
-(void)setKerning:(char)arg1 ;
-(void)endLayout;
-(void)beginLayout;
-(const Manager*)kerningManager;
-(const Config*)layoutConfig;
-(const Dictionary*)operatorDictionary;
-(id)newDictionaryForArchiving;
-(const Config*)blahtexConfig;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPSmartField.h>

@class NSString;

@interface TSWPPlaceholderSmartField : TSWPSmartField {

	char _localizable;
	NSString* _scriptTag;

}

@property (assign,nonatomic) char isLocalizable; 
@property (nonatomic,copy) NSString * scriptTag; 
-(id)initWithContext:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(char)isLocalizable;
-(void)setIsLocalizable:(char)arg1 ;
-(void)saveToArchive:(PlaceholderSmartFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const PlaceholderSmartFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned short)smartFieldKind;
-(NSString *)scriptTag;
-(void)setScriptTag:(NSString *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDTableStyleOverride, NSString, WDStyleSheet;

@interface WDStyle : NSObject <NSCopying> {

	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellProperties;
	WDTableStyleOverride* mTableStyleOverrides[12];
	char mHidden;
	NSString* mName;
	NSString* mId;
	int mStyleType;
	WDStyleSheet* mStyleSheet;
	WDStyle* mBaseStyle;
	WDStyle* mNextStyle;

}

@property (__weak,readonly) WDStyleSheet * styleSheet; 
@property (__weak) WDStyle * baseStyle; 
@property (__weak) WDStyle * nextStyle; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)name;
-(void)setHidden:(char)arg1 ;
-(char)hidden;
-(int)type;
-(void)setName:(id)arg1 ;
-(id)id;
-(WDStyleSheet *)styleSheet;
-(WDStyle *)baseStyle;
-(id)paragraphProperties;
-(id)characterProperties;
-(id)tableCellProperties;
-(id)tableProperties;
-(char)isAnythingOverridden;
-(void)setBaseStyle:(WDStyle *)arg1 ;
-(void)setNextStyle:(WDStyle *)arg1 ;
-(id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3 ;
-(id)tableRowProperties;
-(id)tableStyleOverrideForPart:(int)arg1 ;
-(WDStyle *)nextStyle;
@end


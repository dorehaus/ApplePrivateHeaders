/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDStyle;

@interface WDTableStyleOverride : NSObject <NSCopying> {

	WDDocument* mDocument;
	int mPart;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellStyleProperties;
	unsigned mParagraphPropertiesOverridden : 1;
	unsigned mCharacterPropertiesOverridden : 1;
	unsigned mTableRowPropertiesOverridden : 1;
	unsigned mTableCellStylePropertiesOverridden : 1;
	WDStyle* mStyle;

}

@property (__weak) WDStyle * style; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(WDStyle *)style;
-(void)setStyle:(WDStyle *)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(int)part;
-(void)setPart:(int)arg1 ;
-(id)paragraphProperties;
-(id)characterProperties;
-(char)isCharacterPropertiesOverridden;
-(id)tableProperties;
-(id)mutableCharacterProperties;
-(id)tableRowProperties;
-(id)mutableParagraphProperties;
-(char)isParagraphPropertiesOverridden;
-(void)setParagraphPropertiesOverridden:(char)arg1 ;
-(void)setCharacterPropertiesOverridden:(char)arg1 ;
-(char)isTablePropertiesOverridden;
-(id)mutableTableRowProperties;
-(char)isTableRowPropertiesOverridden;
-(void)setTableRowPropertiesOverridden:(char)arg1 ;
-(id)tableCellStyleProperties;
-(id)mutableTableCellStyleProperties;
-(char)isTableCellStylePropertiesOverridden;
-(void)setTableCellStylePropertiesOverridden:(char)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDCharacterProperties, WDParagraphPropertiesValues, WDDocument;

@interface WDParagraphProperties : NSObject <NSCopying> {

	WDCharacterProperties* mCharacterProperties;
	BOOL mCharacterPropertiesOverridden;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	WDParagraphPropertiesValues* mOriginalProperties;
	WDParagraphPropertiesValues* mTrackedProperties;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)listIndex;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)width;
-(long long)height;
-(WDDocument *)document;
-(short)lineSpacing;
-(void)setLineSpacing:(short)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setListIndex:(unsigned long long)arg1 ;
-(id)topBorder;
-(id)bottomBorder;
-(void)setPageBreakBefore:(char)arg1 ;
-(char)wrap;
-(void)setWrap:(char)arg1 ;
-(char)isBaseStyleOverridden;
-(id)baseStyle;
-(char)isHorizontalAnchorOverridden;
-(int)horizontalAnchor;
-(char)isVerticalAnchorOverridden;
-(int)verticalAnchor;
-(char)isHorizontalPositionOverridden;
-(long long)horizontalPosition;
-(char)isVerticalPositionOverridden;
-(long long)verticalPosition;
-(id)characterProperties;
-(char)isCharacterPropertiesOverridden;
-(char)isSpaceAfterOverridden;
-(unsigned short)spaceAfter;
-(char)isSpaceBeforeOverridden;
-(unsigned short)spaceBefore;
-(char)isLineSpacingOverridden;
-(char)isJustificationOverridden;
-(int)justification;
-(char)isLeftIndentOverridden;
-(short)leftIndent;
-(char)isRightIndentOverridden;
-(short)rightIndent;
-(char)isLeadingIndentOverridden;
-(short)leadingIndent;
-(char)isFollowingIndentOverridden;
-(short)followingIndent;
-(char)isFirstLineIndentOverridden;
-(short)firstLineIndent;
-(char)isShadingOverridden;
-(id)shading;
-(char)isBottomBorderOverridden;
-(char)isListIndexOverridden;
-(char)isListLevelOverridden;
-(unsigned char)listLevel;
-(char)isWidthOverridden;
-(char)isTopBorderOverridden;
-(char)isLeftBorderOverridden;
-(char)isRightBorderOverridden;
-(id)leftBorder;
-(id)rightBorder;
-(char)isHeightOverridden;
-(char)isAnythingOverridden;
-(unsigned short)outlineLevel;
-(void)setOutlineLevel:(unsigned short)arg1 ;
-(void)setCharacterProperties:(id)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(int)resolveMode;
-(void)setFormattingChanged:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(char)isFormattingChangedOverridden;
-(int)formattingChanged;
-(char)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(id)mutableShading;
-(void)setBaseStyle:(id)arg1 ;
-(void)setJustification:(int)arg1 ;
-(void)setVerticalAnchor:(int)arg1 ;
-(void)setHorizontalAnchor:(int)arg1 ;
-(void)setVerticalPosition:(long long)arg1 ;
-(void)setHorizontalPosition:(long long)arg1 ;
-(char)isAnythingOverriddenIn:(id)arg1 ;
-(void)negateFormattingChangesWithDefaults:(id)arg1 ;
-(void)clearBaseStyle;
-(void)copyPropertiesInto:(id)arg1 ;
-(char)isPageBreakBeforeOverridden;
-(char)isPageBreakBefore;
-(void)setListLevel:(unsigned char)arg1 ;
-(char)isHeightRuleOverridden;
-(int)heightRule;
-(void)setHeightRule:(int)arg1 ;
-(char)isVerticalSpaceOverridden;
-(long long)verticalSpace;
-(void)setVerticalSpace:(long long)arg1 ;
-(char)isHorizontalSpaceOverridden;
-(long long)horizontalSpace;
-(void)setHorizontalSpace:(long long)arg1 ;
-(char)isWrapOverridden;
-(char)isWrapCodeOverridden;
-(char)wrapCode;
-(void)setWrapCode:(char)arg1 ;
-(char)isAnchorLockOverridden;
-(char)anchorLock;
-(void)setAnchorLock:(char)arg1 ;
-(void)setSpaceBefore:(unsigned short)arg1 ;
-(char)isSpaceBeforeAutoOverridden;
-(char)spaceBeforeAuto;
-(void)setSpaceBeforeAuto:(char)arg1 ;
-(void)setSpaceAfter:(unsigned short)arg1 ;
-(char)isSpaceAfterAutoOverridden;
-(char)spaceAfterAuto;
-(void)setSpaceAfterAuto:(char)arg1 ;
-(char)isLineSpacingRuleOverridden;
-(int)lineSpacingRule;
-(void)setLineSpacingRule:(int)arg1 ;
-(void)setLeftIndent:(short)arg1 ;
-(void)setLeadingIndent:(short)arg1 ;
-(void)setFollowingIndent:(short)arg1 ;
-(void)setRightIndent:(short)arg1 ;
-(void)setFirstLineIndent:(short)arg1 ;
-(char)isPhysicalJustificationOverridden;
-(int)physicalJustification;
-(void)setPhysicalJustification:(int)arg1 ;
-(char)isOutlineLevelOverridden;
-(char)isKeepNextParagraphTogetherOverridden;
-(char)keepNextParagraphTogether;
-(void)setKeepNextParagraphTogether:(char)arg1 ;
-(char)isKeepLinesTogetherOverridden;
-(char)keepLinesTogether;
-(void)setKeepLinesTogether:(char)arg1 ;
-(char)isSuppressAutoHyphensOverridden;
-(char)suppressAutoHyphens;
-(void)setSuppressAutoHyphens:(char)arg1 ;
-(char)isSuppressLineNumbersOverridden;
-(char)suppressLineNumbers;
-(void)setSuppressLineNumbers:(char)arg1 ;
-(char)isWidowControlOverridden;
-(char)widowControl;
-(void)setWidowControl:(char)arg1 ;
-(char)isBiDiOverridden;
-(char)biDi;
-(void)setBiDi:(char)arg1 ;
-(char)isKinsokuOffOverridden;
-(char)kinsokuOff;
-(void)setKinsokuOff:(char)arg1 ;
-(id)mutableBetweenBorder;
-(id)betweenBorder;
-(char)isBetweenBorderOverridden;
-(id)mutableBarBorder;
-(id)barBorder;
-(char)isBarBorderOverridden;
-(char)isDropCapOverridden;
-(SCD_Struct_WD111)dropCap;
-(void)setDropCap:(SCD_Struct_WD111)arg1 ;
-(unsigned long long)tabStopAddedCount;
-(void)setTabStopAddedCount:(unsigned long long)arg1 ;
-(SCD_Struct_WD112*)tabStopAddedAt:(unsigned long long)arg1 ;
-(void)addTabStopAdded:(SCD_Struct_WD112*)arg1 ;
-(unsigned long long)tabStopDeletedPositionCount;
-(void)setTabStopDeletedPositionCount:(unsigned long long)arg1 ;
-(short)tabStopDeletedPositionAt:(unsigned long long)arg1 ;
-(void)addTabStopDeletedPosition:(short)arg1 ;
-(short)leftIndentChars;
-(void)setLeftIndentChars:(short)arg1 ;
-(short)rightIndentChars;
-(void)setRightIndentChars:(short)arg1 ;
-(short)firstLineIndentChars;
-(void)setFirstLineIndentChars:(short)arg1 ;
-(char)contextualSpacing;
-(void)setContextualSpacing:(char)arg1 ;
-(id)mutableCharacterProperties;
-(void)clearChararacterProperties;
-(void)clearLeftIndent;
-(void)clearLeadingIndent;
-(void)clearFollowingIndent;
-(void)clearRightIndent;
-(void)clearFirstLineIndent;
-(char)isLeftIndentCharsOverridden;
-(char)isRightIndentCharsOverridden;
-(char)isFirstLineIndentCharsOverridden;
-(char)hasTabStopAddedAtPosition:(short)arg1 ;
-(char)hasTabStopDeletedAtPosition:(short)arg1 ;
-(void)removeTabStopAddedWithPosition:(short)arg1 ;
-(void)removeTabStopDeletedPosition:(short)arg1 ;
-(char)isContextualSpacingOverridden;
@end


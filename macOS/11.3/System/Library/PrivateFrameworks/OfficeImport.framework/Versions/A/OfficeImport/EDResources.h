/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDStylesCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection;

@interface EDResources : NSObject {

	EDCollection* mStrings;
	EDContentFormatsCollection* mContentFormats;
	EDFontsCollection* mFonts;
	EDCollection* mAlignmentInfos;
	EDStylesCollection* mStyles;
	EDColorsCollection* mColors;
	EDColorsCollection* mThemes;
	EDCollection* mNames;
	EDLinksCollection* mLinks;
	EDCollection* mBorders;
	EDCollection* mBorder;
	EDCollection* mFills;
	EDCollection* mDifferentialStyles;
	EDTableStylesCollection* mTableStyles;

}
-(id)description;
-(void)setColors:(id)arg1 ;
-(id)colors;
-(id)styles;
-(id)links;
-(id)names;
-(id)fonts;
-(id)border;
-(id)strings;
-(id)borders;
-(id)fills;
-(id)tableStyles;
-(id)contentFormats;
-(id)initWithStringOptimization:(BOOL)arg1 ;
-(id)alignmentInfos;
-(id)differentialStyles;
-(id)themes;
-(void)setThemes:(id)arg1 ;
@end

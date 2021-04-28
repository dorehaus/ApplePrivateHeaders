/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFTableRowCardSection.h>
#import <libobjc.A.dylib/SFTableHeaderRowCardSection.h>
@class NSArray, NSString, SFColor, SFTableAlignmentSchema, NSDictionary, NSData;


@protocol SFTableHeaderRowCardSection <SFTableRowCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) char canBeHidden; 
@property (assign,nonatomic) char hasTopPadding; 
@property (assign,nonatomic) char hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * tableIdentifier; 
@property (nonatomic,retain) SFTableAlignmentSchema * alignmentSchema; 
@property (nonatomic,copy) NSArray * data; 
@property (assign,nonatomic) char isSubHeader; 
@property (nonatomic,copy) NSString * tabGroupIdentifier; 
@property (assign,nonatomic) char reducedRowHeight; 
@property (assign,nonatomic) int verticalAlign; 
@property (assign,nonatomic) char alignRowsToHeader; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSArray *)data;
-(void)setData:(id)arg1;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(int)verticalAlign;
-(void)setVerticalAlign:(int)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(char)arg1;
-(void)setIsSubHeader:(char)arg1;
-(void)setTableIdentifier:(id)arg1;
-(void)setAlignmentSchema:(id)arg1;
-(void)setTabGroupIdentifier:(id)arg1;
-(void)setReducedRowHeight:(char)arg1;
-(void)setHasTopPadding:(char)arg1;
-(void)setAlignRowsToHeader:(char)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1;
-(int)separatorStyle;
-(NSString *)tableIdentifier;
-(SFTableAlignmentSchema *)alignmentSchema;
-(char)isSubHeader;
-(NSString *)tabGroupIdentifier;
-(char)reducedRowHeight;
-(char)alignRowsToHeader;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFTableAlignmentSchema, NSDictionary, NSData, SFCard, SFUserReportRequest, SFCommand;

@interface SFTableHeaderRowCardSection : SFTableRowCardSection <SFTableHeaderRowCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF1 _has;
	char _canBeHidden;
	char _hasTopPadding;
	char _hasBottomPadding;
	char _isSubHeader;
	char _reducedRowHeight;
	char _alignRowsToHeader;
	int _separatorStyle;
	int _verticalAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _tableIdentifier;
	SFTableAlignmentSchema* _alignmentSchema;
	NSArray* _data;
	NSString* _tabGroupIdentifier;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) char canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) char hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) char hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * tableIdentifier;                               //@synthesize tableIdentifier=_tableIdentifier - In the implementation block
@property (nonatomic,retain) SFTableAlignmentSchema * alignmentSchema;               //@synthesize alignmentSchema=_alignmentSchema - In the implementation block
@property (nonatomic,copy) NSArray * data;                                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) char isSubHeader;                                       //@synthesize isSubHeader=_isSubHeader - In the implementation block
@property (nonatomic,copy) NSString * tabGroupIdentifier;                            //@synthesize tabGroupIdentifier=_tabGroupIdentifier - In the implementation block
@property (assign,nonatomic) char reducedRowHeight;                                  //@synthesize reducedRowHeight=_reducedRowHeight - In the implementation block
@property (assign,nonatomic) int verticalAlign;                                      //@synthesize verticalAlign=_verticalAlign - In the implementation block
@property (assign,nonatomic) char alignRowsToHeader;                                 //@synthesize alignRowsToHeader=_alignRowsToHeader - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,copy) NSArray * richData; 
@property (assign,nonatomic) char hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,retain) SFCommand * command; 
@property (nonatomic,retain) SFCommand * previewCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(Class)_searchUIViewClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSArray *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setData:(NSArray *)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFColor *)backgroundColor;
-(NSArray *)punchoutOptions;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)verticalAlign;
-(void)setVerticalAlign:(int)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(char)arg1 ;
-(void)setIsSubHeader:(char)arg1 ;
-(void)setTableIdentifier:(NSString *)arg1 ;
-(void)setAlignmentSchema:(SFTableAlignmentSchema *)arg1 ;
-(void)setTabGroupIdentifier:(NSString *)arg1 ;
-(void)setReducedRowHeight:(char)arg1 ;
-(void)setHasTopPadding:(char)arg1 ;
-(void)setAlignRowsToHeader:(char)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1 ;
-(int)separatorStyle;
-(char)hasCanBeHidden;
-(char)hasHasTopPadding;
-(char)hasHasBottomPadding;
-(char)hasSeparatorStyle;
-(NSString *)tableIdentifier;
-(SFTableAlignmentSchema *)alignmentSchema;
-(char)isSubHeader;
-(NSString *)tabGroupIdentifier;
-(char)reducedRowHeight;
-(char)alignRowsToHeader;
-(char)hasIsSubHeader;
-(char)hasReducedRowHeight;
-(char)hasVerticalAlign;
-(char)hasAlignRowsToHeader;
@end

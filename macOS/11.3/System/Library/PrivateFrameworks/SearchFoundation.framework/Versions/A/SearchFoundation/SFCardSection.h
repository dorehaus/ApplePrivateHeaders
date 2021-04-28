/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/CRCardSection.h>
#import <libobjc.A.dylib/SFJSONSerializable.h>
#import <libobjc.A.dylib/SFCardSection.h>
@class NSArray, NSString, SFCard, SFColor, SFUserReportRequest, SFCommand;


@protocol SFCardSection <NSSecureCoding,NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) char hideDivider; 
@property (assign,nonatomic) char canBeHidden; 
@property (assign,nonatomic) char hasTopPadding; 
@property (assign,nonatomic) char hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,retain) SFCommand * command; 
@property (nonatomic,retain) SFCommand * previewCommand; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(SFCommand *)command;
-(NSArray *)commands;
-(void)setCommands:(id)arg1;
-(void)setCommand:(id)arg1;
-(NSArray *)punchoutOptions;
-(SFCard *)nextCard;
-(void)setPunchoutOptions:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCardSectionId:(id)arg1;
-(void)setResultIdentifier:(id)arg1;
-(void)setHideDivider:(char)arg1;
-(char)hideDivider;
-(void)setCanBeHidden:(char)arg1;
-(void)setNextCard:(id)arg1;
-(void)setHasTopPadding:(char)arg1;
-(NSString *)cardSectionId;
-(NSString *)resultIdentifier;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1;
-(int)separatorStyle;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(id)arg1;
-(SFUserReportRequest *)userReportRequest;
-(void)setUserReportRequest:(id)arg1;
-(SFCommand *)previewCommand;
-(void)setPreviewCommand:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSData, NSDictionary, SFCard, SFColor, SFUserReportRequest, SFCommand;

@interface SFCardSection : NSObject <CRCardSection, SFJSONSerializable, SFCardSection, NSCopying> {

	char _hasBottomPadding;
	char _canBeHidden;
	char _hasTopPadding;
	char _hideDivider;
	int _separatorStyle;
	NSString* _type;
	SFCard* _nextCard;
	NSArray* _commands;
	NSString* _punchoutPickerTitle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerDismissText;
	NSArray* _parameterKeyPaths;
	NSString* _cardSectionId;
	SFColor* _backgroundColor;
	NSString* _resultIdentifier;
	SFUserReportRequest* _userReportRequest;
	SFCommand* _command;
	SFCommand* _previewCommand;

}

@property (nonatomic,readonly) NSString * cardSectionIdentifier; 
@property (nonatomic,readonly) id<SFCardSection> backingCardSection; 
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) char hasNextCard; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) char hideDivider;                                       //@synthesize hideDivider=_hideDivider - In the implementation block
@property (assign,nonatomic) char canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) char hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) char hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFCard * nextCard;                                      //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,copy) NSArray * commands;                                       //@synthesize commands=_commands - In the implementation block
@property (nonatomic,copy) NSArray * parameterKeyPaths;                              //@synthesize parameterKeyPaths=_parameterKeyPaths - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                                 //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultIdentifier;                              //@synthesize resultIdentifier=_resultIdentifier - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFUserReportRequest * userReportRequest;                //@synthesize userReportRequest=_userReportRequest - In the implementation block
@property (nonatomic,retain) SFCommand * command;                                    //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) SFCommand * previewCommand;                             //@synthesize previewCommand=_previewCommand - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)actionCommands;
-(id<SFCardSection>)backingCardSection;
-(NSString *)cardSectionIdentifier;
-(char)hasNextCard;
-(Class)_searchUIViewClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFColor *)backgroundColor;
-(SFCommand *)command;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setCommand:(SFCommand *)arg1 ;
-(NSArray *)punchoutOptions;
-(SFCard *)nextCard;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCardSectionId:(NSString *)arg1 ;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(void)setHideDivider:(char)arg1 ;
-(char)hideDivider;
-(void)setCanBeHidden:(char)arg1 ;
-(void)setNextCard:(SFCard *)arg1 ;
-(void)setHasTopPadding:(char)arg1 ;
-(NSString *)cardSectionId;
-(NSString *)resultIdentifier;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1 ;
-(int)separatorStyle;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(NSArray *)arg1 ;
-(SFUserReportRequest *)userReportRequest;
-(void)setUserReportRequest:(SFUserReportRequest *)arg1 ;
-(SFCommand *)previewCommand;
-(void)setPreviewCommand:(SFCommand *)arg1 ;
@end

